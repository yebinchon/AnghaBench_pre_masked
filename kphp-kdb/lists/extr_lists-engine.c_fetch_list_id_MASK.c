
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int **** var_list_id_t ;


 int VAR_0 ;
 int FUNC_0 (int *****) ;
 scalar_t__ FUNC_1 (int ****) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *****,int) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;

int FUNC_5 (var_list_id_t *VAR_5) {
  FUNC_0 (VAR_5);
  if (FUNC_2 (4 * VAR_1) < 0) {
    return -1;
  }





  FUNC_3 (VAR_5, 4);

  if (FUNC_1 (*VAR_5) < 0) {
    FUNC_4 (VAR_0, "list_id in not from this engine. log_split_mod = %d, log_split_min = %d, log_split_max = %d", VAR_4, VAR_3, VAR_2);
    return -1;
  }
  return 0;
}
