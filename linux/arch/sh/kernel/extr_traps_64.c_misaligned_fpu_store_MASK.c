
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pt_regs {scalar_t__ pc; int sr; } ;
typedef int insn_size_t ;
typedef scalar_t__ __u64 ;
typedef int __u32 ;
struct TYPE_9__ {TYPE_2__* xstate; } ;
struct TYPE_10__ {TYPE_3__ thread; } ;
struct TYPE_7__ {int* fp_regs; } ;
struct TYPE_8__ {TYPE_1__ hardfpu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,scalar_t__*,int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (char*,struct pt_regs*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct pt_regs*,int,int,int,scalar_t__*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_6 (char*,int,unsigned long) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_9(struct pt_regs *VAR_3,
      insn_size_t VAR_4,
      int VAR_5,
      int VAR_6,
      int VAR_7)
{

 int VAR_8;
 int VAR_9;
 __u64 VAR_10;

 VAR_8 = FUNC_5(VAR_3, VAR_4,
   VAR_5, VAR_6, &VAR_10);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = (VAR_4 >> 4) & 0x3f;
 if (FUNC_8(VAR_3)) {
  __u64 VAR_11;

  __u32 VAR_12=0xffffffffUL, VAR_13=0xffffffffUL;

  if (!FUNC_1((unsigned long) VAR_10, 1UL<<VAR_6)) {
   return -1;
  }




  if (VAR_2 == VAR_1) {
   FUNC_4();
   FUNC_7(VAR_1);
   FUNC_3();
   VAR_2 = ((void*)0);
   VAR_3->sr |= VAR_0;
  }

  switch (VAR_6) {
  case 2:
   VAR_12 = VAR_1->thread.xstate->hardfpu.fp_regs[VAR_9];
   break;
  case 3:
   if (VAR_7) {
    VAR_12 = VAR_1->thread.xstate->hardfpu.fp_regs[VAR_9];
    VAR_13 = VAR_1->thread.xstate->hardfpu.fp_regs[VAR_9+1];
   } else {




    VAR_12 = VAR_1->thread.xstate->hardfpu.fp_regs[VAR_9];
    VAR_13 = VAR_1->thread.xstate->hardfpu.fp_regs[VAR_9+1];

   }
   break;
  default:
   FUNC_6("Unexpected width_shift %d in misaligned_fpu_store, PC=%08lx\n",
    VAR_6, (unsigned long) VAR_3->pc);
   break;
  }

  *(__u32*) &VAR_11 = VAR_12;
  *(1 + (__u32*) &VAR_11) = VAR_13;
  if (FUNC_0((void *)(int)VAR_10, &VAR_11, (1 << VAR_6)) > 0) {
   return -1;
  }
  return 0;
 } else {
  FUNC_2 ("Misaligned FPU load inside kernel", VAR_3, 0);
  return -1;
 }
}
