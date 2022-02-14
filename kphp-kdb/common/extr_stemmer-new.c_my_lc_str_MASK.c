
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*,int,char*) ;
 int FUNC_4 (char const*,int,char*,int) ;
 int VAR_0 ;

int FUNC_5 (char *VAR_1, const char *VAR_2, int VAR_3) {
  int VAR_4, VAR_5;
  if (!VAR_0) {
    FUNC_2 (VAR_1, VAR_2, VAR_3);
    return VAR_3;
  }
  VAR_5 = FUNC_1 (VAR_2, VAR_3);
  if ((VAR_5 & 12) == 12) {
    VAR_4 = FUNC_4 (VAR_2, VAR_3, VAR_1, 1);
    FUNC_2 (VAR_1, VAR_1, VAR_4);
    return VAR_4;
  }
  if (VAR_5 & 8) {
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3 && VAR_2[VAR_6] >= 0; VAR_6++) {
    }
    if (VAR_6 == VAR_3) {
      VAR_4 = FUNC_3 (VAR_2, VAR_3, VAR_1);
      FUNC_0 (VAR_4 > 0 && VAR_4 <= VAR_3);
      FUNC_2 (VAR_1, VAR_1, VAR_4);
      return VAR_4;
    }
  }
  FUNC_2 (VAR_1, VAR_2, VAR_3);
  return VAR_3;
}
