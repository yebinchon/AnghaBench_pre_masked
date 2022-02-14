
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int device_class; } ;
struct acpi_device {int dev; TYPE_1__ pnp; } ;
typedef int acpi_handle ;



 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(acpi_handle VAR_0, u32 VAR_1,
 void *VAR_2)
{
 struct acpi_device *VAR_3 = VAR_2;

 switch (VAR_1) {
 case 128:
  FUNC_1(VAR_0);
  FUNC_0(VAR_3->pnp.device_class,
   FUNC_2(&VAR_3->dev), VAR_1, 0);
  break;
 default:
  FUNC_3("Unsupported event [0x%x]\n", VAR_1);
  break;
 }
}
