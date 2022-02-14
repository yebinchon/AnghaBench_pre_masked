
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_clk_pll {TYPE_1__* data; int pcw_addr; int pd_addr; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int pd_shift; int pcw_shift; scalar_t__ pcwbits; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct mtk_clk_pll*,unsigned long,int,int) ;
 int FUNC_2 (int ) ;
 struct mtk_clk_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
  unsigned long VAR_2)
{
 struct mtk_clk_pll *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = (FUNC_2(VAR_3->pd_addr) >> VAR_3->data->pd_shift) & VAR_0;
 VAR_4 = 1 << VAR_4;

 VAR_5 = FUNC_2(VAR_3->pcw_addr) >> VAR_3->data->pcw_shift;
 VAR_5 &= FUNC_0(VAR_3->data->pcwbits - 1, 0);

 return FUNC_1(VAR_3, VAR_2, VAR_5, VAR_4);
}
