
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biquad2_state {scalar_t__ z2; scalar_t__ z1; void* b2; void* b1; void* a2; void* a1; void* gain; } ;
typedef void* int32_t ;



__attribute__((used)) static inline void FUNC_0(struct biquad2_state *VAR_0,
    int32_t VAR_1, int32_t VAR_2, int32_t VAR_3, int32_t VAR_4, int32_t VAR_5)
{
 VAR_0->gain = VAR_1;
 VAR_0->a1 = VAR_2;
 VAR_0->a2 = VAR_3;
 VAR_0->b1 = VAR_4;
 VAR_0->b2 = VAR_5;

 VAR_0->z1 = 0;
 VAR_0->z2 = 0;
}
