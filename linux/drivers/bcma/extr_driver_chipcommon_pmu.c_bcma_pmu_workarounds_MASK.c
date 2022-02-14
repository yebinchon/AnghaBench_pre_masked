
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcma_drv_cc {TYPE_1__* core; } ;
struct TYPE_4__ {int id; int rev; } ;
struct bcma_bus {TYPE_2__ chipinfo; } ;
struct TYPE_3__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct bcma_drv_cc*,int ,int ,int ) ;
 int FUNC_1 (struct bcma_drv_cc*,int) ;
 int FUNC_2 (struct bcma_drv_cc*,int ,int ,int ) ;
 int FUNC_3 (struct bcma_bus*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct bcma_drv_cc *VAR_5)
{
 struct bcma_bus *VAR_6 = VAR_5->core->bus;

 switch (VAR_6->chipinfo.id) {
 case 132:


  FUNC_2(VAR_5, 0,
         ~VAR_0,
         VAR_0);
  break;
 case 130:
 case 128:

  FUNC_1(VAR_5, 1);
  break;
 case 131:
 case 129:


  if (VAR_6->chipinfo.rev == 0) {
   FUNC_0(VAR_5, VAR_4,
       ~VAR_3,
       VAR_3);
   FUNC_2(VAR_5, 0,
          ~VAR_1,
          VAR_1);
  } else {
   FUNC_2(VAR_5, 0,
          ~VAR_2,
          VAR_2);
  }
  break;
 default:
  FUNC_3(VAR_6, "Workarounds unknown or not needed for device 0x%04X\n",
      VAR_6->chipinfo.id);
 }
}
