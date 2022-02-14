
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bcma_drv_cc {int capabilities; TYPE_2__* core; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct bcma_bus {TYPE_1__ chipinfo; } ;
struct TYPE_6__ {int rev; } ;
struct TYPE_5__ {TYPE_3__ id; struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bcma_bus*,char*) ;
 int FUNC_1 (struct bcma_bus*,char*) ;
 int FUNC_2 (struct bcma_drv_cc*) ;
 int FUNC_3 (struct bcma_drv_cc*) ;
 int FUNC_4 (struct bcma_drv_cc*) ;

__attribute__((used)) static void FUNC_5(struct bcma_drv_cc *VAR_3)
{
 struct bcma_bus *VAR_4 = VAR_3->core->bus;

 switch (VAR_3->capabilities & VAR_0) {
 case 128:
 case 130:
  FUNC_0(VAR_4, "Found serial flash\n");
  FUNC_4(VAR_3);
  break;
 case 129:
  FUNC_0(VAR_4, "Found parallel flash\n");
  FUNC_3(VAR_3);
  break;
 default:
  FUNC_1(VAR_4, "Flash type not supported\n");
 }

 if (VAR_3->core->id.rev == 38 ||
     VAR_4->chipinfo.id == VAR_2) {
  if (VAR_3->capabilities & VAR_1) {
   FUNC_0(VAR_4, "Found NAND flash\n");
   FUNC_2(VAR_3);
  }
 }
}
