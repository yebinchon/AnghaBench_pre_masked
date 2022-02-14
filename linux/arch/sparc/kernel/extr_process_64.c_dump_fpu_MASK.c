
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_6__ {int * pr_regs; } ;
struct TYPE_7__ {int pr_q_entrysize; unsigned int pr_fsr; int pr_en; int * pr_q; scalar_t__ pr_qcnt; TYPE_1__ pr_fr; } ;
typedef TYPE_2__ elf_fpregset_t32 ;
struct TYPE_8__ {unsigned long pr_fprs; scalar_t__ pr_gsr; scalar_t__ pr_fsr; int * pr_regs; } ;
typedef TYPE_3__ elf_fpregset_t ;
struct TYPE_9__ {unsigned long* fpregs; unsigned long* fpsaved; scalar_t__* gsr; scalar_t__* xfsr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 (int *,unsigned long*,int) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4 (struct pt_regs * VAR_4, elf_fpregset_t * VAR_5)
{
 unsigned long *VAR_6 = FUNC_0()->fpregs;
 unsigned long VAR_7 = FUNC_0()->fpsaved[0];

 if (FUNC_3(VAR_3)) {
  elf_fpregset_t32 *VAR_8 = (elf_fpregset_t32 *)VAR_5;

  if (VAR_7 & VAR_0)
   FUNC_1(&VAR_8->pr_fr.pr_regs[0], VAR_6,
          sizeof(unsigned int) * 32);
  else
   FUNC_2(&VAR_8->pr_fr.pr_regs[0], 0,
          sizeof(unsigned int) * 32);
  VAR_8->pr_qcnt = 0;
  VAR_8->pr_q_entrysize = 8;
  FUNC_2(&VAR_8->pr_q[0], 0,
         (sizeof(unsigned int) * 64));
  if (VAR_7 & VAR_2) {
   VAR_8->pr_fsr = (unsigned int) FUNC_0()->xfsr[0];
   VAR_8->pr_en = 1;
  } else {
   VAR_8->pr_fsr = 0;
   VAR_8->pr_en = 0;
  }
 } else {
  if(VAR_7 & VAR_0)
   FUNC_1(&VAR_5->pr_regs[0], VAR_6,
          sizeof(unsigned int) * 32);
  else
   FUNC_2(&VAR_5->pr_regs[0], 0,
          sizeof(unsigned int) * 32);
  if(VAR_7 & VAR_1)
   FUNC_1(&VAR_5->pr_regs[16], VAR_6+16,
          sizeof(unsigned int) * 32);
  else
   FUNC_2(&VAR_5->pr_regs[16], 0,
          sizeof(unsigned int) * 32);
  if(VAR_7 & VAR_2) {
   VAR_5->pr_fsr = FUNC_0()->xfsr[0];
   VAR_5->pr_gsr = FUNC_0()->gsr[0];
  } else {
   VAR_5->pr_fsr = VAR_5->pr_gsr = 0;
  }
  VAR_5->pr_fprs = VAR_7;
 }
 return 1;
}
