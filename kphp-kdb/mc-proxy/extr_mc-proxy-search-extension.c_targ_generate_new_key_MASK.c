
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3 (char *VAR_5, const char *VAR_6, int VAR_7, int VAR_8) {
  int VAR_9 = VAR_8;
  if (VAR_3 && VAR_2 != VAR_0 && VAR_6[VAR_9] == '#') {
    FUNC_1 (VAR_5, VAR_6, VAR_9);
    VAR_9 += FUNC_2 (VAR_5 + VAR_9);
    FUNC_0 (VAR_9 < VAR_7 + 3);
    return VAR_9;
  } else if (VAR_1) {
    FUNC_1 (VAR_5, VAR_6, VAR_7+1);
    return VAR_7;
  } else if (VAR_4) {
    FUNC_1 (VAR_5, VAR_6, VAR_7-1);
    if (VAR_6[VAR_9] == '#') {
      FUNC_1 (VAR_5+VAR_7-1, "%)", 3);
      return VAR_7 + 1;
    } else {
      FUNC_1 (VAR_5+VAR_7-1, "#%)", 4);
      return VAR_7 + 2;
    }
  } else {
    FUNC_1 (VAR_5, VAR_6, VAR_7);
    FUNC_1 (VAR_5+VAR_7, "#%", 3);
    return VAR_7 + 2;
  }
}
