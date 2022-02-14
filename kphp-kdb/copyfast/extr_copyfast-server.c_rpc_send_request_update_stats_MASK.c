
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_request_update_stats {int dummy; } ;
struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,long long) ;
 scalar_t__ FUNC_1 (struct rpc_request_update_stats*,int,struct connection*,int ) ;
 int FUNC_2 (struct rpc_request_update_stats*,struct connection*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3 (struct connection *VAR_4, long long VAR_5) {
  if (VAR_3 >= 2) {
    FUNC_0 (VAR_2, "rpc_send_request_update_stats: id = %lld\n", VAR_5);
  }
  struct rpc_request_update_stats *VAR_6 = (struct rpc_request_update_stats *)VAR_0;
  if (FUNC_1 (VAR_6, sizeof (struct rpc_request_update_stats), VAR_4, VAR_1) < 0) {
    return -1;
  }
  return FUNC_2 (VAR_6, VAR_4);
}
