
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pt_regs {int * regs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_3, u32 VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;

 if (FUNC_0(VAR_0))
  return VAR_1;

 if (!FUNC_1(VAR_4))
  return 0;

 VAR_6 = VAR_3->regs[FUNC_2(VAR_4)];
 __asm__ __volatile__("dclo %0, %1" : "=r"(VAR_5) : "r"(VAR_6));
 VAR_3->regs[FUNC_1(VAR_4)] = VAR_5;

 FUNC_3(VAR_2);

 return 0;
}
