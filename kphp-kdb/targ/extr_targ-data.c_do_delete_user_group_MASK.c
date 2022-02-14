
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct lev_groups {int* groups; } ;


 scalar_t__ VAR_0 ;
 struct lev_groups* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int *,int*,int) ;
 int * FUNC_2 (int) ;

int FUNC_3 (int VAR_1, int VAR_2) {
  user_t *VAR_3 = FUNC_2 (VAR_1);
  if (!VAR_3) {
    return 0;
  }

  struct lev_groups *VAR_4 = FUNC_0 (VAR_0 + 1, 12, VAR_1);
  VAR_4->groups[0] = VAR_2;

  return FUNC_1 (VAR_3, VAR_4->groups, 1);
}
