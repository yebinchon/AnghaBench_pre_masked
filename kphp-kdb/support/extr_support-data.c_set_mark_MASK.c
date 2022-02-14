
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_support_set_mark {int user_id; int mark; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2 (struct lev_support_set_mark *VAR_2) {
  if (VAR_1 > 1) {
    FUNC_1 (VAR_0, "Setting mark for question %d to %d\n", VAR_2->user_id, VAR_2->mark);
  }

  return FUNC_0 (VAR_2->user_id, VAR_2->mark);
}
