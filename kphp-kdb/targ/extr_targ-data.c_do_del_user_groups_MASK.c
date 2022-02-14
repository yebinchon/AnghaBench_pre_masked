
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct lev_groups_ext {int gr_num; int groups; } ;
struct lev_groups {int groups; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int *,int*,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ,int*,int) ;

int FUNC_4 (int VAR_3, int VAR_4[], int VAR_5) {
  user_t *VAR_6 = FUNC_2 (VAR_3);
  if (!VAR_6 || !VAR_5) {
    return 0;
  }
  if ((unsigned) VAR_5 > VAR_2) {
    return -1;
  }
  int VAR_7;
  for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++) {
    if (VAR_4[VAR_7] <= VAR_4[VAR_7-1]) {
      return -1;
    }
  }

  if (VAR_5 < 256) {
    struct lev_groups *VAR_8 = FUNC_0 (VAR_0 + VAR_5, 8 + VAR_5 * 4, VAR_3);
    FUNC_3 (VAR_8->groups, VAR_4, VAR_5 * 4);
  } else {
    struct lev_groups_ext *VAR_9 = FUNC_0 (VAR_1, 12 + VAR_5 * 4, VAR_3);
    VAR_9->gr_num = VAR_5;
    FUNC_3 (VAR_9->groups, VAR_4, VAR_5 * 4);
  }

  return FUNC_1 (VAR_6, VAR_4, VAR_5);
}
