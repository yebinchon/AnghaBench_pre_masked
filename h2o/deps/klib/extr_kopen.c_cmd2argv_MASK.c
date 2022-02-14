
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static char **FUNC_4(const char *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;
 char **VAR_5, *VAR_6, *VAR_7, *VAR_8;
 VAR_3 = FUNC_2(VAR_0);
 for (VAR_1 = VAR_3 - 1; VAR_1 >= 0; --VAR_1)
  if (!FUNC_1(VAR_0[VAR_1])) break;
 VAR_3 = VAR_1 + 1;
 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
  if (!FUNC_1(VAR_0[VAR_2])) break;
 if (VAR_2 == VAR_3) return 0;
 for (VAR_1 = VAR_2 + 1, VAR_4 = 0; VAR_1 < VAR_3; ++VAR_1)
  if (FUNC_1(VAR_0[VAR_1]) && !FUNC_1(VAR_0[VAR_1-1]))
   ++VAR_4;
 VAR_5 = (char**)FUNC_0(VAR_4 + 2, sizeof(void*));
 VAR_5[0] = VAR_8 = (char*)FUNC_0(VAR_3 - VAR_2 + 1, 1);
 FUNC_3(VAR_5[0], VAR_0 + VAR_2, VAR_3 - VAR_2);
 for (VAR_1 = VAR_4 = 1, VAR_7 = VAR_6 = VAR_8; VAR_1 < VAR_3 - VAR_2; ++VAR_1)
  if (FUNC_1(VAR_8[VAR_1])) VAR_8[VAR_1] = 0;
  else if (VAR_8[VAR_1] && VAR_8[VAR_1-1] == 0) VAR_5[VAR_4++] = &VAR_8[VAR_1];
 return VAR_5;
}
