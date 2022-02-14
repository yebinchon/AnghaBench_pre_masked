
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ result; } ;


 int FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static bool FUNC_1(struct pt_regs *VAR_0)
{
 return ((FUNC_0(VAR_0) == 0xf00) && VAR_0->result);
}
