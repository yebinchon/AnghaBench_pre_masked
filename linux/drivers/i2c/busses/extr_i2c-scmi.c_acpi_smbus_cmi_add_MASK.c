
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smbus_methods_t {int dummy; } ;
struct TYPE_3__ {int * parent; } ;
struct TYPE_4__ {int class; TYPE_1__ dev; struct acpi_smbus_cmi* algo_data; int * algo; int owner; int name; } ;
struct acpi_smbus_cmi {scalar_t__ cap_info; TYPE_2__ adapter; int handle; struct smbus_methods_t* methods; scalar_t__ cap_write; scalar_t__ cap_read; } ;
struct acpi_device_id {scalar_t__ driver_data; scalar_t__* id; } ;
struct acpi_device {struct acpi_smbus_cmi* driver_data; int dev; int handle; } ;


 int ACPI_SMBUS_HC_CLASS ;
 int ACPI_SMBUS_HC_DEVICE_NAME ;
 int ACPI_TYPE_METHOD ;
 int ENODEV ;
 int ENOMEM ;
 int GFP_KERNEL ;
 int I2C_CLASS_HWMON ;
 int I2C_CLASS_SPD ;
 int THIS_MODULE ;
 char* acpi_device_class (struct acpi_device*) ;
 int acpi_device_hid (struct acpi_device*) ;
 char* acpi_device_name (struct acpi_device*) ;
 int acpi_smbus_cmi_algorithm ;
 struct acpi_device_id* acpi_smbus_cmi_ids ;
 int acpi_smbus_cmi_query_methods ;
 int acpi_walk_namespace (int ,int ,int,int ,int *,struct acpi_smbus_cmi*,int *) ;
 int dev_err (int *,char*) ;
 int i2c_add_adapter (TYPE_2__*) ;
 int kfree (struct acpi_smbus_cmi*) ;
 struct acpi_smbus_cmi* kzalloc (int,int ) ;
 int snprintf (int ,int,char*,char*) ;
 int strcmp (scalar_t__*,int ) ;
 int strcpy (char*,int ) ;

__attribute__((used)) static int acpi_smbus_cmi_add(struct acpi_device *device)
{
 struct acpi_smbus_cmi *smbus_cmi;
 const struct acpi_device_id *id;
 int ret;

 smbus_cmi = kzalloc(sizeof(struct acpi_smbus_cmi), GFP_KERNEL);
 if (!smbus_cmi)
  return -ENOMEM;

 smbus_cmi->handle = device->handle;
 strcpy(acpi_device_name(device), ACPI_SMBUS_HC_DEVICE_NAME);
 strcpy(acpi_device_class(device), ACPI_SMBUS_HC_CLASS);
 device->driver_data = smbus_cmi;
 smbus_cmi->cap_info = 0;
 smbus_cmi->cap_read = 0;
 smbus_cmi->cap_write = 0;

 for (id = acpi_smbus_cmi_ids; id->id[0]; id++)
  if (!strcmp(id->id, acpi_device_hid(device)))
   smbus_cmi->methods =
    (struct smbus_methods_t *) id->driver_data;

 acpi_walk_namespace(ACPI_TYPE_METHOD, smbus_cmi->handle, 1,
       acpi_smbus_cmi_query_methods, ((void*)0), smbus_cmi, ((void*)0));

 if (smbus_cmi->cap_info == 0) {
  ret = -ENODEV;
  goto err;
 }

 snprintf(smbus_cmi->adapter.name, sizeof(smbus_cmi->adapter.name),
  "SMBus CMI adapter %s",
  acpi_device_name(device));
 smbus_cmi->adapter.owner = THIS_MODULE;
 smbus_cmi->adapter.algo = &acpi_smbus_cmi_algorithm;
 smbus_cmi->adapter.algo_data = smbus_cmi;
 smbus_cmi->adapter.class = I2C_CLASS_HWMON | I2C_CLASS_SPD;
 smbus_cmi->adapter.dev.parent = &device->dev;

 ret = i2c_add_adapter(&smbus_cmi->adapter);
 if (ret) {
  dev_err(&device->dev, "Couldn't register adapter!\n");
  goto err;
 }

 return 0;

err:
 kfree(smbus_cmi);
 device->driver_data = ((void*)0);
 return ret;
}
