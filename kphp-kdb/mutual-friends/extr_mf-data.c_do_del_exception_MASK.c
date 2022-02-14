
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_mf_del_exception {int user_id; int friend_id; } ;


 int VAR_0 ;
 struct lev_mf_del_exception* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct lev_mf_del_exception*) ;

int FUNC_2 (int VAR_1, int VAR_2) {
  struct lev_mf_del_exception *VAR_3 =
    FUNC_0 (VAR_0, sizeof (struct lev_mf_del_exception), 0);

  VAR_3->user_id = VAR_1;
  VAR_3->friend_id = VAR_2;

  return FUNC_1 (VAR_3);
}
