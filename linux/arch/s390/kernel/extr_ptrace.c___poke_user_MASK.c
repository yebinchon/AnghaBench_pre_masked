
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fprs; int fpc; } ;
struct TYPE_7__ {int mask; } ;
struct TYPE_11__ {int per_info; TYPE_2__ fp_regs; int orig_gpr2; int * acrs; TYPE_1__ psw; } ;
struct user {TYPE_5__ regs; } ;
struct TYPE_9__ {scalar_t__ fprs; scalar_t__ vxrs; scalar_t__ fpc; } ;
struct TYPE_10__ {unsigned int* acrs; TYPE_3__ fpu; } ;
struct task_struct {TYPE_4__ thread; } ;
typedef scalar_t__ addr_t ;
struct TYPE_12__ {scalar_t__ orig_gpr2; int psw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct task_struct*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 TYPE_6__* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_10, addr_t VAR_11, addr_t VAR_12)
{
 struct user *VAR_13 = ((void*)0);
 addr_t VAR_14;

 if (VAR_11 < (addr_t) &VAR_13->regs.acrs) {



  if (VAR_11 == (addr_t) &VAR_13->regs.psw.mask) {
   unsigned long VAR_15 = VAR_8;

   VAR_15 |= FUNC_1(VAR_10) ? VAR_7 : 0;
   if ((VAR_12 ^ VAR_9) & ~VAR_15)

    return -VAR_1;
   if ((VAR_12 & VAR_4) == VAR_3)

    return -VAR_1;
   if ((VAR_12 & VAR_6) && !(VAR_12 & VAR_5))

    return -VAR_1;
  }
  *(addr_t *)((addr_t) &FUNC_2(VAR_10)->psw + VAR_11) = VAR_12;

 } else if (VAR_11 < (addr_t) (&VAR_13->regs.orig_gpr2)) {



  VAR_14 = VAR_11 - (addr_t) &VAR_13->regs.acrs;






  if (VAR_11 == (addr_t) &VAR_13->regs.acrs[15])
   VAR_10->thread.acrs[15] = (unsigned int) (VAR_12 >> 32);
  else
   *(addr_t *)((addr_t) &VAR_10->thread.acrs + VAR_14) = VAR_12;

 } else if (VAR_11 == (addr_t) &VAR_13->regs.orig_gpr2) {



  FUNC_2(VAR_10)->orig_gpr2 = VAR_12;

 } else if (VAR_11 < (addr_t) &VAR_13->regs.fp_regs) {




  return 0;

 } else if (VAR_11 == (addr_t) &VAR_13->regs.fp_regs.fpc) {



  if ((unsigned int) VAR_12 != 0 ||
      FUNC_3(VAR_12 >> (VAR_0 - 32)))
   return -VAR_1;
  VAR_10->thread.fpu.fpc = VAR_12 >> (VAR_0 - 32);

 } else if (VAR_11 < (addr_t) (&VAR_13->regs.fp_regs + 1)) {




  VAR_14 = VAR_11 - (addr_t) &VAR_13->regs.fp_regs.fprs;
  if (VAR_2)
   *(addr_t *)((addr_t)
    VAR_10->thread.fpu.vxrs + 2*VAR_14) = VAR_12;
  else
   *(addr_t *)((addr_t)
    VAR_10->thread.fpu.fprs + VAR_14) = VAR_12;

 } else if (VAR_11 < (addr_t) (&VAR_13->regs.per_info + 1)) {



  VAR_11 -= (addr_t) &VAR_13->regs.per_info;
  FUNC_0(VAR_10, VAR_11, VAR_12);

 }

 return 0;
}
