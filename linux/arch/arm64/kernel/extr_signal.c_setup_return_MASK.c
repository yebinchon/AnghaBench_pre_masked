
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rt_sigframe_user_layout {TYPE_1__* next_frame; scalar_t__ sigframe; } ;
struct pt_regs {int* regs; unsigned long sp; unsigned long pc; } ;
struct TYPE_7__ {int sa_flags; scalar_t__ sa_restorer; scalar_t__ sa_handler; } ;
struct k_sigaction {TYPE_2__ sa; } ;
typedef scalar_t__ __sigrestore_t ;
struct TYPE_10__ {TYPE_4__* mm; } ;
struct TYPE_8__ {int vdso; } ;
struct TYPE_9__ {TYPE_3__ context; } ;
struct TYPE_6__ {int fp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 TYPE_5__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct pt_regs *VAR_2, struct k_sigaction *VAR_3,
    struct rt_sigframe_user_layout *VAR_4, int VAR_5)
{
 __sigrestore_t VAR_6;

 VAR_2->regs[0] = VAR_5;
 VAR_2->sp = (unsigned long)VAR_4->sigframe;
 VAR_2->regs[29] = (unsigned long)&VAR_4->next_frame->fp;
 VAR_2->pc = (unsigned long)VAR_3->sa.sa_handler;

 if (VAR_3->sa.sa_flags & VAR_0)
  VAR_6 = VAR_3->sa.sa_restorer;
 else
  VAR_6 = FUNC_0(VAR_1->mm->context.vdso, VAR_6);

 VAR_2->regs[30] = (unsigned long)VAR_6;
}
