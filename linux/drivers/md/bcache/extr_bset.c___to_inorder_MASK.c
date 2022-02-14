
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_0,
      unsigned int VAR_1,
      unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4 = FUNC_0(VAR_1 - 1) - VAR_3;

 VAR_0 ^= 1U << (VAR_3 - 1);
 VAR_0 <<= 1;
 VAR_0 |= 1;
 VAR_0 <<= VAR_4;

 if (VAR_0 > VAR_2)
  VAR_0 -= (VAR_0 - VAR_2) >> 1;

 return VAR_0;
}
