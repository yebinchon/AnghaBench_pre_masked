
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;

int FUNC_1(const char *VAR_1)
{
 static int VAR_2[] = { 128, 130, 129 };
 int VAR_3;
 for (VAR_3 = 0; VAR_2[VAR_3] != 129; VAR_3++) {
  int VAR_4 = VAR_2[VAR_3];
  if (VAR_0[VAR_4] && FUNC_0(VAR_0[VAR_4], VAR_1))
   return 1;
 }
 return 0;
}
