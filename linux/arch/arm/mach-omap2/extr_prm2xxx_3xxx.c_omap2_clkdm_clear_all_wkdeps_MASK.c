
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* ptr; } ;
struct clockdomain {TYPE_2__ pwrdm; struct clkdm_dep* wkdep_srcs; } ;
struct clkdm_dep {scalar_t__ wkdep_usecount; TYPE_3__* clkdm; scalar_t__ clkdm_name; } ;
struct TYPE_6__ {int dep_bit; } ;
struct TYPE_4__ {int prcm_offs; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;

int FUNC_1(struct clockdomain *VAR_1)
{
 struct clkdm_dep *VAR_2;
 u32 VAR_3 = 0;

 for (VAR_2 = VAR_1->wkdep_srcs; VAR_2 && VAR_2->clkdm_name; VAR_2++) {
  if (!VAR_2->clkdm)
   continue;


  VAR_3 |= 1 << VAR_2->clkdm->dep_bit;
  VAR_2->wkdep_usecount = 0;
 }

 FUNC_0(VAR_3, VAR_1->pwrdm.ptr->prcm_offs,
         VAR_0);
 return 0;
}
