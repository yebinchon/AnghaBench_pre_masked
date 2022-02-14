
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int bypass; } ;
struct clk_sccg_pll {scalar_t__ base; TYPE_1__ setup; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct clk_sccg_pll*) ;
 int FUNC_2 (scalar_t__) ;
 struct clk_sccg_pll* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_2, u8 VAR_3)
{
 struct clk_sccg_pll *VAR_4 = FUNC_3(VAR_2);
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_4->base + VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= FUNC_0(VAR_1, VAR_4->setup.bypass);
 FUNC_4(VAR_5, VAR_4->base + VAR_0);

 return FUNC_1(VAR_4);
}
