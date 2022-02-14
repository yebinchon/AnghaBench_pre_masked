
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2 (void) {
  FUNC_1 (4, "copyexec_results_client_read_new_events: binlog_fd = %d\n", VAR_0);
  int VAR_1 = FUNC_0 (0, 1);
  if (VAR_1 < 0) {
    FUNC_1 (3, "replay_log returns %d.\n", VAR_1);
  }
}
