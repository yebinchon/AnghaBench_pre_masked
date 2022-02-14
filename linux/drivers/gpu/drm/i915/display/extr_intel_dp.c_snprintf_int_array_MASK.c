
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,char*,int const) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, size_t VAR_1,
          const int *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_0[0] = '\0';

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  int VAR_5 = FUNC_0(VAR_0, VAR_1, "%s%d", VAR_4 ? ", " : "", VAR_2[VAR_4]);
  if (VAR_5 >= VAR_1)
   return;
  VAR_0 += VAR_5;
  VAR_1 -= VAR_5;
 }
}
