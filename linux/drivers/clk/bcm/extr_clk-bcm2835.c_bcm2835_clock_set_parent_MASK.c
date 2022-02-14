
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct bcm2835_cprman {int dummy; } ;
struct bcm2835_clock_data {int ctl_reg; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bcm2835_clock* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct bcm2835_cprman*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2, u8 VAR_3)
{
 struct bcm2835_clock *VAR_4 = FUNC_0(VAR_2);
 struct bcm2835_cprman *VAR_5 = VAR_4->cprman;
 const struct bcm2835_clock_data *VAR_6 = VAR_4->data;
 u8 VAR_7 = (VAR_3 << VAR_1) & VAR_0;

 FUNC_1(VAR_5, VAR_6->ctl_reg, VAR_7);
 return 0;
}
