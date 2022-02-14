
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {TYPE_1__* core; } ;
struct TYPE_4__ {int id; } ;
struct bcma_bus {TYPE_2__ chipinfo; } ;
struct TYPE_3__ {struct bcma_bus* bus; } ;



 int FUNC_0 (struct bcma_drv_cc*,int) ;
 int FUNC_1 (struct bcma_drv_cc*) ;

__attribute__((used)) static void FUNC_2(struct bcma_drv_cc *VAR_0)
{
 struct bcma_bus *VAR_1 = VAR_0->core->bus;
 u32 VAR_2 = FUNC_1(VAR_0);

 switch (VAR_1->chipinfo.id) {
 case 128:
  if (VAR_2 == 0)
   VAR_2 = 20000;
  FUNC_0(VAR_0, VAR_2);
  break;
 }
}
