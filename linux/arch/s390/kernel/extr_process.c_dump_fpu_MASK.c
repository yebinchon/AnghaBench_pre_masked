
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_8__ {int fprs; scalar_t__ pad; int fpc; } ;
typedef TYPE_3__ s390_fp_regs ;
typedef int freg_t ;
struct TYPE_6__ {int fprs; int vxrs; int fpc; } ;
struct TYPE_7__ {TYPE_1__ fpu; } ;
struct TYPE_9__ {TYPE_2__ thread; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_5__* VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 () ;

int FUNC_3 (struct pt_regs * VAR_2, s390_fp_regs *VAR_3)
{
 FUNC_2();
 VAR_3->fpc = VAR_1->thread.fpu.fpc;
 VAR_3->pad = 0;
 if (VAR_0)
  FUNC_0((freg_t *)&VAR_3->fprs,
     VAR_1->thread.fpu.vxrs);
 else
  FUNC_1(&VAR_3->fprs, VAR_1->thread.fpu.fprs,
         sizeof(VAR_3->fprs));
 return 1;
}
