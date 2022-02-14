
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;



__attribute__((used)) static ssize_t FUNC_0(const char *VAR_0, size_t VAR_1)
{
 ssize_t VAR_2;
 if (VAR_1 == 0)
  return -1;
 if (VAR_1 == 1)
  return 0;





 VAR_2 = VAR_1 - 2;

 for (; VAR_2 >= 0; VAR_2--) {
  if (VAR_0[VAR_2] == '\n')
   return VAR_2 + 1;
 }
 return 0;
}
