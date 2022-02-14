
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clockdomain {scalar_t__ clkdm_offs; int cm_inst; int prcm_partition; struct clkdm_dep* wkdep_srcs; } ;
struct clkdm_dep {scalar_t__ wkdep_usecount; TYPE_1__* clkdm; scalar_t__ clkdm_name; } ;
struct TYPE_2__ {int dep_bit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct clockdomain *VAR_1)
{
 struct clkdm_dep *VAR_2;
 u32 VAR_3 = 0;

 if (!VAR_1->prcm_partition)
  return 0;

 for (VAR_2 = VAR_1->wkdep_srcs; VAR_2 && VAR_2->clkdm_name; VAR_2++) {
  if (!VAR_2->clkdm)
   continue;

  VAR_3 |= 1 << VAR_2->clkdm->dep_bit;
  VAR_2->wkdep_usecount = 0;
 }

 FUNC_0(VAR_3, VAR_1->prcm_partition,
      VAR_1->cm_inst, VAR_1->clkdm_offs +
      VAR_0);
 return 0;
}
