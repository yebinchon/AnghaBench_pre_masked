
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
 int FUNC_2 (int ,char*,int,int ,int ,int ) ;

int FUNC_3 (void) {
  int VAR_4 = FUNC_1 ();
  if (!VAR_4 || FUNC_0 (VAR_4) < 0) {
    FUNC_2 (VAR_0, "Wrong server: user_id = %d, log_split_mod = %d, log_split_min = %d, log_split_max = %d", VAR_4, VAR_3, VAR_2, VAR_1);
    return -1;
  }
  return VAR_4;
}
