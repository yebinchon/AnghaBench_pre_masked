
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_groups {int cur_groups; int* G; } ;
struct user {struct user_groups* grp; } ;



int FUNC_0 (struct user *VAR_0, int VAR_1) {
  struct user_groups *VAR_2 = VAR_0->grp;
  if (VAR_2) {
    int VAR_3 = -1, VAR_4 = VAR_2->cur_groups;
    while (VAR_4 - VAR_3 > 1) {
      int VAR_5 = (VAR_3 + VAR_4) >> 1;
      if (VAR_1 < VAR_2->G[VAR_5]) {
 VAR_4 = VAR_5;
      } else {
 VAR_3 = VAR_5;
      }
    }

    if (VAR_3 >= 0 && VAR_2->G[VAR_3] == VAR_1) {
      return 1;
    }
  }
  return 0;
}
