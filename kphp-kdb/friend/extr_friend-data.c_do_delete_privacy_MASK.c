
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_del_privacy {scalar_t__ key; } ;
typedef scalar_t__ privacy_key_t ;


 int VAR_0 ;
 struct lev_del_privacy* FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int) ;

int FUNC_4 (int VAR_1, privacy_key_t VAR_2) {
  if (FUNC_1 (VAR_1) < 0 || !VAR_2) {
    return -1;
  }

  struct lev_del_privacy *VAR_3 = FUNC_0 (VAR_0, 16, VAR_1);
  VAR_3->key = VAR_2;

  return FUNC_2 (FUNC_3 (VAR_1), VAR_2);
}
