
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc_data {TYPE_1__* uinfo; } ;
struct TYPE_5__ {int rescan_binlog_table; scalar_t__ rescan_pid_table; } ;
struct TYPE_6__ {TYPE_2__ e_hdr; } ;
struct TYPE_4__ {int pid; scalar_t__ start_utime; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct proc_data*) ;
 struct proc_data* FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int) ;
 int* VAR_6 ;
 int FUNC_3 (int,char*,int) ;

int FUNC_4 (void) {
  int VAR_7, VAR_8 = 0, VAR_9 = 0;
  if (!VAR_2) {
    return -1;
  }
  if (VAR_5) {
    VAR_2->e_hdr.rescan_pid_table = 0;
  }
  FUNC_2 (VAR_6, VAR_3, VAR_4 * 4);
  VAR_6[VAR_4] = 0x7fffffff;
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
    struct proc_data *VAR_10 = FUNC_1 (VAR_7);
    FUNC_0 (VAR_10);
    if (VAR_10->uinfo[0].pid == VAR_7 && VAR_10->uinfo[1].pid == VAR_7 && VAR_10->uinfo[0].start_utime > 0 && VAR_10->uinfo[1].start_utime == VAR_10->uinfo[0].start_utime && !(VAR_10->uinfo[0].flags & VAR_1) && !(VAR_10->uinfo[1].flags & VAR_1)) {

      while (VAR_6[VAR_8] < VAR_7) {
 FUNC_3 (1, "monitor: process %d deleted\n", VAR_6[VAR_8]);
 VAR_8++;
 VAR_2->e_hdr.rescan_binlog_table = 1;
      }
      if (VAR_6[VAR_8] == VAR_7) {
 VAR_8++;
      } else {
 FUNC_3 (1, "monitor: found new process %d\n", VAR_7);
      }
      VAR_3[VAR_9++] = VAR_7;
    }
  }
  while (VAR_6[VAR_8] < 0x7fffffff) {
    FUNC_3 (1, "monitor: process %d deleted\n", VAR_6[VAR_8]);
    VAR_8++;
    VAR_2->e_hdr.rescan_binlog_table = 1;
  }
  VAR_4 = VAR_9;
  VAR_3[VAR_9] = 0x7fffffff;
  return VAR_9;
}
