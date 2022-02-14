
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_support_set_mark {int mark; } ;


 int VAR_0 ;
 struct lev_support_set_mark* FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct lev_support_set_mark*) ;

int FUNC_2 (int VAR_1, int VAR_2) {
  struct lev_support_set_mark *VAR_3 =
    FUNC_0 (VAR_0, sizeof (struct lev_support_set_mark), VAR_1);

  VAR_3->mark = VAR_2;

  return FUNC_1 (VAR_3);
}
