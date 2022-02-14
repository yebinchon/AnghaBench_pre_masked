
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_join_ack {int id; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int join_ack_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int,char*,int,...) ;

int FUNC_2 (struct connection *VAR_6, struct rpc_join_ack *VAR_7, int VAR_8) {
  FUNC_1 (2, "rpc_execute_join_ack: len = %d\n", VAR_8);
  if (VAR_8 != sizeof (struct rpc_join_ack)) {
    return 0;
  }
  VAR_5->structured.join_ack_received++;
  VAR_4 = VAR_7->id;
  FUNC_1 (6, "%p %lld %lld\n", VAR_0, VAR_4, VAR_1);
  if (!(VAR_4 & VAR_3) || (VAR_4 & VAR_2) != VAR_1) {
    VAR_4 = VAR_1;
    return 0;
  }
  return FUNC_0 (VAR_6);
}
