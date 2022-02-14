
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qtype ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;

int FUNC_1 (char *VAR_1, qtype VAR_2) {
  int VAR_3 = 0;

  if (VAR_1 == ((void*)0)) {
    return 0;
  }

  if (VAR_2 != FUNC_0 (VAR_1)) {
    return 0;
  }

  while (VAR_3 <= VAR_0 && VAR_1[VAR_3]) {
    if (!('A' <= VAR_1[VAR_3] && VAR_1[VAR_3] <= 'Z') && !('a' <= VAR_1[VAR_3] && VAR_1[VAR_3] <= 'z') &&
        !('0' <= VAR_1[VAR_3] && VAR_1[VAR_3] <= '9') && !(VAR_1[VAR_3] == '_')) {
      return 0;
    }

    VAR_3++;
  }

  return 0 < VAR_3 && VAR_3 <= VAR_0;
}
