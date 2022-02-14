
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (unsigned char) ;

char *FUNC_2(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = FUNC_0(VAR_0) - VAR_2 + 1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   unsigned char VAR_6 = VAR_0[VAR_4+VAR_5];
   unsigned char VAR_7 = VAR_1[VAR_5];
   if (FUNC_1(VAR_6) != FUNC_1(VAR_7))
    goto next;
  }
  return (char *) VAR_0 + VAR_4;
 next:
  ;
 }
 return ((void*)0);
}
