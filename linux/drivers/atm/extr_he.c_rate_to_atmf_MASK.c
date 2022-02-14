
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0(unsigned VAR_1)
{


 unsigned VAR_2 = 0;

 if (VAR_1 == 0)
  return 0;

 VAR_1 <<= 9;
 while (VAR_1 > 0x3ff) {
  ++VAR_2;
  VAR_1 >>= 1;
 }

 return ((1 << 14) | (VAR_2 << 9) | (VAR_1 & 0x1ff));
}
