
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct dove_clk {unsigned int div_bit_start; unsigned int div_bit_size; unsigned int* divider_table; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct dove_clk *VAR_1)
{
 unsigned int VAR_2;
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1->base + VAR_0);
 VAR_3 >>= VAR_1->div_bit_start;

 VAR_2 = VAR_3 & ~(~0 << VAR_1->div_bit_size);

 if (VAR_1->divider_table)
  VAR_2 = VAR_1->divider_table[VAR_2];

 return VAR_2;
}
