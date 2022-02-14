
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netrule {int type; int level1; int level2; } ;


 scalar_t__ FUNC_0 (struct netrule*,unsigned int) ;
 struct netrule* VAR_0 ;
 int VAR_1 ;

int FUNC_1 (unsigned VAR_2, int VAR_3) {
  if (VAR_3 == 0) {
    return 32;
  }
  if (VAR_3 == 1) {
    int VAR_4;
    int VAR_5 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) if (VAR_0[VAR_4].type == 1) {
      struct netrule *VAR_6 = &VAR_0[VAR_4];
      if (FUNC_0 (VAR_6, VAR_2) && VAR_6->level1 > VAR_5) {
        VAR_5 = VAR_6->level1;
      }
    }
    return VAR_5;
  }
  if (VAR_3 == 2) {
    int VAR_7;
    int VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) if (VAR_0[VAR_7].type == 2) {
      struct netrule *VAR_9 = &VAR_0[VAR_7];
      if (FUNC_0 (VAR_9, VAR_2) && VAR_9->level2 > VAR_8) {
        VAR_8 = VAR_9->level2;
      }
    }
    return VAR_8;
  }
  return 0;
}
