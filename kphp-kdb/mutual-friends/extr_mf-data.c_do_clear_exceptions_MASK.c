
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_mf_clear_exceptions {int user_id; } ;


 int VAR_0 ;
 struct lev_mf_clear_exceptions* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct lev_mf_clear_exceptions*) ;

int FUNC_2 (int VAR_1) {
  struct lev_mf_clear_exceptions *VAR_2 =
    FUNC_0 (VAR_0, sizeof (struct lev_mf_clear_exceptions), 0);

  VAR_2->user_id = VAR_1;

  return FUNC_1 (VAR_2);
}
