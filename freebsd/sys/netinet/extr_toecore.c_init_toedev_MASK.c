
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toedev {int tod_alloc_tls_session; int tod_tcp_info; int tod_ctloutput; int tod_offload_socket; int tod_syncache_respond; int tod_syncache_removed; int tod_syncache_added; int tod_route_redirect; int tod_l2_update; int tod_pcb_detach; void* tod_send_fin; void* tod_send_rst; void* tod_output; int tod_rcvd; int tod_input; int tod_listen_stop; int tod_listen_start; int tod_connect; int * tod_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void
FUNC_0(struct toedev *VAR_16)
{

 VAR_16->tod_softc = ((void*)0);






 VAR_16->tod_connect = VAR_1;
 VAR_16->tod_listen_start = VAR_5;
 VAR_16->tod_listen_stop = VAR_6;
 VAR_16->tod_input = VAR_3;
 VAR_16->tod_rcvd = VAR_10;
 VAR_16->tod_output = VAR_8;
 VAR_16->tod_send_rst = VAR_8;
 VAR_16->tod_send_fin = VAR_8;
 VAR_16->tod_pcb_detach = VAR_9;
 VAR_16->tod_l2_update = VAR_4;
 VAR_16->tod_route_redirect = VAR_11;
 VAR_16->tod_syncache_added = VAR_12;
 VAR_16->tod_syncache_removed = VAR_13;
 VAR_16->tod_syncache_respond = VAR_14;
 VAR_16->tod_offload_socket = VAR_7;
 VAR_16->tod_ctloutput = VAR_2;
 VAR_16->tod_tcp_info = VAR_15;
 VAR_16->tod_alloc_tls_session = VAR_0;
}
