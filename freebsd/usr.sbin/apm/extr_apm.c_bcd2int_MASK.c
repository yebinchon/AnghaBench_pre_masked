
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = 1;

 if (VAR_0 > 0x9999)
  return -1;

 while (VAR_0) {
  VAR_1 += (VAR_0 & 0xf) * VAR_2;
  VAR_0 >>= 4;
  VAR_2 *= 10;
 }
 return VAR_1;
}
