
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct perf_regs {scalar_t__ regs; int abi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct perf_regs *VAR_2,
   struct pt_regs *VAR_3,
   struct pt_regs *VAR_4)
{
 VAR_2->regs = FUNC_1(VAR_1);
 VAR_2->abi = (VAR_2->regs) ? FUNC_0(VAR_1) :
    VAR_0;
}
