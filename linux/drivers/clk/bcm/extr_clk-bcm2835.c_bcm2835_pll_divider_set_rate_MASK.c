
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct clk_hw {int dummy; } ;
struct bcm2835_pll_divider_data {scalar_t__ load_mask; int cm_reg; int a2w_reg; } ;
struct bcm2835_pll_divider {struct bcm2835_pll_divider_data* data; struct bcm2835_cprman* cprman; } ;
struct bcm2835_cprman {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 struct bcm2835_pll_divider* FUNC_1 (struct clk_hw*) ;
 scalar_t__ FUNC_2 (struct bcm2835_cprman*,int ) ;
 int FUNC_3 (struct bcm2835_cprman*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1,
     unsigned long VAR_2,
     unsigned long VAR_3)
{
 struct bcm2835_pll_divider *VAR_4 = FUNC_1(VAR_1);
 struct bcm2835_cprman *VAR_5 = VAR_4->cprman;
 const struct bcm2835_pll_divider_data *VAR_6 = VAR_4->data;
 u32 VAR_7, VAR_8, VAR_9 = 1 << VAR_0;

 VAR_8 = FUNC_0(VAR_3, VAR_2);

 VAR_8 = FUNC_4(VAR_8, VAR_9);
 if (VAR_8 == VAR_9)
  VAR_8 = 0;

 FUNC_3(VAR_5, VAR_6->a2w_reg, VAR_8);
 VAR_7 = FUNC_2(VAR_5, VAR_6->cm_reg);
 FUNC_3(VAR_5, VAR_6->cm_reg, VAR_7 | VAR_6->load_mask);
 FUNC_3(VAR_5, VAR_6->cm_reg, VAR_7 & ~VAR_6->load_mask);

 return 0;
}
