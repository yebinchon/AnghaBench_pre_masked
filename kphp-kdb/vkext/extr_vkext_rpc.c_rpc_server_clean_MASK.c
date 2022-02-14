
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int inbound_packet_num; int packet_num; int out_buf; int out_rptr; int out_wptr; scalar_t__ in_bytes; } ;



__attribute__((used)) static void FUNC_0 (struct rpc_server *VAR_0) {
  VAR_0->in_bytes = 0;
  VAR_0->out_wptr = VAR_0->out_rptr = VAR_0->out_buf;
  VAR_0->inbound_packet_num = VAR_0->packet_num = -2;
}
