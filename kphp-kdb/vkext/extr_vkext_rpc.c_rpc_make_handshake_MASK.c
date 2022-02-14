
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {scalar_t__ status; scalar_t__ sfd; int inbound_packet_num; int packet_num; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rpc_server*,double) ;
 int FUNC_2 (struct rpc_server*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (struct rpc_server*,int,double) ;

int FUNC_4 (struct rpc_server *VAR_1, double VAR_2) {
  if (VAR_1->status != VAR_0 || VAR_1->sfd < 0) {
    return -1;
  }
  if (VAR_1->inbound_packet_num != -2 || VAR_1->packet_num != -2) {
    FUNC_2 (VAR_1);
    return -1;
  }
  if (FUNC_1 (VAR_1, VAR_2) < 0) {
    FUNC_2 (VAR_1);
    return -1;
  }
  if (FUNC_3 (VAR_1, 1, VAR_2) < 0) {
    FUNC_2 (VAR_1);
    return -1;
  }
  if (FUNC_3 (VAR_1, 1, VAR_2) < 0) {
    FUNC_2 (VAR_1);
    return -1;
  }
  FUNC_0 (VAR_1->packet_num == 0);
  FUNC_0 (VAR_1->inbound_packet_num == 0);
  return 0;
}
