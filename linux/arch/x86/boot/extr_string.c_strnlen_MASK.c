
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2 = VAR_0;
 while (*VAR_2 && VAR_1) {
  VAR_2++;
  VAR_1--;
 }

 return (VAR_2 - VAR_0);
}
