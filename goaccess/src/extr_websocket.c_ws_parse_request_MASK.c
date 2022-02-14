
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char*) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static char *
FUNC_7 (char *VAR_0, char **VAR_1, char **VAR_2)
{
  const char *VAR_3;
  char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
  ptrdiff_t VAR_7;

  if ((VAR_3 = FUNC_4 (VAR_0)) == ((void*)0)) {
    return ((void*)0);
  } else {
    VAR_4 = VAR_0 + FUNC_0 (VAR_3);
    if ((VAR_6 = FUNC_2 (VAR_0, " HTTP/1.0")) == ((void*)0) &&
        (VAR_6 = FUNC_2 (VAR_0, " HTTP/1.1")) == ((void*)0))
      return ((void*)0);

    VAR_4++;
    if ((VAR_7 = VAR_6 - VAR_4) <= 0)
      return ((void*)0);

    VAR_5 = FUNC_5 (VAR_7 + 1);
    FUNC_1 (VAR_5, VAR_4, VAR_7);
    VAR_5[VAR_7] = 0;

    (*VAR_1) = FUNC_3 (FUNC_6 (VAR_3));
    (*VAR_2) = FUNC_3 (FUNC_6 (++VAR_6));
  }

  return VAR_5;
}
