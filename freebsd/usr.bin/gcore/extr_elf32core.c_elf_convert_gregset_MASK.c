
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct reg {int pc; int ctr; int xer; int cr; int lr; int * fixreg; int spsr; int elr; int * x; int r_ss; int r_rsp; int r_rflags; int r_cs; int r_rip; int r_rax; int r_rcx; int r_rdx; int r_rbx; int r_rbp; int r_rsi; int r_rdi; int r_ds; int r_es; int r_fs; int r_gs; } ;
struct TYPE_3__ {int pc; int ctr; int xer; int cr; int lr; int * fixreg; int r_cpsr; int r_pc; int r_lr; int r_sp; int * r; int r_ss; int r_esp; int r_eflags; int r_cs; int r_eip; int r_eax; int r_ecx; int r_edx; int r_ebx; int r_ebp; int r_esi; int r_edi; int r_ds; int r_es; int r_fs; int r_gs; } ;
typedef TYPE_1__ elfcore_gregset_t ;



__attribute__((used)) static void
FUNC_0(elfcore_gregset_t *VAR_0, struct reg *VAR_1)
{

 VAR_0->r_gs = VAR_1->r_gs;
 VAR_0->r_fs = VAR_1->r_fs;
 VAR_0->r_es = VAR_1->r_es;
 VAR_0->r_ds = VAR_1->r_ds;
 VAR_0->r_edi = VAR_1->r_rdi;
 VAR_0->r_esi = VAR_1->r_rsi;
 VAR_0->r_ebp = VAR_1->r_rbp;
 VAR_0->r_ebx = VAR_1->r_rbx;
 VAR_0->r_edx = VAR_1->r_rdx;
 VAR_0->r_ecx = VAR_1->r_rcx;
 VAR_0->r_eax = VAR_1->r_rax;
 VAR_0->r_eip = VAR_1->r_rip;
 VAR_0->r_cs = VAR_1->r_cs;
 VAR_0->r_eflags = VAR_1->r_rflags;
 VAR_0->r_esp = VAR_1->r_rsp;
 VAR_0->r_ss = VAR_1->r_ss;
}
