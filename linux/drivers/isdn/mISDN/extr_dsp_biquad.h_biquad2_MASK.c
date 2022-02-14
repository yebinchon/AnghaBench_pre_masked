
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biquad2_state {int gain; int z1; int a1; int z2; int a2; int b1; int b2; } ;
typedef int int32_t ;
typedef int int16_t ;



__attribute__((used)) static inline int16_t FUNC_0(struct biquad2_state *VAR_0, int16_t VAR_1)
{
 int32_t VAR_2;
 int32_t VAR_3;

 VAR_3 = VAR_1 * VAR_0->gain + VAR_0->z1 * VAR_0->a1 + VAR_0->z2 * VAR_0->a2;
 VAR_2 = VAR_3 + VAR_0->z1 * VAR_0->b1 + VAR_0->z2 * VAR_0->b2;

 VAR_0->z2 = VAR_0->z1;
 VAR_0->z1 = VAR_3 >> 15;
 VAR_2 >>= 15;
 return VAR_2;
}
