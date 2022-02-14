
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1 (const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
 if (VAR_0[VAR_2] != '[')
  return 0;
 for (VAR_2 = 1; VAR_0[VAR_2] && VAR_0[VAR_2] != ']'; VAR_2++) {
  if (!VAR_4 && FUNC_0(VAR_0[VAR_2])) {
   VAR_4 = 1;
   if (VAR_1[VAR_3++] != '.')
    break;
   for (VAR_2++; FUNC_0(VAR_0[VAR_2]); VAR_2++)
    ;
   if (VAR_0[VAR_2] != '"')
    break;
   continue;
  }
  if (VAR_0[VAR_2] == '\\' && VAR_4)
   VAR_2++;
  else if (VAR_0[VAR_2] == '"' && VAR_4) {
   for (VAR_2++; FUNC_0(VAR_0[VAR_2]); VAR_2++)
    ;
   break;
  }
  if (VAR_0[VAR_2] != VAR_1[VAR_3++])
   break;
 }
 if (VAR_0[VAR_2] == ']' && VAR_1[VAR_3] == 0) {




  VAR_2++;
  for (; VAR_0[VAR_2] && FUNC_0(VAR_0[VAR_2]); VAR_2++)
   ;
  return VAR_2;
 }
 return 0;
}
