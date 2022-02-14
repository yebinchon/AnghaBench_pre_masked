
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int predicate ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (char*,int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

predicate *FUNC_3 (char *VAR_5, int VAR_6) {
  if (VAR_5 == ((void*)0) || VAR_5[0] == 0 || FUNC_1 (VAR_5) + 1 > VAR_0) {
    return ((void*)0);
  }

  int VAR_7;
  int VAR_8[VAR_1 * 2 + 2], VAR_9 = 0;
  int VAR_10 = 0;
  for (VAR_7 = 0; VAR_5[VAR_7] && VAR_10 + 1 < VAR_1 && VAR_9 < 2 * VAR_1 + 1; VAR_7++) {
    VAR_2[VAR_7] = -1;

    if (VAR_5[VAR_7] == '(') {
      VAR_8[VAR_9++] = VAR_7;
    } else if (VAR_5[VAR_7] == ')') {
      if (VAR_9 == 0) {
        return ((void*)0);
      }
      VAR_2[VAR_8[--VAR_9]] = VAR_7;
    } else {
      if ((VAR_5[VAR_7] == '|' && VAR_5[VAR_7 + 1] == '|') ||
          (VAR_5[VAR_7] == '&' && VAR_5[VAR_7 + 1] == '&')) {
        VAR_10++;
      }
    }
  }
  if (VAR_5[VAR_7]) {
    FUNC_2("MAX_PREDICATES exceeded on condition %s\n", VAR_5);
    return ((void*)0);
  }
  if (VAR_9 != 0) {
    return ((void*)0);
  }

  VAR_3 = VAR_4 = 0;
  return FUNC_0 (VAR_5, 0, FUNC_1 (VAR_5) - 1, VAR_6);
}
