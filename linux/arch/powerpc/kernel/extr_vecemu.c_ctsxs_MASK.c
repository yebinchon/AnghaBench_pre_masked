
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1, int VAR_2, unsigned int *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = (VAR_1 >> 23) & 0xff;
 VAR_5 = VAR_1 & 0x7fffff;
 if (VAR_4 == 255 && VAR_5 != 0)
  return 0;
 VAR_4 = VAR_4 - 127 + VAR_2;
 if (VAR_4 < 0)
  return 0;
 if (VAR_4 >= 31) {

  if (VAR_1 + (VAR_2 << 23) != 0xcf000000)
   *VAR_3 |= VAR_0;
  return (VAR_1 & 0x80000000)? 0x80000000: 0x7fffffff;
 }
 VAR_5 |= 0x800000;
 VAR_5 = (VAR_5 << 7) >> (30 - VAR_4);
 return (VAR_1 & 0x80000000)? -VAR_5: VAR_5;
}
