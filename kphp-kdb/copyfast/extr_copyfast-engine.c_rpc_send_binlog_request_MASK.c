
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_binlog_request {long long remote_id; long long binlog_position; int local_id; } ;
struct connection {int dummy; } ;
struct TYPE_4__ {int binlog_request_sent; int * total_requested_num_color; } ;
struct TYPE_6__ {TYPE_1__ structured; } ;
struct TYPE_5__ {int link_color; } ;


 long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (long long) ;
 int FUNC_2 (int,int ,long long) ;
 scalar_t__ FUNC_3 (struct rpc_binlog_request*,int,struct connection*,int ) ;
 int FUNC_4 (struct rpc_binlog_request*,struct connection*) ;
 int FUNC_5 (int,char*,long long,long long) ;

int FUNC_6 (struct connection *VAR_6, long long VAR_7, long long VAR_8) {
  FUNC_5 (2, "rpc_send_binlog_request: remote_id = %lld, pos = %lld\n", VAR_7, VAR_8);
  if (!VAR_7) {
    return 0;
  }
  if (VAR_8 <= 0) {
    VAR_8 = VAR_0;
  }
  struct rpc_binlog_request *VAR_9 = (struct rpc_binlog_request *)VAR_3;
  if (FUNC_3 (VAR_9, sizeof (struct rpc_binlog_request), VAR_6, VAR_4) < 0) {
    return -1;
  }
  VAR_9->local_id = VAR_2;
  VAR_9->remote_id = VAR_7;
  VAR_9->binlog_position = VAR_8;
  int VAR_10 = FUNC_1 (VAR_7)->link_color;
  FUNC_0 (0 <= VAR_10 && VAR_10 <= 2);
  VAR_5->structured.total_requested_num_color[VAR_10] ++;
  FUNC_2 (1, VAR_1, VAR_7);
  VAR_5->structured.binlog_request_sent ++;
  return FUNC_4 (VAR_9, VAR_6);
}
