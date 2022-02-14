
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_sccg_pll {int bypass1; int bypass2; scalar_t__ base; int parent; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct clk_sccg_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_3)
{
 struct clk_sccg_pll *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;
 u8 VAR_6 = VAR_4->parent;

 VAR_5 = FUNC_0(VAR_4->base + VAR_0);
 if (VAR_5 & VAR_2)
  VAR_6 = VAR_4->bypass2;
 else if (VAR_5 & VAR_1)
  VAR_6 = VAR_4->bypass1;
 return VAR_6;
}
