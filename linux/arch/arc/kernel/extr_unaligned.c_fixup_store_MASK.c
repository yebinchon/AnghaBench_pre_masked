
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct disasm_state {int aa; int src3; int zz; int fault; scalar_t__ src2; int src1; int wb_reg; } ;
struct callee_regs {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,struct pt_regs*,struct callee_regs*) ;

__attribute__((used)) static void FUNC_3(struct disasm_state *VAR_0, struct pt_regs *VAR_1,
   struct callee_regs *VAR_2)
{

 if ((VAR_0->aa == 1) || (VAR_0->aa == 2)) {
  FUNC_2(VAR_0->wb_reg, VAR_0->src2 + VAR_0->src3, VAR_1, VAR_2);

  if (VAR_0->aa == 3)
   VAR_0->src3 = 0;
 } else if (VAR_0->aa == 3) {
  if (VAR_0->zz == 2) {
   FUNC_2(VAR_0->wb_reg, VAR_0->src2 + (VAR_0->src3 << 1),
    VAR_1, VAR_2);
  } else if (!VAR_0->zz) {
   FUNC_2(VAR_0->wb_reg, VAR_0->src2 + (VAR_0->src3 << 2),
    VAR_1, VAR_2);
  } else {
   goto fault;
  }
 }


 if (!VAR_0->zz)
  FUNC_1(VAR_0->src1, VAR_0->src2 + VAR_0->src3);
 else
  FUNC_0(VAR_0->src1, VAR_0->src2 + VAR_0->src3);

 return;

fault: VAR_0->fault = 1;
}
