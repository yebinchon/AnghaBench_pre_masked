
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(int VAR_0,
        const char *VAR_1,
        int VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (!VAR_0)
  return (VAR_2 && VAR_1[0] == '/') ? ((void*)0) : VAR_1;

 VAR_3 = VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  int VAR_5 = VAR_1[VAR_4];
  if (VAR_5 == '/' && --VAR_3 <= 0)
   return (VAR_4 == 0) ? ((void*)0) : &VAR_1[VAR_4 + 1];
 }
 return ((void*)0);
}
