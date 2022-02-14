
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, int VAR_1)
{
 int VAR_2 = 1;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  switch (*VAR_0++) {
  case '\0':
   break;
  case '/':
   if (VAR_2)
    break;
   VAR_2 = 1;
   continue;
  case '.':
   continue;
  default:
   VAR_2 = 0;
   continue;
  }
  break;
 }
 return VAR_2;
}
