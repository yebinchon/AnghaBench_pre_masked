
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__* VAR_1 ;
 void* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,char const*,int) ;
 void* FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (char const*,char const*) ;
 scalar_t__* FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char const*,int) ;

int FUNC_8 (const char *VAR_4, const char *VAR_5) {
  int VAR_6 = FUNC_6 (VAR_4);
  if (!VAR_5 || !*VAR_5 || !FUNC_4 (VAR_5, ".bin")
     || !FUNC_4 (VAR_5, VAR_4)
     || (!FUNC_7 (VAR_5, VAR_4, VAR_6) && !FUNC_4 (VAR_5 + VAR_6, ".bin"))) {
    VAR_3 = VAR_1 = FUNC_5 (VAR_4);
  } else {
    int VAR_7 = FUNC_6 (VAR_5);
    if (VAR_7 > 4 && !FUNC_4 (VAR_5 + VAR_7 - 4, ".bin")) {
      VAR_7 -= 4;
    }
    VAR_3 = FUNC_5 (VAR_4);
    if (VAR_5[0] == '.') {
      VAR_1 = FUNC_1 (VAR_6 + VAR_7 + 1);
      FUNC_0 (VAR_1);
      FUNC_2 (VAR_1, VAR_4, VAR_6);
      FUNC_2 (VAR_1 + VAR_6, VAR_5, VAR_7);
      VAR_1[VAR_6+VAR_7] = 0;
    } else {
      VAR_1 = FUNC_1 (VAR_7 + 1);
      FUNC_0 (VAR_1);
      FUNC_2 (VAR_1, VAR_5, VAR_7);
      VAR_1[VAR_7] = 0;
    }
  }
  FUNC_0 (VAR_1 && VAR_3);

  VAR_0 = FUNC_3 (VAR_1, 0);
  if (!VAR_0) {
    return -1;
  }
  if (VAR_3 == VAR_1) {
    VAR_2 = VAR_0;
  } else {
    VAR_2 = FUNC_3 (VAR_3, 1);
    if (!VAR_2) {
      return 0;
    }
  }

  return 1;
}
