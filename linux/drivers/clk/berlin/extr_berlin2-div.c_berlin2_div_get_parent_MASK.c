
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct berlin2_div_map {int pll_select_shift; scalar_t__ pll_select_offs; int pll_switch_shift; scalar_t__ pll_switch_offs; } ;
struct berlin2_div {scalar_t__ lock; scalar_t__ base; struct berlin2_div_map map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct berlin2_div* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_5(struct clk_hw *VAR_1)
{
 struct berlin2_div *VAR_2 = FUNC_4(VAR_1);
 struct berlin2_div_map *VAR_3 = &VAR_2->map;
 u32 VAR_4;
 u8 VAR_5 = 0;

 if (VAR_2->lock)
  FUNC_2(VAR_2->lock);


 VAR_4 = FUNC_1(VAR_2->base + VAR_3->pll_switch_offs);
 VAR_4 &= FUNC_0(VAR_3->pll_switch_shift);
 if (VAR_4) {
  VAR_4 = FUNC_1(VAR_2->base + VAR_3->pll_select_offs);
  VAR_4 >>= VAR_3->pll_select_shift;
  VAR_4 &= VAR_0;
  VAR_5 = 1 + VAR_4;
 }

 if (VAR_2->lock)
  FUNC_3(VAR_2->lock);

 return VAR_5;
}
