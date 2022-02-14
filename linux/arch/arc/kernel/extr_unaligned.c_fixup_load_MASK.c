
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct disasm_state {int aa; int src1; int src2; scalar_t__ zz; scalar_t__ pref; int fault; int dest; scalar_t__ x; int wb_reg; } ;
struct callee_regs {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,struct pt_regs*,struct callee_regs*) ;

__attribute__((used)) static void FUNC_3(struct disasm_state *VAR_0, struct pt_regs *VAR_1,
   struct callee_regs *VAR_2)
{
 int VAR_3;


 if ((VAR_0->aa == 1) || (VAR_0->aa == 2)) {
  FUNC_2(VAR_0->wb_reg, VAR_0->src1 + VAR_0->src2, VAR_1, VAR_2);

  if (VAR_0->aa == 2)
   VAR_0->src2 = 0;
 }

 if (VAR_0->zz == 0) {
  FUNC_1(VAR_3, VAR_0->src1 + VAR_0->src2);
 } else {
  FUNC_0(VAR_3, VAR_0->src1 + VAR_0->src2);

  if (VAR_0->x)
   VAR_3 = (VAR_3 << 16) >> 16;
 }

 if (VAR_0->pref == 0)
  FUNC_2(VAR_0->dest, VAR_3, VAR_1, VAR_2);

 return;

fault: VAR_0->fault = 1;
}
