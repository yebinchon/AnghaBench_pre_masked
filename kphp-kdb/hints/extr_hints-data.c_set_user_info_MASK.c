
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ user ;
struct lev_hints_set_user_info {int type; int user_id; } ;


 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;

int FUNC_2 (struct lev_hints_set_user_info *VAR_0) {
  user *VAR_1 = FUNC_1 (VAR_0->user_id);

  if (VAR_1 == ((void*)0)) {
    return 0;
  }

  VAR_1->flags = FUNC_0(VAR_1->flags, (VAR_0->type & 0xff) - 2);

  return 1;
}
