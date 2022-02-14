
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_visited; } ;
typedef TYPE_1__ user_t ;
struct lev_online_lite {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lev_online_lite* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct lev_online_lite*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4 (int VAR_5, const char *VAR_6, int VAR_7) {
  user_t *VAR_8 = FUNC_2 (VAR_5);

  if (!VAR_8) {
    if (VAR_4 > 0) {
      FUNC_1 (VAR_3, "error: unknown user %d, visit neglected\n", VAR_5);
    }
    return 0;
  }

  if (VAR_4 > 1) {
    FUNC_1 (VAR_3, "setting last_visited for user %d to %d\n", VAR_5, VAR_2);
  }

  if (VAR_2 - VAR_8->last_visited >= VAR_1) {
    struct lev_online_lite *VAR_9 = FUNC_0 (VAR_0, 8, VAR_5);
    FUNC_3 (VAR_9);
  }

  return 1;
}
