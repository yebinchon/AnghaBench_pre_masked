
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int device_class; } ;
struct acpi_device {int dev; TYPE_3__ pnp; } ;
struct acpi_ac {TYPE_2__* charger; int state; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;



 int VAR_0 ;
 int FUNC_0 (int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct acpi_ac*) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct acpi_ac* FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct acpi_device *VAR_3, u32 VAR_4)
{
 struct acpi_ac *VAR_5 = FUNC_3(VAR_3);

 if (!VAR_5)
  return;

 switch (VAR_4) {
 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_4));

 case 130:
 case 129:
 case 128:







  if (VAR_2 > 0)
   FUNC_7(VAR_2);

  FUNC_1(VAR_5);
  FUNC_2(VAR_3->pnp.device_class,
        FUNC_5(&VAR_3->dev), VAR_4,
        (u32) VAR_5->state);
  FUNC_4(VAR_3, VAR_4, (u32) VAR_5->state);
  FUNC_6(&VAR_5->charger->dev.kobj, VAR_1);
 }

 return;
}
