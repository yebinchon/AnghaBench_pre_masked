
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int pc; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pt_regs*,int ,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_2, struct pt_regs *VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_3, VAR_4, VAR_5) != 0)
  FUNC_3(VAR_1, VAR_0, VAR_3->pc);
}
