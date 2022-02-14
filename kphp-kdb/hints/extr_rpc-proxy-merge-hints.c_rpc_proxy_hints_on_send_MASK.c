
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hints_extra {int sent_limit; int type; int user_id; int sent_op; } ;
struct gather {struct hints_extra* extra; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ) ;

int FUNC_4 (struct gather *VAR_0, int VAR_1) {
  struct hints_extra *VAR_2 = VAR_0->extra;
  FUNC_2 (VAR_2->sent_op);
  FUNC_2 (VAR_2->user_id);
  FUNC_2 (VAR_2->type);
  FUNC_2 (VAR_2->sent_limit);
  FUNC_3 (4, "tl_fetch_unread () = %d\n", FUNC_1 ());
  FUNC_0 (FUNC_1 (), 0);
  return 0;
}
