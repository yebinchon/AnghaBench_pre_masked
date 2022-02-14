
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct pt_regs *VAR_0)
{
 u64 VAR_1 = FUNC_2();

 FUNC_0(VAR_0);
 FUNC_1(FUNC_2() - VAR_1);
}
