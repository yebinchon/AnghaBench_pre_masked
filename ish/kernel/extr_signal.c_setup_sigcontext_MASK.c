
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigcontext_ {scalar_t__ trapno; int oldmask; int cr2; int flags; int ip; int sp_at_signal; int sp; int bp; int si; int di; int dx; int cx; int bx; int ax; } ;
struct cpu_state {scalar_t__ trapno; int segfault_addr; int eflags; int eip; int esp; int ebp; int esi; int edi; int edx; int ecx; int ebx; int eax; } ;
struct TYPE_2__ {int blocked; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpu_state*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct sigcontext_ *VAR_2, struct cpu_state *VAR_3) {
    VAR_2->ax = VAR_3->eax;
    VAR_2->bx = VAR_3->ebx;
    VAR_2->cx = VAR_3->ecx;
    VAR_2->dx = VAR_3->edx;
    VAR_2->di = VAR_3->edi;
    VAR_2->si = VAR_3->esi;
    VAR_2->bp = VAR_3->ebp;
    VAR_2->sp = VAR_2->sp_at_signal = VAR_3->esp;
    VAR_2->ip = VAR_3->eip;
    FUNC_0(VAR_3);
    VAR_2->flags = VAR_3->eflags;
    VAR_2->trapno = VAR_3->trapno;
    if (VAR_3->trapno == VAR_0)
        VAR_2->cr2 = VAR_3->segfault_addr;

    VAR_2->oldmask = VAR_1->blocked & 0xffffffff;
}
