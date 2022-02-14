
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int * regs; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct pt_regs *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_4 = VAR_1->regs[FUNC_1(VAR_2)];
 __asm__ __volatile__("clo %0, %1" : "=r"(VAR_3) : "r"(VAR_4));
 VAR_1->regs[FUNC_0(VAR_2)] = VAR_3;

 FUNC_2(VAR_0);

 return 0;
}
