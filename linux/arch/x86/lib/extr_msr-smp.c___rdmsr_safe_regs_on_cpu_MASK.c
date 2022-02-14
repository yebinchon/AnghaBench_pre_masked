
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_regs_info {int regs; int err; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct msr_regs_info *VAR_1 = VAR_0;

 VAR_1->err = FUNC_0(VAR_1->regs);
}
