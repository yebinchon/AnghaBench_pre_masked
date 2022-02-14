
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct powerdomain {int flags; int * pwrdm_clkdms; } ;
struct TYPE_2__ {int (* pwrdm_set_lowpwrstchange ) (struct powerdomain*) ;} ;




 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct powerdomain*) ;
 int FUNC_2 (struct powerdomain*) ;

__attribute__((used)) static void FUNC_3(struct powerdomain *VAR_2,
           u8 VAR_3)
{
 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_2->pwrdm_clkdms[0]);
  break;
 case 128:
  if (VAR_2->flags & VAR_0 &&
      VAR_1->pwrdm_set_lowpwrstchange)
   VAR_1->pwrdm_set_lowpwrstchange(VAR_2);
  FUNC_1(VAR_2);
  break;
 }
}
