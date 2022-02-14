
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3 (char *VAR_5, const char *VAR_6, int VAR_7, int VAR_8) {
  int VAR_9 = VAR_8;
  int VAR_10;
  if (VAR_4 < VAR_0 && VAR_6[VAR_9] == '#' && VAR_0 > 0 && VAR_4 > 0 && VAR_2) {
    VAR_9 = VAR_2 - VAR_6;
    FUNC_0 ((unsigned) VAR_9 < 2048);
    FUNC_1 (VAR_5, VAR_6, VAR_9);
    VAR_9 += FUNC_2 (VAR_5 + VAR_9, "%d%%", VAR_4);
    VAR_10 = VAR_6 + VAR_7 - VAR_1;
    FUNC_0 ((unsigned) VAR_10 < 2048);
    FUNC_1 (VAR_5 + VAR_9, VAR_1, VAR_10);
    FUNC_0 (VAR_9 + VAR_10 < VAR_7 + 3);
    VAR_5[VAR_9+VAR_10] = 0;
    return VAR_9 + VAR_10;
  } else if (VAR_3) {
    FUNC_1 (VAR_5, VAR_6, VAR_7+1);
    return VAR_7;
  } else if (VAR_6[VAR_9] == '#') {
    FUNC_1 (VAR_5, VAR_6, VAR_9+1);
    VAR_5[VAR_9+1] = '%';
    FUNC_1 (VAR_5+VAR_9+2, VAR_6+VAR_9+1, VAR_7-VAR_9);
    return VAR_7 + 1;
  } else {
    FUNC_1 (VAR_5, VAR_6, VAR_9);
    VAR_5[VAR_9] = '#';
    VAR_5[VAR_9+1] = '%';
    FUNC_1 (VAR_5+VAR_9+2, VAR_6+VAR_9, VAR_7-VAR_9+1);
    return VAR_7 + 2;
  }
}
