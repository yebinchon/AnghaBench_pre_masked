
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static int FUNC_0(void)
{
 unsigned int VAR_2 = VAR_0 >> 16;
 unsigned int *VAR_3;

 VAR_3 = &VAR_1[0];
 while (*VAR_3 != 0) {
  if (*VAR_3 == VAR_2)
   return 1;
  VAR_3++;
 }

 return 0;
}
