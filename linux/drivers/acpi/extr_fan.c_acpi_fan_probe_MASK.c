
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct thermal_cooling_device {TYPE_1__ device; int id; } ;
struct TYPE_7__ {int kobj; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct acpi_fan {int acpi4; struct thermal_cooling_device* cdev; } ;
struct acpi_device {TYPE_2__ dev; struct acpi_fan* driver_data; } ;


 struct acpi_device* ACPI_COMPANION (TYPE_2__*) ;
 int ENOMEM ;
 int GFP_KERNEL ;
 scalar_t__ IS_ERR (struct thermal_cooling_device*) ;
 int PTR_ERR (struct thermal_cooling_device*) ;
 char* acpi_device_bid (struct acpi_device*) ;
 int acpi_device_update_power (struct acpi_device*,int *) ;
 scalar_t__ acpi_fan_get_fif (struct acpi_device*) ;
 scalar_t__ acpi_fan_get_fps (struct acpi_device*) ;
 scalar_t__ acpi_fan_is_acpi4 (struct acpi_device*) ;
 int dev_dbg (TYPE_2__*,char*,int ) ;
 int dev_err (TYPE_2__*,char*) ;
 struct acpi_fan* devm_kzalloc (TYPE_2__*,int,int ) ;
 int fan_cooling_ops ;
 int platform_set_drvdata (struct platform_device*,struct acpi_fan*) ;
 int strlen (char*) ;
 int strncmp (int ,char*,int ) ;
 int sysfs_create_link (int *,int *,char*) ;
 struct thermal_cooling_device* thermal_cooling_device_register (char*,struct acpi_device*,int *) ;

__attribute__((used)) static int acpi_fan_probe(struct platform_device *pdev)
{
 int result = 0;
 struct thermal_cooling_device *cdev;
 struct acpi_fan *fan;
 struct acpi_device *device = ACPI_COMPANION(&pdev->dev);
 char *name;

 fan = devm_kzalloc(&pdev->dev, sizeof(*fan), GFP_KERNEL);
 if (!fan) {
  dev_err(&device->dev, "No memory for fan\n");
  return -ENOMEM;
 }
 device->driver_data = fan;
 platform_set_drvdata(pdev, fan);

 if (acpi_fan_is_acpi4(device)) {
  if (acpi_fan_get_fif(device) || acpi_fan_get_fps(device))
   goto end;
  fan->acpi4 = 1;
 } else {
  result = acpi_device_update_power(device, ((void*)0));
  if (result) {
   dev_err(&device->dev, "Failed to set initial power state\n");
   goto end;
  }
 }

 if (!strncmp(pdev->name, "PNP0C0B", strlen("PNP0C0B")))
  name = "Fan";
 else
  name = acpi_device_bid(device);

 cdev = thermal_cooling_device_register(name, device,
      &fan_cooling_ops);
 if (IS_ERR(cdev)) {
  result = PTR_ERR(cdev);
  goto end;
 }

 dev_dbg(&pdev->dev, "registered as cooling_device%d\n", cdev->id);

 fan->cdev = cdev;
 result = sysfs_create_link(&pdev->dev.kobj,
       &cdev->device.kobj,
       "thermal_cooling");
 if (result)
  dev_err(&pdev->dev, "Failed to create sysfs link 'thermal_cooling'\n");

 result = sysfs_create_link(&cdev->device.kobj,
       &pdev->dev.kobj,
       "device");
 if (result)
  dev_err(&pdev->dev, "Failed to create sysfs link 'device'\n");

end:
 return result;
}
