
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_clk_pll {scalar_t__ pwr_addr; scalar_t__ base_addr; TYPE_1__* data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int flags; int rst_bar_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mtk_clk_pll*) ;
 int FUNC_1 (scalar_t__) ;
 struct mtk_clk_pll* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_5)
{
 struct mtk_clk_pll *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7;

 if (VAR_6->data->flags & VAR_3) {
  VAR_7 = FUNC_1(VAR_6->base_addr + VAR_4);
  VAR_7 &= ~VAR_6->data->rst_bar_mask;
  FUNC_3(VAR_7, VAR_6->base_addr + VAR_4);
 }

 FUNC_0(VAR_6);

 VAR_7 = FUNC_1(VAR_6->base_addr + VAR_4);
 VAR_7 &= ~VAR_0;
 FUNC_3(VAR_7, VAR_6->base_addr + VAR_4);

 VAR_7 = FUNC_1(VAR_6->pwr_addr) | VAR_1;
 FUNC_3(VAR_7, VAR_6->pwr_addr);

 VAR_7 = FUNC_1(VAR_6->pwr_addr) & ~VAR_2;
 FUNC_3(VAR_7, VAR_6->pwr_addr);
}
