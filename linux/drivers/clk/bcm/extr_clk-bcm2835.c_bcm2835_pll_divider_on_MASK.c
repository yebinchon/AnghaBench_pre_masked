
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct bcm2835_pll_divider_data {int hold_mask; int cm_reg; int a2w_reg; } ;
struct bcm2835_pll_divider {struct bcm2835_pll_divider_data* data; struct bcm2835_cprman* cprman; } ;
struct bcm2835_cprman {int regs_lock; } ;


 int VAR_0 ;
 struct bcm2835_pll_divider* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct bcm2835_cprman*,int ) ;
 int FUNC_2 (struct bcm2835_cprman*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1)
{
 struct bcm2835_pll_divider *VAR_2 = FUNC_0(VAR_1);
 struct bcm2835_cprman *VAR_3 = VAR_2->cprman;
 const struct bcm2835_pll_divider_data *VAR_4 = VAR_2->data;

 FUNC_3(&VAR_3->regs_lock);
 FUNC_2(VAR_3, VAR_4->a2w_reg,
       FUNC_1(VAR_3, VAR_4->a2w_reg) &
       ~VAR_0);

 FUNC_2(VAR_3, VAR_4->cm_reg,
       FUNC_1(VAR_3, VAR_4->cm_reg) & ~VAR_4->hold_mask);
 FUNC_4(&VAR_3->regs_lock);

 return 0;
}
