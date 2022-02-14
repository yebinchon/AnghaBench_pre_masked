
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct perf_regs {int abi; int regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct perf_regs *VAR_1,
   struct pt_regs *VAR_2,
   struct pt_regs *VAR_3)
{
 VAR_1->regs = FUNC_1(VAR_0);
 VAR_1->abi = FUNC_0(VAR_0);
}
