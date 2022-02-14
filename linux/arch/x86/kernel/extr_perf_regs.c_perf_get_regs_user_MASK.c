
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long sp; int bx; int r12; int r13; int r14; int r15; int bp; int ss; int cs; int flags; int orig_ax; scalar_t__ r11; int r10; int r9; int r8; int di; int si; int dx; int cx; int ax; int ip; } ;
struct perf_regs {struct pt_regs* regs; int abi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pt_regs* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

void FUNC_2(struct perf_regs *VAR_4,
   struct pt_regs *VAR_5,
   struct pt_regs *VAR_6)
{
 struct pt_regs *VAR_7 = FUNC_0(VAR_3);







 if (VAR_5->sp > (unsigned long)&VAR_7->r11 &&
     VAR_5->sp <= (unsigned long)(VAR_7 + 1)) {
  VAR_4->abi = VAR_2;
  VAR_4->regs = ((void*)0);
  return;
 }





 VAR_6->ip = VAR_7->ip;
 VAR_6->ax = VAR_7->ax;
 VAR_6->cx = VAR_7->cx;
 VAR_6->dx = VAR_7->dx;
 VAR_6->si = VAR_7->si;
 VAR_6->di = VAR_7->di;
 VAR_6->r8 = VAR_7->r8;
 VAR_6->r9 = VAR_7->r9;
 VAR_6->r10 = VAR_7->r10;
 VAR_6->r11 = VAR_7->r11;
 VAR_6->orig_ax = VAR_7->orig_ax;
 VAR_6->flags = VAR_7->flags;
 VAR_6->sp = VAR_7->sp;
 VAR_6->cs = VAR_7->cs;
 VAR_6->ss = VAR_7->ss;






 VAR_6->bp = VAR_7->bp;

 VAR_6->bx = -1;
 VAR_6->r12 = -1;
 VAR_6->r13 = -1;
 VAR_6->r14 = -1;
 VAR_6->r15 = -1;







 VAR_4->abi = FUNC_1(VAR_7) ?
  VAR_1 : VAR_0;

 VAR_4->regs = VAR_6;
}
