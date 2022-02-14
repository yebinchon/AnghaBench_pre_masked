
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct netflow_v9_record_ipv6_tcp {int dst_as; int src_as; int src_mask; int dst_mask; int tos; int prot; int flags; int d_port; int s_port; void* last; void* first; void* o_octets; void* o_packets; void* i_octets; void* i_packets; void* o_ifx; void* i_ifx; int next_hop; int dst_addr; int src_addr; } ;
struct netflow_v9_record_ipv4_tcp {int dst_as; int src_as; int src_mask; int dst_mask; int tos; int prot; int flags; int d_port; int s_port; void* last; void* first; void* o_octets; void* o_packets; void* i_octets; void* i_packets; void* o_ifx; void* i_ifx; int next_hop; int dst_addr; int src_addr; } ;
struct TYPE_14__ {struct netflow_v9_record_ipv6_tcp v6_tcp; struct netflow_v9_record_ipv4_tcp v4_tcp; } ;
struct netflow_v9_record_general {TYPE_5__ rec; } ;
struct netflow_v9_packet_opt {int flow_type; int mtu; int count; scalar_t__ flow_header; } ;
struct netflow_v9_flowset_header {scalar_t__ length; void* id; } ;
struct mbuf {int dummy; } ;
struct TYPE_11__ {int s_addr; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_13__ {int flow_type; int r_tos; int r_ip_p; int r_dport; int r_sport; TYPE_2__ r_dst; TYPE_1__ r_src; } ;
struct TYPE_12__ {int s_addr; } ;
struct flow_entry_data {int src_mask; int dst_mask; TYPE_4__ r; int tcp_flags; int last; int first; int bytes; int packets; scalar_t__ fle_o_ifx; scalar_t__ fle_i_ifx; TYPE_3__ next_hop; } ;
struct flow_entry {int f; } ;
struct TYPE_16__ {int r_dst6; } ;
struct TYPE_15__ {int r_src6; } ;
struct TYPE_18__ {int r_tos; int r_ip_p; int r_dport; int r_sport; TYPE_7__ dst; TYPE_6__ src; } ;
struct TYPE_17__ {int next_hop6; } ;
struct flow6_entry_data {int src_mask; int dst_mask; TYPE_9__ r; int tcp_flags; int last; int first; int bytes; int packets; scalar_t__ fle_o_ifx; scalar_t__ fle_i_ifx; TYPE_8__ n; } ;
typedef int item_p ;
typedef int fsh ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;


 scalar_t__ VAR_1 ;
 struct mbuf* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mbuf*,struct netflow_v9_packet_opt*) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct mbuf*,size_t,void*) ;
 scalar_t__ FUNC_9 (struct mbuf*) ;
 int FUNC_10 (char*) ;

int
FUNC_11(item_p VAR_2, struct netflow_v9_packet_opt *VAR_3, struct flow_entry *VAR_4)
{
 size_t VAR_5 = 0;
 struct netflow_v9_flowset_header VAR_6;
 struct netflow_v9_record_general VAR_7;
 struct mbuf *VAR_8 = FUNC_3(VAR_2);
 uint16_t VAR_9;
 struct flow_entry_data *VAR_10;



 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0, "ng_netflow: V9 export packet without tag!");
  return (0);
 }


 VAR_10 = (struct flow_entry_data *)&VAR_4->f;




 VAR_9 = VAR_10->r.flow_type;

 switch (VAR_9) {
 case 129:
 {

  struct netflow_v9_record_ipv4_tcp *VAR_11 = &VAR_7.rec.v4_tcp;

  VAR_11->src_addr = VAR_10->r.r_src.s_addr;
  VAR_11->dst_addr = VAR_10->r.r_dst.s_addr;
  VAR_11->next_hop = VAR_10->next_hop.s_addr;
  VAR_11->i_ifx = FUNC_7(VAR_10->fle_i_ifx);
  VAR_11->o_ifx = FUNC_7(VAR_10->fle_o_ifx);
  VAR_11->i_packets = FUNC_6(VAR_10->packets);
  VAR_11->i_octets = FUNC_6(VAR_10->bytes);
  VAR_11->o_packets = FUNC_6(0);
  VAR_11->o_octets = FUNC_6(0);
  VAR_11->first = FUNC_6(FUNC_2(VAR_10->first));
  VAR_11->last = FUNC_6(FUNC_2(VAR_10->last));
  VAR_11->s_port = VAR_10->r.r_sport;
  VAR_11->d_port = VAR_10->r.r_dport;
  VAR_11->flags = VAR_10->tcp_flags;
  VAR_11->prot = VAR_10->r.r_ip_p;
  VAR_11->tos = VAR_10->r.r_tos;
  VAR_11->dst_mask = VAR_10->dst_mask;
  VAR_11->src_mask = VAR_10->src_mask;


  VAR_11->src_as = VAR_11->dst_as = 0;

  VAR_5 = sizeof(struct netflow_v9_record_ipv4_tcp);
  break;
 }
 default:
 {
  FUNC_1(VAR_0, "export9_add(): Don't know what to do with %d flow type!", VAR_9);
  return (0);
 }
 }


 if (VAR_9 != VAR_3->flow_type) {

  if (VAR_3->flow_type != 0)
   FUNC_5(VAR_8, VAR_3);

  VAR_3->flow_type = VAR_9;
  VAR_3->flow_header = FUNC_9(VAR_8);


  VAR_6.id = FUNC_7(VAR_1 + VAR_9);
  VAR_6.length = 0;


  if (FUNC_8(VAR_8, sizeof(VAR_6), (void *)&VAR_6) != 1)
   FUNC_10("ng_netflow: m_append() failed");

 }

 if (FUNC_8(VAR_8, VAR_5, (void *)&VAR_7.rec) != 1)
  FUNC_10("ng_netflow: m_append() failed");

 VAR_3->count++;

 if (FUNC_9(VAR_8) + sizeof(struct netflow_v9_record_general) + sizeof(struct netflow_v9_flowset_header) >= FUNC_4(VAR_3->mtu))
  return (1);
 return (0);
}
