
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_clk_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct mtk_clk_pll*,int *,int *,unsigned long,unsigned long) ;
 int FUNC_1 (struct mtk_clk_pll*,int ,int ) ;
 struct mtk_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2)
{
 struct mtk_clk_pll *VAR_3 = FUNC_2(VAR_0);
 u32 VAR_4 = 0;
 u32 VAR_5;

 FUNC_0(VAR_3, &VAR_4, &VAR_5, VAR_1, VAR_2);
 FUNC_1(VAR_3, VAR_4, VAR_5);

 return 0;
}
