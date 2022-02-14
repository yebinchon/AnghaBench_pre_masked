
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union engine_stats {int dummy; } engine_stats ;
struct rpc_stats {int stats; int id; } ;
struct connection {int dummy; } ;
struct TYPE_2__ {int stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4 (struct connection *VAR_4, struct rpc_stats *VAR_5, int VAR_6) {
  if (VAR_3 >= 2) {
    FUNC_1 (VAR_2, "rpc_execute_stats: len = %d\n", VAR_6);
  }
  if (VAR_6 != sizeof (struct rpc_stats)) {
    return 0;
  }
  int VAR_7 = FUNC_2 (VAR_5->id);
  if (VAR_7 < 0) {
    return 0;
  }
  FUNC_0 (0 <= VAR_7 && VAR_7 < VAR_1);
  FUNC_3 (&VAR_0[VAR_7].stats, &VAR_5->stats, sizeof (union engine_stats));
  return 0;

}
