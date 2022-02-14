
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 char* FUNC_1 (char*,int,int) ;
 struct tl_expression* VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tl_expression* FUNC_2 (int) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*,char*,int) ;
 char** FUNC_5 (char const*,int ) ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct tl_expression*,char*) ;
 int VAR_6 ;

__attribute__((used)) static char **FUNC_7 (const char *VAR_7, int VAR_8, int VAR_9) {
  if (VAR_8 == 0) {
    return FUNC_5 (VAR_7, VAR_0);
  }

  if ( (VAR_8 == 1 && VAR_3[0] == '(') || (VAR_8 == 5 && !FUNC_4 (VAR_3, "help ", 5))) {
    return FUNC_5 (VAR_7, VAR_5);
  }

  int VAR_10 = VAR_8 - 1;
  while (VAR_10 > 0 && VAR_3[VAR_10] != '(' && !FUNC_3 (VAR_3[VAR_10])) {
    if (VAR_3[VAR_10] == ')') {
      VAR_10 = 0;
    }
    VAR_10--;
  }
  if (VAR_10 > 0 && VAR_3[VAR_10] == '(' && VAR_3[VAR_10-1] == ':') {
    int VAR_11 = VAR_10 - 2;
    while (VAR_11 > 0 && !FUNC_3 (VAR_3[VAR_11])) {
      VAR_11--;
    }
    struct tl_expression *VAR_12 = FUNC_2 (VAR_11);
    if (VAR_12 != ((void*)0)) {
      char *VAR_13 = FUNC_1 (VAR_3, VAR_11 + 1, VAR_10 - 1);

      VAR_2 = FUNC_6 (VAR_12, VAR_13);

      FUNC_0 (&VAR_13);
      if (VAR_2) {
        return FUNC_5 (VAR_7, VAR_6);
      }
    }
  }

  struct tl_expression *VAR_14 = FUNC_2 (VAR_8);
  if (VAR_14) {
    VAR_1 = VAR_14;
    return FUNC_5 (VAR_7, VAR_4);
  }
  return ((void*)0);
}
