
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swregs_state {int cwd; int twd; int no_update; int fip; int foo; scalar_t__ ftop; scalar_t__ swd; } ;
struct address {scalar_t__ opcode; scalar_t__ selector; scalar_t__ offset; } ;


 int FUNC_0 (struct swregs_state*,int ,int) ;

void FUNC_1(struct swregs_state *VAR_0)
{
 struct address *VAR_1, *VAR_2;
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->cwd = 0x037f;
 VAR_0->swd = 0;
 VAR_0->ftop = 0;
 VAR_0->twd = 0xffff;


 VAR_1 = (struct address *)&VAR_0->foo;
 VAR_1->offset = 0;
 VAR_1->selector = 0;
 VAR_2 = (struct address *)&VAR_0->fip;
 VAR_2->offset = 0;
 VAR_2->selector = 0;
 VAR_2->opcode = 0;
 VAR_0->no_update = 1;
}
