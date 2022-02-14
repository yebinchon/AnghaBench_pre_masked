
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct bcm2835_cprman {int dummy; } ;
struct bcm2835_clock_data {int ctl_reg; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;


 int VAR_0 ;
 struct bcm2835_clock* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct bcm2835_cprman*,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct bcm2835_clock *VAR_2 = FUNC_0(VAR_1);
 struct bcm2835_cprman *VAR_3 = VAR_2->cprman;
 const struct bcm2835_clock_data *VAR_4 = VAR_2->data;

 return (FUNC_1(VAR_3, VAR_4->ctl_reg) & VAR_0) != 0;
}
