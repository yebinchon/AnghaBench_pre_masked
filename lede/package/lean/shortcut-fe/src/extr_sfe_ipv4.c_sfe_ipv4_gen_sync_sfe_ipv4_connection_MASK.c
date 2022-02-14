
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_11__ {int max_end; int end; int max_win; } ;
struct TYPE_12__ {TYPE_5__ tcp; } ;
struct sfe_ipv4_connection_match {int rx_byte_count64; int rx_packet_count64; int match_dev; int rx_byte_count; int rx_packet_count; TYPE_6__ protocol_state; } ;
struct sfe_ipv4_connection {void* last_sync_jiffies; struct sfe_ipv4_connection_match* reply_match; struct sfe_ipv4_connection_match* original_match; int dest_port_xlate; int dest_port; int src_port_xlate; int src_port; int dest_ip_xlate; int dest_ip; int src_ip_xlate; int src_ip; int protocol; } ;
struct sfe_ipv4 {int dummy; } ;
struct TYPE_10__ {int ip; } ;
struct TYPE_9__ {int ip; } ;
struct TYPE_8__ {int ip; } ;
struct TYPE_7__ {int ip; } ;
struct sfe_connection_sync {void* delta_jiffies; int reason; int dest_byte_count; int dest_packet_count; int dest_dev; int src_byte_count; int src_packet_count; int src_dev; int dest_new_byte_count; int dest_new_packet_count; int src_new_byte_count; int src_new_packet_count; int dest_td_max_end; int dest_td_end; int dest_td_max_window; int src_td_max_end; int src_td_end; int src_td_max_window; int dest_port_xlate; int dest_port; int src_port_xlate; int src_port; TYPE_4__ dest_ip_xlate; TYPE_3__ dest_ip; TYPE_2__ src_ip_xlate; TYPE_1__ src_ip; int protocol; scalar_t__ is_v6; } ;
typedef int sfe_sync_reason_t ;


 int FUNC_0 (struct sfe_ipv4_connection_match*) ;

__attribute__((used)) static void FUNC_1(struct sfe_ipv4 *VAR_0, struct sfe_ipv4_connection *VAR_1,
        struct sfe_connection_sync *VAR_2, sfe_sync_reason_t VAR_3,
        u64 VAR_4)
{
 struct sfe_ipv4_connection_match *VAR_5;
 struct sfe_ipv4_connection_match *VAR_6;




 VAR_2->is_v6 = 0;
 VAR_2->protocol = VAR_1->protocol;
 VAR_2->src_ip.ip = VAR_1->src_ip;
 VAR_2->src_ip_xlate.ip = VAR_1->src_ip_xlate;
 VAR_2->dest_ip.ip = VAR_1->dest_ip;
 VAR_2->dest_ip_xlate.ip = VAR_1->dest_ip_xlate;
 VAR_2->src_port = VAR_1->src_port;
 VAR_2->src_port_xlate = VAR_1->src_port_xlate;
 VAR_2->dest_port = VAR_1->dest_port;
 VAR_2->dest_port_xlate = VAR_1->dest_port_xlate;

 VAR_5 = VAR_1->original_match;
 VAR_6 = VAR_1->reply_match;
 VAR_2->src_td_max_window = VAR_5->protocol_state.tcp.max_win;
 VAR_2->src_td_end = VAR_5->protocol_state.tcp.end;
 VAR_2->src_td_max_end = VAR_5->protocol_state.tcp.max_end;
 VAR_2->dest_td_max_window = VAR_6->protocol_state.tcp.max_win;
 VAR_2->dest_td_end = VAR_6->protocol_state.tcp.end;
 VAR_2->dest_td_max_end = VAR_6->protocol_state.tcp.max_end;

 VAR_2->src_new_packet_count = VAR_5->rx_packet_count;
 VAR_2->src_new_byte_count = VAR_5->rx_byte_count;
 VAR_2->dest_new_packet_count = VAR_6->rx_packet_count;
 VAR_2->dest_new_byte_count = VAR_6->rx_byte_count;

 FUNC_0(VAR_5);
 FUNC_0(VAR_6);

 VAR_2->src_dev = VAR_5->match_dev;
 VAR_2->src_packet_count = VAR_5->rx_packet_count64;
 VAR_2->src_byte_count = VAR_5->rx_byte_count64;

 VAR_2->dest_dev = VAR_6->match_dev;
 VAR_2->dest_packet_count = VAR_6->rx_packet_count64;
 VAR_2->dest_byte_count = VAR_6->rx_byte_count64;

 VAR_2->reason = VAR_3;




 VAR_2->delta_jiffies = VAR_4 - VAR_1->last_sync_jiffies;
 VAR_1->last_sync_jiffies = VAR_4;
}
