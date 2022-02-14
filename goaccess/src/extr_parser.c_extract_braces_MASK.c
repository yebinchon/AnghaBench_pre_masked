
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2 (char **VAR_0)
{
  char *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = *VAR_0;
  int VAR_5 = 0;
  ptrdiff_t VAR_6 = 0;


  for (; *VAR_4; VAR_4++) {
    if (*VAR_4 == '\\') {
      VAR_5 = 1;
    } else if (*VAR_4 == '{' && !VAR_5) {
      VAR_1 = VAR_4;
    } else if (*VAR_4 == '}' && !VAR_5) {
      VAR_2 = VAR_4;
      break;
    } else {
      VAR_5 = 0;
    }
  }

  if ((!VAR_1) || (!VAR_2))
    return ((void*)0);
  if ((VAR_6 = VAR_2 - (VAR_1 + 1)) <= 0)
    return ((void*)0);


  VAR_3 = FUNC_1 (VAR_6 + 1);
  FUNC_0 (VAR_3, VAR_1 + 1, VAR_6);
  VAR_3[VAR_6] = '\0';
  (*VAR_0) = VAR_2 + 1;

  return VAR_3;
}
