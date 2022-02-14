
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
struct TYPE_9__ {scalar_t__ fpc; scalar_t__ fprs; scalar_t__ vxrs; } ;
struct TYPE_10__ {TYPE_3__ fpu; scalar_t__* acrs; } ;
struct task_struct {TYPE_4__ thread; } ;
typedef scalar_t__ addr_t ;
struct TYPE_12__ {scalar_t__ orig_gpr2; int psw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct task_struct*,scalar_t__) ;
 TYPE_6__* FUNC_1 (struct task_struct*) ;

__attribute__((used)) static unsigned long FUNC_2(struct task_struct *VAR_5, addr_t VAR_6)
{
 struct user *VAR_7 = ((void*)0);
 addr_t VAR_8, VAR_9;

 if (VAR_6 < (addr_t) &VAR_7->regs.acrs) {



  VAR_9 = *(addr_t *)((addr_t) &FUNC_1(VAR_5)->psw + VAR_6);
  if (VAR_6 == (addr_t) &VAR_7->regs.psw.mask) {

   VAR_9 &= VAR_3 | VAR_2;
   VAR_9 |= VAR_4;
  }

 } else if (VAR_6 < (addr_t) &VAR_7->regs.orig_gpr2) {



  VAR_8 = VAR_6 - (addr_t) &VAR_7->regs.acrs;





  if (VAR_6 == (addr_t) &VAR_7->regs.acrs[15])
   VAR_9 = ((unsigned long) VAR_5->thread.acrs[15]) << 32;
  else
   VAR_9 = *(addr_t *)((addr_t) &VAR_5->thread.acrs + VAR_8);

 } else if (VAR_6 == (addr_t) &VAR_7->regs.orig_gpr2) {



  VAR_9 = (addr_t) FUNC_1(VAR_5)->orig_gpr2;

 } else if (VAR_6 < (addr_t) &VAR_7->regs.fp_regs) {




  VAR_9 = 0;

 } else if (VAR_6 == (addr_t) &VAR_7->regs.fp_regs.fpc) {



  VAR_9 = VAR_5->thread.fpu.fpc;
  VAR_9 <<= VAR_0 - 32;

 } else if (VAR_6 < (addr_t) (&VAR_7->regs.fp_regs + 1)) {




  VAR_8 = VAR_6 - (addr_t) &VAR_7->regs.fp_regs.fprs;
  if (VAR_1)
   VAR_9 = *(addr_t *)
          ((addr_t) VAR_5->thread.fpu.vxrs + 2*VAR_8);
  else
   VAR_9 = *(addr_t *)
          ((addr_t) VAR_5->thread.fpu.fprs + VAR_8);

 } else if (VAR_6 < (addr_t) (&VAR_7->regs.per_info + 1)) {



  VAR_6 -= (addr_t) &VAR_7->regs.per_info;
  VAR_9 = FUNC_0(VAR_5, VAR_6);

 } else
  VAR_9 = 0;

 return VAR_9;
}
