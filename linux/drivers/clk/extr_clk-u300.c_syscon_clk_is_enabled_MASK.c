
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_syscon {int en_bit; int en_reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct clk_syscon* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_syscon *VAR_1 = FUNC_2(VAR_0);
 u16 VAR_2;


 if (!VAR_1->en_reg)
  return 1;

 VAR_2 = FUNC_1(VAR_1->en_reg);
 VAR_2 &= FUNC_0(VAR_1->en_bit);

 return VAR_2 ? 1 : 0;
}
