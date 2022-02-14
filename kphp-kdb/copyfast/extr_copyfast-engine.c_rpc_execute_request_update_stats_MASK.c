
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_request_update_stats {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int request_update_stats_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int,char*,int) ;

int FUNC_2 (struct connection *VAR_1, struct rpc_request_update_stats *VAR_2, int VAR_3) {
  FUNC_1 (2, "rpc_execute_request_update_stats: len = %d\n", VAR_3);
  if (VAR_3 != sizeof (struct rpc_request_update_stats)) {
    return 0;
  }
  VAR_0->structured.request_update_stats_received ++;
  return FUNC_0 (VAR_1);
}
