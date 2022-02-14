
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 unsigned long VAR_1 ;
 long FUNC_0 (void*,void const*,size_t) ;
 scalar_t__ FUNC_1 (void*,int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

long FUNC_3(void *VAR_2, const void *VAR_3, size_t VAR_4)
{
 void *VAR_5 = (void *)FUNC_2((unsigned long)VAR_3, VAR_1);

 if ((unsigned long)VAR_3 < VAR_1 || VAR_4 <= 0)
  return -VAR_0;

 if (FUNC_1(VAR_5, VAR_4 + VAR_3 - VAR_5) <= 0)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
