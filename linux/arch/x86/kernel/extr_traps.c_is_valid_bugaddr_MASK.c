
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (unsigned short*,unsigned short) ;

int FUNC_1(unsigned long VAR_3)
{
 unsigned short VAR_4;

 if (VAR_3 < VAR_2)
  return 0;

 if (FUNC_0((unsigned short *)VAR_3, VAR_4))
  return 0;

 return VAR_4 == VAR_0 || VAR_4 == VAR_1;
}
