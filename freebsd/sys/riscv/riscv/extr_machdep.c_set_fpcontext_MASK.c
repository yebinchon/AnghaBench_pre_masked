
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int dummy; } ;
struct pcb {int pcb_fpflags; int pcb_fcsr; int pcb_x; } ;
struct TYPE_5__ {int fp_flags; int fp_fcsr; int fp_x; } ;
struct TYPE_6__ {int mc_flags; TYPE_1__ mc_fpregs; } ;
typedef TYPE_2__ mcontext_t ;
struct TYPE_7__ {struct pcb* td_pcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct thread *VAR_3, mcontext_t *VAR_4)
{
}
