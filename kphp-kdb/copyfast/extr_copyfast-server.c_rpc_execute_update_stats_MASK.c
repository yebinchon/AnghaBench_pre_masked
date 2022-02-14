
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_update_stats {int stats; int id; } ;
struct long_update_stats {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_2__ {scalar_t__ time_requested; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_4 (struct connection *VAR_8, struct rpc_update_stats *VAR_9, int VAR_10) {
  if (VAR_7 >= 2) {
    FUNC_1 (VAR_6, "rpc_execute_update_stats: len = %d\n", VAR_10);
  }
  if (VAR_10 != sizeof (struct rpc_update_stats)) {
    return 0;
  }
  int VAR_11 = FUNC_2 (VAR_9->id);
  if (VAR_11 < 0) {
    return 0;
  }
  FUNC_0 (0 <= VAR_11 && VAR_11 < VAR_4);
  VAR_3[VAR_11].time_requested = 0;
  VAR_2 = VAR_11;
  VAR_0 = VAR_5;
  FUNC_3 (&VAR_1, &VAR_9->stats, sizeof (struct long_update_stats));
  return 0;

}
