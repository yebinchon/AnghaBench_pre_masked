
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_plt {int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct clk_plt* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_plt *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->reg);

 return FUNC_0(VAR_2);
}
