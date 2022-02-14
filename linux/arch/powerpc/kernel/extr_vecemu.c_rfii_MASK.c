
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = ((VAR_0 >> 23) & 0xff) - 127;
 if (VAR_1 == 128 && (VAR_0 & 0x7fffff) != 0)
  return VAR_0 | 0x400000;
 if (VAR_1 >= 23)
  return VAR_0;
 if ((VAR_0 & 0x7fffffff) == 0)
  return VAR_0;
 if (VAR_1 < 0)

  return (VAR_0 & 0x80000000) | 0x3f800000;
 VAR_2 = 0x7fffff >> VAR_1;


 return (VAR_0 + VAR_2) & ~VAR_2;
}
