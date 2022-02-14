
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_user_info {scalar_t__ binlog_name_hash; long long updated_at; scalar_t__ binlog_pos; } ;
struct TYPE_3__ {scalar_t__ replica_name_hash; long long engine_time; int flags; scalar_t__ engine_log_pos; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 TYPE_1__** VAR_7 ;
 int FUNC_0 (struct proc_user_info*,int ) ;
 int VAR_8 ;

void FUNC_1 (void) {
  int VAR_9, VAR_10;
  if (!VAR_0) {
    return;
  }
  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
    static struct proc_user_info VAR_11;
    int VAR_12 = FUNC_0 (&VAR_11, VAR_4[VAR_9]);
    if (VAR_12 == 2) {
      if (VAR_6[VAR_9] != VAR_11.binlog_name_hash) {
 VAR_6[VAR_9] = VAR_11.binlog_name_hash;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
   if (VAR_1[VAR_10].replica_name_hash == VAR_6[VAR_9]) {
     break;
   }
 }
 VAR_7[VAR_9] = (VAR_10 == VAR_8) ? 0 : &VAR_1[VAR_10];
      }
      if (VAR_7[VAR_9] && VAR_11.binlog_pos) {
 long long VAR_13 = VAR_7[VAR_9]->engine_time;
 if (
     VAR_13 > VAR_11.updated_at || VAR_13 < VAR_11.updated_at - VAR_3) {
   VAR_7[VAR_9]->engine_log_pos = VAR_11.binlog_pos;
   VAR_7[VAR_9]->engine_time = VAR_11.updated_at;
   VAR_7[VAR_9]->flags |= VAR_2;
 }
      }
    }
  }
}
