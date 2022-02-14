
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_result_data {int result; int binlog_pos; int transaction_id; int random_tag; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4 (struct lev_copyexec_result_data *VAR_1) {
  if (FUNC_0 ("LEV_COPYEXEC_RESULT_DATA")) {
    return;
  }
  FUNC_3 (VAR_0, "0x%x\t%d\t", VAR_1->random_tag, VAR_1->transaction_id);
  int VAR_2 = VAR_1->result >> 28, VAR_3 = VAR_1->result & 0x0fffffff;
  FUNC_2 (VAR_2);
  FUNC_3 (VAR_0, "\t");
  FUNC_1 (VAR_2, VAR_3);
  FUNC_3 (VAR_0, "\t%d\n", VAR_1->binlog_pos);
}
