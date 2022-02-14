
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pllv4 {int base; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct clk_pllv4* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 u32 VAR_2;
 struct clk_pllv4 *VAR_3 = FUNC_1(VAR_1);

 VAR_2 = FUNC_0(VAR_3->base);
 VAR_2 &= ~VAR_0;
 FUNC_2(VAR_2, VAR_3->base);
}
