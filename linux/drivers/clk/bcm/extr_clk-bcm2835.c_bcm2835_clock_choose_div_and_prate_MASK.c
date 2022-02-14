
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct bcm2835_cprman {int dev; } ;
struct bcm2835_clock_data {int set_rate_parent; int int_bits; scalar_t__ is_mash_clock; scalar_t__ frac_bits; scalar_t__ low_jitter; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct clk_hw*,unsigned long,unsigned long,int) ;
 struct bcm2835_clock* FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (struct bcm2835_clock*,unsigned long,int) ;
 struct clk_hw* FUNC_4 (struct clk_hw*,int) ;
 unsigned long FUNC_5 (struct clk_hw*) ;
 unsigned long FUNC_6 (struct clk_hw*,unsigned long) ;
 int FUNC_7 (int ,char*) ;
 unsigned long FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_9(struct clk_hw *VAR_2,
       int VAR_3,
       unsigned long VAR_4,
       u32 *VAR_5,
       unsigned long *VAR_6,
       unsigned long *VAR_7)
{
 struct bcm2835_clock *VAR_8 = FUNC_2(VAR_2);
 struct bcm2835_cprman *VAR_9 = VAR_8->cprman;
 const struct bcm2835_clock_data *VAR_10 = VAR_8->data;
 unsigned long VAR_11 = 0;
 u32 VAR_12, VAR_13, VAR_14;
 struct clk_hw *VAR_15;

 VAR_15 = FUNC_4(VAR_2, VAR_3);

 if (!(FUNC_0(VAR_3) & VAR_10->set_rate_parent)) {
  *VAR_6 = FUNC_5(VAR_15);
  *VAR_5 = FUNC_1(VAR_2, VAR_4, *VAR_6, 1);

  *VAR_7 = FUNC_3(VAR_8, *VAR_6, *VAR_5);

  if (VAR_10->low_jitter && (*VAR_5 & VAR_1)) {
   unsigned long VAR_16, VAR_17;
   u32 VAR_18 = *VAR_5 & ~VAR_1;

   VAR_16 = FUNC_3(VAR_8, *VAR_6,
              VAR_18);
   VAR_18 += VAR_1 + 1;
   VAR_17 = FUNC_3(VAR_8, *VAR_6,
             VAR_18);





   return *VAR_7 - FUNC_8(*VAR_7 - VAR_17, VAR_16 - *VAR_7);
  }
  return *VAR_7;
 }

 if (VAR_10->frac_bits)
  FUNC_7(VAR_9->dev,
   "frac bits are not used when propagating rate change");


 VAR_13 = VAR_10->is_mash_clock ? 2 : 1;
 VAR_14 = FUNC_0(VAR_10->int_bits) - 1;


 for (VAR_12 = VAR_13; VAR_12 <= VAR_14; VAR_12++) {
  unsigned long VAR_19;

  VAR_19 = FUNC_6(VAR_15, VAR_4 * VAR_12);
  VAR_19 /= VAR_12;
  if (VAR_12 == VAR_13 ||
      (VAR_19 > VAR_11 && VAR_19 <= VAR_4))
   VAR_11 = VAR_19;

  if (VAR_11 == VAR_4)
   break;
 }

 *VAR_5 = VAR_12 << VAR_0;
 *VAR_6 = VAR_12 * VAR_11;
 *VAR_7 = VAR_11;

 return VAR_11;
}
