
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_condition_stack {int top; } ;


 int VAR_0 ;
 int FUNC_0 (char*,void**,int*,int,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,void**,int*,int,struct forth_condition_stack*,char*) ;
 int FUNC_4 (char*,int,char*,int,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*,int,char*,int) ;

int FUNC_8 (char *VAR_1, int VAR_2, void **VAR_3, int VAR_4, char VAR_5[VAR_0]) {
  int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0;
  FUNC_7 (3, "lex (\"%.*s\", ip_size = %d\n", VAR_2, VAR_1, VAR_4);
  struct forth_condition_stack VAR_10;
  VAR_10.top = -1;
  for (VAR_6 = 0; ; VAR_8++) {
    while (VAR_6 < VAR_2 && FUNC_1 (VAR_1[VAR_6])) {
      VAR_6++;
    }
    if (VAR_6 >= VAR_2) {
      break;
    }

    if (VAR_1[VAR_6] == '"') {

      VAR_6++;
      VAR_7 = VAR_6;
      while (VAR_6 < VAR_2 && VAR_1[VAR_6] != '"') {
        VAR_6++;
      }
      if (VAR_6 >= VAR_2) {
        FUNC_5 (VAR_5, "lex: unclosed double quot");
        return -1;
      }
      VAR_1[VAR_6] = 0;
      if (!FUNC_0 (VAR_1 + VAR_7, VAR_3, &VAR_9, VAR_4, VAR_5)) {
        return -1;
      }
      VAR_6++;
      continue;
    }

    VAR_7 = VAR_6;
    while (VAR_7 < VAR_2 && !FUNC_1 (VAR_1[VAR_7])) {
      VAR_7++;
    }
    VAR_1[VAR_7] = 0;
    if (!FUNC_3 (VAR_1 + VAR_6, VAR_3, &VAR_9, VAR_4, &VAR_10, VAR_5)) {
      int VAR_11 = FUNC_6 (VAR_5);
      int VAR_12 = VAR_0 - VAR_11 - 1;
      if (VAR_12 > 0) {
        FUNC_2 (VAR_5 + VAR_11, 0, VAR_12 + 1);
        FUNC_4 (VAR_5 + VAR_11, VAR_12 , "\nlex: couldn't parse %d-th token (%s)", VAR_8, VAR_1 + VAR_6);
      }
      return -1;
    }
    VAR_6 = VAR_7 + 1;
  }

  if (!FUNC_3 ("BYE", VAR_3, &VAR_9, VAR_4, &VAR_10, VAR_5)) {
    return -1;
  }

  if (VAR_10.top >= 0) {
    FUNC_5 (VAR_5, "unclosed if statement");
    return -1;
  }

  return VAR_9;
}
