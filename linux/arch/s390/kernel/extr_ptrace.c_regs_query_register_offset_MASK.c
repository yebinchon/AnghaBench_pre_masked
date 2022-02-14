
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;

int FUNC_1(const char *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_2 || *VAR_2 != 'r')
  return -VAR_0;
 if (FUNC_0(VAR_2 + 1, 10, &VAR_3))
  return -VAR_0;
 if (VAR_3 >= VAR_1)
  return -VAR_0;
 return VAR_3;
}
