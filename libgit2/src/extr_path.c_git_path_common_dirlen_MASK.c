
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4 = ((void*)0);

 for (VAR_2 = VAR_0, VAR_3 = VAR_1; *VAR_2 && *VAR_3; VAR_2++, VAR_3++) {
  if (*VAR_2 == '/' && *VAR_3 == '/')
   VAR_4 = VAR_2;
  else if (*VAR_2 != *VAR_3)
   break;
 }

 return VAR_4 ? (VAR_4 - VAR_0) + 1 : 0;
}
