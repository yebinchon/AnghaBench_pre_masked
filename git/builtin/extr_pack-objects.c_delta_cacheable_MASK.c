
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_3, unsigned long VAR_4,
      unsigned long VAR_5)
{
 if (VAR_2 && VAR_1 + VAR_5 > VAR_2)
  return 0;

 if (VAR_5 < VAR_0)
  return 1;


 if ((VAR_3 >> 20) + (VAR_4 >> 21) > (VAR_5 >> 10))
  return 1;

 return 0;
}
