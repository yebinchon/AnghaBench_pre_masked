
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernv_rng {unsigned long mask; } ;



__attribute__((used)) static unsigned long FUNC_0(struct powernv_rng *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;


 asm ("popcntd %0,%1" : "=r" (VAR_2) : "r" (VAR_1));


 VAR_1 ^= VAR_0->mask;


 VAR_0->mask = (VAR_0->mask << 1) | (VAR_2 & 1);

 return VAR_1;
}
