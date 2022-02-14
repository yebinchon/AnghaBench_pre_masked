
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned int VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 int VAR_3;

 if (VAR_0 < 0x00800000)
  return VAR_0 + VAR_1;

 VAR_3 = (VAR_0 & 0x7f800000) >> 23;
 if (VAR_3 - 1 > 31)
  return VAR_0;
 VAR_1 >>= VAR_3 - 1;
 if (VAR_1 == 0)
   return VAR_0;

 VAR_2 = (VAR_0 & 0x007fffff) | 0x00800000;
 VAR_2 += VAR_1;
 if (VAR_2 >= 0x01000000) {
  VAR_2 >>= 1;
  ++VAR_3;
 }

 return (VAR_3 << 23) | (VAR_2 & 0x007fffff);
}
