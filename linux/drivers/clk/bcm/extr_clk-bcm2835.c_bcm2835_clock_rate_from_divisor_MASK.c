
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
typedef int u32 ;
struct bcm2835_clock_data {int int_bits; int frac_bits; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; } ;


 int VAR_0 ;
 int FUNC_0 (long,int) ;

__attribute__((used)) static long FUNC_1(struct bcm2835_clock *VAR_1,
         unsigned long VAR_2,
         u32 VAR_3)
{
 const struct bcm2835_clock_data *VAR_4 = VAR_1->data;
 u64 VAR_5;

 if (VAR_4->int_bits == 0 && VAR_4->frac_bits == 0)
  return VAR_2;





 VAR_3 >>= VAR_0 - VAR_4->frac_bits;
 VAR_3 &= (1 << (VAR_4->int_bits + VAR_4->frac_bits)) - 1;

 if (VAR_3 == 0)
  return 0;

 VAR_5 = (u64)VAR_2 << VAR_4->frac_bits;

 FUNC_0(VAR_5, VAR_3);

 return VAR_5;
}
