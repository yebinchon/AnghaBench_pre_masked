
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_fpflags; int pcb_fcsr; int pcb_x; } ;
struct TYPE_5__ {int fp_flags; int fp_fcsr; int fp_x; } ;
struct TYPE_6__ {int mc_flags; TYPE_1__ mc_fpregs; } ;
typedef TYPE_2__ mcontext_t ;
struct TYPE_7__ {struct pcb* td_pcb; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct thread *VAR_4, mcontext_t *VAR_5)
{
}
