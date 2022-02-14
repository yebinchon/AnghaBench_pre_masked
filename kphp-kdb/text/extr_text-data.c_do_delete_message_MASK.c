
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_del_message {int local_id; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int ) ;
 struct lev_del_message* FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_3 (int VAR_4, int VAR_5) {
  if (VAR_2 > 1) {
    FUNC_2 (VAR_1, "do_delete_message(%d,%d):\n", VAR_4, VAR_5);
  }
  int VAR_6 = FUNC_0 (VAR_4, VAR_5, -1, -1, 0);
  if (VAR_2 > 1) {
    FUNC_2 (VAR_1, "adjust_message returned %d\n", VAR_6);
  }
  if (VAR_6 < 0) {
    return VAR_6;
  }
  if ((VAR_6 & 1) || VAR_3) {
    struct lev_del_message *VAR_7 = FUNC_1 (VAR_0, sizeof (struct lev_del_message), VAR_4);
    VAR_7->local_id = VAR_5;
  }
  return VAR_6 & 1;
}
