
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* aux_dpfp; } ;
struct TYPE_6__ {TYPE_2__ fpu; } ;
struct task_struct {TYPE_3__ thread; } ;
struct TYPE_4__ {unsigned int l; } ;



void FUNC_0(struct task_struct *VAR_0, struct task_struct *VAR_1)
{
 unsigned int *VAR_2 = &VAR_0->thread.fpu.aux_dpfp[0].l;
 unsigned int *VAR_3 = &VAR_1->thread.fpu.aux_dpfp[0].l;

 const unsigned int VAR_4 = 0;

 __asm__ __volatile__(
  "daddh11  %0, %2, %2\n"
  "dexcl1   %1, %3, %4\n"
  : "=&r" (*(VAR_2 + 1)),
    "=&r" (*(VAR_2))
  : "r" (VAR_4), "r" (*(VAR_3 + 1)), "r" (*(VAR_3))
 );

 __asm__ __volatile__(
  "daddh22  %0, %2, %2\n"
  "dexcl2   %1, %3, %4\n"
  : "=&r"(*(VAR_2 + 3)),
    "=&r"(*(VAR_2 + 2))
  : "r" (VAR_4), "r" (*(VAR_3 + 3)), "r" (*(VAR_3 + 2))
 );
}
