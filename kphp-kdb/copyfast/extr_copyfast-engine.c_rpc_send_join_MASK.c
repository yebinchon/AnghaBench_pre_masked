
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_join {int protocol_version; int binlog_position; scalar_t__ id; int port; int host; } ;
struct connection {int our_ip; } ;
struct TYPE_3__ {int joined_sent; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct rpc_join*,int,struct connection*,int ) ;
 int FUNC_1 (struct rpc_join*,struct connection*) ;
 int FUNC_2 (int,char*,struct connection*) ;

int FUNC_3 (struct connection *VAR_12) {
  FUNC_2 (2, "rpc_send_join: c = %p\n", VAR_12);
  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) if (VAR_3[VAR_13]) {
    struct rpc_join *VAR_14 = (struct rpc_join *)VAR_6;
    if (FUNC_0 (VAR_14, sizeof (struct rpc_join), VAR_12, VAR_7) < 0) {
      return -1;
    }
    VAR_1 = VAR_3[VAR_13];
    VAR_14->host = VAR_12->our_ip;
    VAR_9 = VAR_12->our_ip;
    VAR_14->port = VAR_11;
    VAR_14->id = VAR_4 ? VAR_4 : VAR_2;
    VAR_14->binlog_position = VAR_0;
    VAR_14->protocol_version = VAR_5;
    VAR_8->structured.joined_sent++;
    FUNC_1 (VAR_14, VAR_12);
  }
  return 0;
}
