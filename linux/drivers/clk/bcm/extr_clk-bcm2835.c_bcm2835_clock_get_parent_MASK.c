
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct bcm2835_cprman {int dummy; } ;
struct bcm2835_clock_data {int ctl_reg; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bcm2835_clock* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct bcm2835_cprman*,int ) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_2)
{
 struct bcm2835_clock *VAR_3 = FUNC_0(VAR_2);
 struct bcm2835_cprman *VAR_4 = VAR_3->cprman;
 const struct bcm2835_clock_data *VAR_5 = VAR_3->data;
 u32 VAR_6 = FUNC_1(VAR_4, VAR_5->ctl_reg);

 return (VAR_6 & VAR_0) >> VAR_1;
}
