
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned
FUNC_0(unsigned char VAR_2)
{
 unsigned VAR_3 = 1 << (VAR_2 & 0x1f);
 VAR_3 -= (VAR_3 >> 2) * ( (VAR_2 >> 5) & 0x7);
 if (VAR_3 < VAR_1 || VAR_3 > VAR_0)
  return 0;
 return VAR_3;
}
