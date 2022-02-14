
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int new_exceptions; } ;
typedef TYPE_1__ user ;
struct lev_mf_del_exception {int friend_id; int user_id; } ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;

int FUNC_2 (struct lev_mf_del_exception *VAR_1) {
  user *VAR_2 = FUNC_1 (VAR_1->user_id);

  if (VAR_2 == ((void*)0)) {
    return 0;
  }

  if (1 <= VAR_1->friend_id && VAR_1->friend_id < 500000000) {
    FUNC_0 (&VAR_2->new_exceptions, 2 * VAR_1->friend_id + 1);
  } else {

    VAR_0 += 100;
  }

  return 1;
}
