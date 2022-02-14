
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char const*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0, const char *VAR_1, const char *VAR_2)
{

  char *VAR_3, *VAR_4;
  int VAR_5, VAR_6, VAR_7, VAR_8;

  if ((VAR_3 = FUNC_3(VAR_0, VAR_1)) == ((void*)0))
    return VAR_0;

  VAR_5 = FUNC_2(VAR_0) + 1;
  VAR_6 = FUNC_2(VAR_1);
  VAR_7 = FUNC_2(VAR_2);
  do {
    VAR_8 = VAR_3 - VAR_0;
    if (VAR_6 > VAR_7)
      FUNC_0(VAR_3 + VAR_6, VAR_3 + VAR_7, VAR_5 - VAR_8 - VAR_6);
    if (VAR_6 != VAR_7) {
      VAR_4 = FUNC_1(VAR_0, VAR_5 += VAR_7 - VAR_6);
      if (VAR_4 == ((void*)0))
        break;
      VAR_3 = VAR_4 + VAR_8;
      VAR_0 = VAR_4;
    }
    if (VAR_7 > VAR_6)
      FUNC_0(VAR_3 + VAR_6, VAR_3 + VAR_7, VAR_5 - VAR_8 - VAR_7);
    FUNC_0(VAR_2, VAR_3, VAR_7);
  } while ((VAR_3 = FUNC_3(VAR_3, VAR_1)));

  return VAR_0;
}
