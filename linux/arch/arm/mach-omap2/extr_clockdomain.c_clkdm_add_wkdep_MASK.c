
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clockdomain {int wkdep_srcs; } ;
struct clkdm_dep {TYPE_2__* clkdm; } ;
struct TYPE_3__ {int ptr; } ;
struct TYPE_4__ {TYPE_1__ pwrdm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clkdm_dep*) ;
 int FUNC_1 (struct clkdm_dep*) ;
 int FUNC_2 (struct clockdomain*,struct clockdomain*) ;
 struct clkdm_dep* FUNC_3 (struct clockdomain*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct clockdomain *VAR_1, struct clockdomain *VAR_2)
{
 struct clkdm_dep *VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2, VAR_1->wkdep_srcs);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_4(VAR_3->clkdm->pwrdm.ptr);
 VAR_4 = FUNC_2(VAR_1, VAR_2);
 FUNC_5(VAR_3->clkdm->pwrdm.ptr);

 return VAR_4;
}
