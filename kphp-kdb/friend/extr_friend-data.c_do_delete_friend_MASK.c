
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int dummy; } ;
struct lev_del_friend {int friend_id; } ;


 int VAR_0 ;
 struct lev_del_friend* FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct lev_generic*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3 (int VAR_1, int VAR_2) {
  struct lev_del_friend *VAR_3;

  if (FUNC_2 (VAR_1) < 0 || VAR_2 <= 0) {
    return -1;
  }

  VAR_3 = FUNC_0 (VAR_0, 12, VAR_1);
  VAR_3->friend_id = VAR_2;

  return FUNC_1 ((struct lev_generic *) VAR_3);
}
