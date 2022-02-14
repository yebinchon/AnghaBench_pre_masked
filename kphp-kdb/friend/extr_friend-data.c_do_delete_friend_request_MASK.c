
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_del_friend {int friend_id; } ;


 int VAR_0 ;
 struct lev_del_friend* FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

int FUNC_4 (int VAR_1, int VAR_2) {
  struct lev_del_friend *VAR_3;

  if (FUNC_1 (VAR_1) < 0 || VAR_2 <= 0) {
    return -1;
  }

  VAR_3 = FUNC_0 (VAR_0, 12, VAR_1);
  VAR_3->friend_id = VAR_2;

  return FUNC_2 (FUNC_3 (VAR_1), VAR_2);
}
