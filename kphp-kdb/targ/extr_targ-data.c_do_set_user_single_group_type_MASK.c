
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* user_group_types; } ;
typedef TYPE_1__ user_t ;
struct lev_generic {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct lev_generic* FUNC_0 (scalar_t__,int,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (struct lev_generic*) ;

int FUNC_3 (int VAR_1, unsigned VAR_2) {
  user_t *VAR_3 = FUNC_1 (VAR_1);
  if (!VAR_3 || VAR_2 > 127) {
    return 0;
  }
  if (VAR_3->user_group_types[VAR_2 >> 5] & (1 << (VAR_2 & 31))) {
    return 1;
  }
  struct lev_generic *VAR_4 = FUNC_0 (VAR_0 + VAR_2, 8, VAR_1);
  return FUNC_2 (VAR_4);
}
