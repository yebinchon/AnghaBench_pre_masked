
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigcontext_ {int flags; int ip; int sp; int bp; int si; int di; int dx; int cx; int bx; int ax; } ;
struct cpu_state {int eflags; int eip; int esp; int ebp; int esi; int edi; int edx; int ecx; int ebx; int eax; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpu_state*) ;

__attribute__((used)) static void FUNC_1(struct sigcontext_ *VAR_1, struct cpu_state *VAR_2) {
    VAR_2->eax = VAR_1->ax;
    VAR_2->ebx = VAR_1->bx;
    VAR_2->ecx = VAR_1->cx;
    VAR_2->edx = VAR_1->dx;
    VAR_2->edi = VAR_1->di;
    VAR_2->esi = VAR_1->si;
    VAR_2->ebp = VAR_1->bp;
    VAR_2->esp = VAR_1->sp;
    VAR_2->eip = VAR_1->ip;
    FUNC_0(VAR_2);



    VAR_2->eflags = (VAR_1->flags & 0b1010000110111010101) | (VAR_2->eflags & ~0b1010000110111010101);
}
