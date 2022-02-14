
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ monitor_pid; scalar_t__ rpc_pending; scalar_t__ rescan_binlog_table; scalar_t__ rescan_pid_table; } ;
struct TYPE_4__ {TYPE_1__ e_hdr; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long long VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6 (void) {
  if (!VAR_1) {

    return 0;
  }
  FUNC_0 (VAR_0->e_hdr.monitor_pid == VAR_2);
  if (VAR_0->e_hdr.rescan_pid_table) {
    FUNC_5 ();
  }
  if (VAR_0->e_hdr.rescan_binlog_table) {
    FUNC_4 ();
  }
  if (VAR_0->e_hdr.rpc_pending) {
    VAR_0->e_hdr.rpc_pending = 0;
    FUNC_1 ();
  }
  if ((unsigned long long) FUNC_2 (1000000) - VAR_3 > (1 << 28)) {
    if (FUNC_3 () > 0) {
      FUNC_5 ();
    }
  }
  return 1;
}
