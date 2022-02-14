
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_processor {int performance_platform_limit; } ;
struct TYPE_2__ {int device_class; } ;
struct acpi_device {scalar_t__ handle; int dev; TYPE_1__ pnp; } ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int ,int ,int,int) ;
 struct acpi_processor* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_processor*) ;
 int FUNC_4 (struct acpi_processor*,int) ;
 int FUNC_5 (struct acpi_processor*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(acpi_handle VAR_1, u32 VAR_2, void *VAR_3)
{
 struct acpi_device *VAR_4 = VAR_3;
 struct acpi_processor *VAR_5;
 int VAR_6;

 if (VAR_4->handle != VAR_1)
  return;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return;

 switch (VAR_2) {
 case 130:
  VAR_6 = VAR_5->performance_platform_limit;
  FUNC_4(VAR_5, 1);
  if (VAR_6 == VAR_5->performance_platform_limit)
   break;
  FUNC_1(VAR_4->pnp.device_class,
        FUNC_6(&VAR_4->dev), VAR_2,
        VAR_5->performance_platform_limit);
  break;
 case 129:
  FUNC_3(VAR_5);
  FUNC_1(VAR_4->pnp.device_class,
        FUNC_6(&VAR_4->dev), VAR_2, 0);
  break;
 case 128:
  FUNC_5(VAR_5);
  FUNC_1(VAR_4->pnp.device_class,
        FUNC_6(&VAR_4->dev), VAR_2, 0);
  break;
 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_2));
  break;
 }

 return;
}
