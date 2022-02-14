
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct bcm2835_pll_divider_data {int a2w_reg; } ;
struct bcm2835_pll_divider {struct bcm2835_pll_divider_data* data; struct bcm2835_cprman* cprman; } ;
struct bcm2835_cprman {int dummy; } ;


 int VAR_0 ;
 struct bcm2835_pll_divider* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct bcm2835_cprman*,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct bcm2835_pll_divider *VAR_2 = FUNC_0(VAR_1);
 struct bcm2835_cprman *VAR_3 = VAR_2->cprman;
 const struct bcm2835_pll_divider_data *VAR_4 = VAR_2->data;

 return !(FUNC_1(VAR_3, VAR_4->a2w_reg) & VAR_0);
}
