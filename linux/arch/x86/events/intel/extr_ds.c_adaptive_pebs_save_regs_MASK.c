
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int sp; int bp; int di; int si; int dx; int cx; int bx; int ax; } ;
struct pebs_gprs {int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int sp; int bp; int di; int si; int dx; int cx; int bx; int ax; } ;



__attribute__((used)) static void FUNC_0(struct pt_regs *VAR_0,
        struct pebs_gprs *VAR_1)
{
 VAR_0->ax = VAR_1->ax;
 VAR_0->bx = VAR_1->bx;
 VAR_0->cx = VAR_1->cx;
 VAR_0->dx = VAR_1->dx;
 VAR_0->si = VAR_1->si;
 VAR_0->di = VAR_1->di;
 VAR_0->bp = VAR_1->bp;
 VAR_0->sp = VAR_1->sp;

 VAR_0->r8 = VAR_1->r8;
 VAR_0->r9 = VAR_1->r9;
 VAR_0->r10 = VAR_1->r10;
 VAR_0->r11 = VAR_1->r11;
 VAR_0->r12 = VAR_1->r12;
 VAR_0->r13 = VAR_1->r13;
 VAR_0->r14 = VAR_1->r14;
 VAR_0->r15 = VAR_1->r15;

}
