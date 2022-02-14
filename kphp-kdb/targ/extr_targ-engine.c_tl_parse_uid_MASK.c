
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,int ,int ,int) ;

int FUNC_3 (void) {
  int VAR_4 = FUNC_1 ();
  if (VAR_4 > 0) {
    if (FUNC_0 (VAR_4) < 0) {
      FUNC_2 (VAR_0, "user_id is not from this engine: log_split_min = %d, log_split_max = %d, log_split_mod = %d, uid = %d", VAR_2, VAR_1, VAR_3, VAR_4);
      VAR_4 = -1;
    }
  }
  return VAR_4;
}
