
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_group_types; } ;
typedef TYPE_1__ user_t ;
struct lev_targ_user_group_types {int user_group_types; int user_id; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2 (struct lev_targ_user_group_types *VAR_0) {
  user_t *VAR_1 = FUNC_0 (VAR_0->user_id);
  if (!VAR_1) {
    return 0;
  }
  FUNC_1 (VAR_1->user_group_types, VAR_0->user_group_types, 16);
  return 1;
}
