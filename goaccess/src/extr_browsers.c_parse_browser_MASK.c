
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char,char) ;
 size_t FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,char) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int ) ;

__attribute__((used)) static char *
FUNC_11 (char *VAR_1, char *VAR_2, int VAR_3, char ***VAR_4)
{
  char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
  size_t VAR_8 = 0, VAR_9 = 0;



  if ((VAR_8 = FUNC_2 (VAR_4[VAR_3][0], ' ')) && (VAR_5 = VAR_1)) {
    while (VAR_9++ < VAR_8 && (VAR_5 = FUNC_5 (VAR_5, ' ')))
      VAR_5++;
  } else
    VAR_5 = VAR_1;

  FUNC_10 (VAR_2, VAR_4[VAR_3][1], VAR_0);

  if (FUNC_9 (VAR_1, "rv:11") && FUNC_9 (VAR_1, "Trident/7.0")) {
    return FUNC_0 ("MSIE/11.0");
  }

  if (FUNC_9 (VAR_1, "OPR") != ((void*)0) && (VAR_7 = FUNC_8 (VAR_1, '/'))) {
    return FUNC_4 (VAR_7);
  }

  if (FUNC_9 (VAR_1, "Opera") && (VAR_7 = FUNC_8 (VAR_1, '/')) && VAR_1 < VAR_7) {
    FUNC_3 (VAR_1 + 5, VAR_7, FUNC_6 (VAR_7) + 1);
  }

  if (FUNC_9 (VAR_1, "MSIE") != ((void*)0)) {
    if ((VAR_6 = FUNC_7 (VAR_1, ";)-")) != ((void*)0))
      *VAR_6 = '\0';
    VAR_1 = FUNC_1 (VAR_1, ' ', '/');
  }

  else if ((VAR_6 = FUNC_7 (VAR_5, ";) ")) != ((void*)0)) {
    *VAR_6 = '\0';
  }

  return FUNC_0 (VAR_1);
}
