
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_aux_transaction_cmd_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lev_copyexec_aux_transaction_cmd_file*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2 (struct lev_copyexec_aux_transaction_cmd_file *VAR_2) {
  int VAR_3 = FUNC_0 (VAR_2);
  if (VAR_3 < 0) {
    FUNC_1 ("unpack_file (%s) failed at the line %d", VAR_1, -VAR_3);
    VAR_0 = 0x00ff;

  }
  return VAR_3;
}
