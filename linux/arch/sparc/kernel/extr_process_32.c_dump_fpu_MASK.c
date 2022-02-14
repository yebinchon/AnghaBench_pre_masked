
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pt_regs {int psr; } ;
struct fpq {int dummy; } ;
struct TYPE_9__ {TYPE_3__* pr_regs; } ;
struct TYPE_11__ {int pr_q_entrysize; int pr_qcnt; int pr_en; struct TYPE_11__* pr_q; int pr_fsr; TYPE_1__ pr_fr; } ;
typedef TYPE_3__ elf_fpregset_t ;
struct TYPE_10__ {int fpqdepth; int * fpqueue; int fsr; int * float_regs; } ;
struct TYPE_12__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_6__* VAR_2 ;
 int FUNC_1 (int *,int *,int *,int*) ;
 int FUNC_2 () ;
 TYPE_6__* VAR_3 ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;

int FUNC_8 (struct pt_regs * VAR_4, elf_fpregset_t * VAR_5)
{
 if (FUNC_7()) {
  FUNC_4(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->pr_q_entrysize = 8;
  return 1;
 }
 if (VAR_2 == VAR_3) {
  FUNC_5(FUNC_2() | VAR_0);
  FUNC_1(&VAR_2->thread.float_regs[0], &VAR_2->thread.fsr,
         &VAR_2->thread.fpqueue[0], &VAR_2->thread.fpqdepth);
  if (VAR_4 != ((void*)0)) {
   VAR_4->psr &= ~(VAR_0);
   VAR_3 = ((void*)0);
  }
 }

 FUNC_3(&VAR_5->pr_fr.pr_regs[0],
        &VAR_2->thread.float_regs[0],
        (sizeof(unsigned long) * 32));
 VAR_5->pr_fsr = VAR_2->thread.fsr;
 VAR_5->pr_qcnt = VAR_2->thread.fpqdepth;
 VAR_5->pr_q_entrysize = 8;
 VAR_5->pr_en = 1;
 if(VAR_5->pr_qcnt != 0) {
  FUNC_3(&VAR_5->pr_q[0],
         &VAR_2->thread.fpqueue[0],
         sizeof(struct fpq) * VAR_5->pr_qcnt);
 }

 FUNC_4(&VAR_5->pr_q[VAR_5->pr_qcnt], 0,
        sizeof(struct fpq) * (32 - VAR_5->pr_qcnt));
 return 1;
}
