
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct bcm2835_cprman {int dummy; } ;
struct bcm2835_clock_data {scalar_t__ int_bits; scalar_t__ frac_bits; int div_reg; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;


 struct bcm2835_clock* FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (struct bcm2835_clock*,unsigned long,int ) ;
 int FUNC_2 (struct bcm2835_cprman*,int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct bcm2835_clock *VAR_2 = FUNC_0(VAR_0);
 struct bcm2835_cprman *VAR_3 = VAR_2->cprman;
 const struct bcm2835_clock_data *VAR_4 = VAR_2->data;
 u32 VAR_5;

 if (VAR_4->int_bits == 0 && VAR_4->frac_bits == 0)
  return VAR_1;

 VAR_5 = FUNC_2(VAR_3, VAR_4->div_reg);

 return FUNC_1(VAR_2, VAR_1, VAR_5);
}
