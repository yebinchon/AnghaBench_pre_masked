
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_5__ {int reset_ovfl_pmds; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct TYPE_7__ {int pmd_eventid; TYPE_2__ ovfl_ctrl; } ;
typedef TYPE_3__ pfm_ovfl_arg_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pt_regs*,int) ;

__attribute__((used)) static int
FUNC_1(struct task_struct *VAR_1, void *VAR_2, pfm_ovfl_arg_t *VAR_3,
                struct pt_regs *VAR_4, unsigned long VAR_5)
{
 int VAR_6 = VAR_3->pmd_eventid;

 VAR_3->ovfl_ctrl.bits.reset_ovfl_pmds = 1;




 if (VAR_0)
  FUNC_0(VAR_4, VAR_6);
 return 0;
}
