
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_del_first_messages {int first_local_id; } ;


 int VAR_0 ;
 struct lev_del_first_messages* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3 (int VAR_3, int VAR_4) {
  if (VAR_2 > 1) {
    FUNC_2 (VAR_1, "do_delete_first_messages(%d,%d):\n", VAR_3, VAR_4);
  }
  int VAR_5 = FUNC_1 (VAR_3, VAR_4);
  if (VAR_2 > 1) {
    FUNC_2 (VAR_1, "delete_first_messages returned %d\n", VAR_5);
  }
  if (VAR_5 <= 0) {
    return VAR_5;
  }
  if (VAR_5 > 0) {
    struct lev_del_first_messages *VAR_6 = FUNC_0 (VAR_0, sizeof (struct lev_del_first_messages), VAR_3);
    VAR_6->first_local_id = VAR_5;
  }
  return 1;
}
