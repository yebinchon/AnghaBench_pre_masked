
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* notify ) (struct acpi_device*,int ) ;} ;
struct acpi_driver {int flags; TYPE_1__ ops; } ;
struct acpi_device {struct acpi_driver* driver; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct acpi_device* FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct acpi_device*,int ) ;
 int FUNC_7 (struct acpi_device*,int ) ;

__attribute__((used)) static void FUNC_8(acpi_handle VAR_2, u32 VAR_3, void *VAR_4)
{
 struct acpi_device *VAR_5;
 struct acpi_driver *VAR_6;
 u32 VAR_7 = VAR_1;
 bool VAR_8 = 0;

 switch (VAR_3) {
 case 135:
  FUNC_4(VAR_2, "ACPI_NOTIFY_BUS_CHECK event\n");
  VAR_8 = 1;
  break;

 case 133:
  FUNC_4(VAR_2, "ACPI_NOTIFY_DEVICE_CHECK event\n");
  VAR_8 = 1;
  break;

 case 131:
  FUNC_4(VAR_2, "ACPI_NOTIFY_DEVICE_WAKE event\n");
  break;

 case 130:
  FUNC_4(VAR_2, "ACPI_NOTIFY_EJECT_REQUEST event\n");
  VAR_8 = 1;
  break;

 case 132:
  FUNC_4(VAR_2, "ACPI_NOTIFY_DEVICE_CHECK_LIGHT event\n");

  break;

 case 129:
  FUNC_5(VAR_2, "Device cannot be configured due "
    "to a frequency mismatch\n");
  break;

 case 134:
  FUNC_5(VAR_2, "Device cannot be configured due "
    "to a bus mode mismatch\n");
  break;

 case 128:
  FUNC_5(VAR_2, "Device has suffered a power fault\n");
  break;

 default:
  FUNC_4(VAR_2, "Unknown event type 0x%x\n", VAR_3);
  break;
 }

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  goto err;

 VAR_6 = VAR_5->driver;
 if (VAR_6 && VAR_6->ops.notify &&
     (VAR_6->flags & VAR_0))
  VAR_6->ops.notify(VAR_5, VAR_3);

 if (!VAR_8) {
  FUNC_2(VAR_5);
  return;
 }

 if (FUNC_0(FUNC_6(VAR_5, VAR_3)))
  return;

 FUNC_2(VAR_5);

 err:
 FUNC_3(VAR_2, VAR_3, VAR_7, ((void*)0));
}
