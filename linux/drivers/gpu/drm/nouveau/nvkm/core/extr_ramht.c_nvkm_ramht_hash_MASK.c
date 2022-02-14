
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_ramht {int bits; } ;



__attribute__((used)) static u32
FUNC_0(struct nvkm_ramht *VAR_0, int VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;

 while (VAR_2) {
  VAR_3 ^= (VAR_2 & ((1 << VAR_0->bits) - 1));
  VAR_2 >>= VAR_0->bits;
 }

 VAR_3 ^= VAR_1 << (VAR_0->bits - 4);
 return VAR_3;
}
