
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_pll_14nm_postdiv {int flags; int width; struct dsi_pll_14nm* pll; } ;
struct dsi_pll_14nm {int id; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (char*,int ,unsigned long) ;
 long FUNC_1 (struct clk_hw*,unsigned long,unsigned long*,int *,int ,int ) ;
 struct dsi_pll_14nm_postdiv* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0,
         unsigned long VAR_1,
         unsigned long *VAR_2)
{
 struct dsi_pll_14nm_postdiv *VAR_3 = FUNC_2(VAR_0);
 struct dsi_pll_14nm *VAR_4 = VAR_3->pll;

 FUNC_0("DSI%d PLL parent rate=%lu", VAR_4->id, VAR_1);

 return FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0),
      VAR_3->width,
      VAR_3->flags);
}
