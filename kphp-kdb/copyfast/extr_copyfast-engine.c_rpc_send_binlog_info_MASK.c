
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_binlog_info {long long remote_id; int binlog_position; int local_id; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int binlog_info_sent; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_0 (struct rpc_binlog_info*,int,struct connection*,int ) ;
 int FUNC_1 (struct rpc_binlog_info*,struct connection*) ;
 int FUNC_2 (int,char*,long long) ;

int FUNC_3 (struct connection *VAR_5, long long VAR_6) {
  FUNC_2 (2, "rpc_send_binlog_info: remote_id = %lld\n", VAR_6);
  if (!VAR_6) {
    return 0;
  }
  struct rpc_binlog_info *VAR_7 = (struct rpc_binlog_info *)VAR_2;
  if (FUNC_0 (VAR_7, sizeof (struct rpc_binlog_info), VAR_5, VAR_3) < 0) {
    return -1;
  }
  VAR_7->local_id = VAR_1;
  VAR_7->remote_id = VAR_6;
  VAR_7->binlog_position = VAR_0;
  VAR_4->structured.binlog_info_sent ++;
  return FUNC_1 (VAR_7, VAR_5);
}
