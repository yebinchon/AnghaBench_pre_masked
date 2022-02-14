
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vlan_ethhdr {void* h_vlan_encapsulated_proto; void* h_vlan_TCI; void* h_vlan_proto; } ;
struct tcphdr {int ack; int syn; int fin; int rst; int doff; scalar_t__ urg_ptr; void* window; void* ack_seq; void* seq; void* dest; void* source; } ;
struct TYPE_10__ {int u6_addr32; } ;
struct TYPE_11__ {TYPE_3__ in6_u; } ;
struct TYPE_8__ {int u6_addr32; } ;
struct TYPE_9__ {TYPE_1__ in6_u; } ;
struct ipv6hdr {int version; int priority; int* flow_lbl; int nexthdr; int hop_limit; TYPE_4__ daddr; TYPE_2__ saddr; void* payload_len; } ;
struct iphdr {int ihl; int tos; int ttl; void* daddr; void* saddr; int protocol; void* frag_off; void* id; void* tot_len; int version; } ;
struct i40iw_sc_vsi {int ilq; } ;
struct TYPE_14__ {int* va; } ;
struct i40iw_puda_buf {int totallen; int maclen; int tcphlen; int ipv4; int refcount; void* scratch; TYPE_7__ mem; } ;
struct i40iw_kmem_info {int size; int addr; } ;
struct TYPE_12__ {int loc_id; int loc_seq_num; int loc_ack_num; int rcv_nxt; int rcv_wnd; } ;
struct i40iw_cm_node {int vlan_id; int user_pri; int tos; int* loc_addr; int* rem_addr; int loc_port; int rem_port; TYPE_5__ tcp_cntxt; int loc_mac; int rem_mac; scalar_t__ ipv4; TYPE_6__* iwdev; } ;
struct ethhdr {void* h_proto; int h_source; int h_dest; } ;
struct TYPE_13__ {struct i40iw_sc_vsi vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,int*) ;
 struct i40iw_puda_buf* FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int*,int,int) ;

__attribute__((used)) static struct i40iw_puda_buf *FUNC_8(struct i40iw_cm_node *VAR_12,
        struct i40iw_kmem_info *VAR_13,
        struct i40iw_kmem_info *VAR_14,
        struct i40iw_kmem_info *VAR_15,
        u8 VAR_16)
{
 struct i40iw_puda_buf *VAR_17;
 struct i40iw_sc_vsi *VAR_18 = &VAR_12->iwdev->vsi;
 u8 *VAR_19;

 struct tcphdr *VAR_20;
 struct iphdr *VAR_21;
 struct ipv6hdr *VAR_22;
 struct ethhdr *VAR_23;
 u16 VAR_24;
 u16 VAR_25 = VAR_0;
 u32 VAR_26 = 0;
 u32 VAR_27 = 0;
 u32 VAR_28 = 0;
 u16 VAR_29;

 VAR_17 = FUNC_5(VAR_18->ilq);
 if (!VAR_17)
  return ((void*)0);
 VAR_19 = VAR_17->mem.va;

 if (VAR_13)
  VAR_26 = (u32)VAR_13->size;

 if (VAR_14)
  VAR_28 = VAR_14->size;

 if (VAR_15)
  VAR_27 = VAR_15->size;

 if (VAR_12->vlan_id <= VAR_11)
  VAR_25 += 4;

 if (VAR_12->ipv4)
  VAR_24 = sizeof(*VAR_21) + sizeof(*VAR_20);
 else
  VAR_24 = sizeof(*VAR_22) + sizeof(*VAR_20);
 VAR_24 += VAR_26 + VAR_28 + VAR_27;

 FUNC_7(VAR_19, 0x00, VAR_25 + VAR_24);

 VAR_17->totallen = VAR_24 + VAR_25;
 VAR_17->maclen = VAR_25;
 VAR_17->tcphlen = sizeof(*VAR_20) + VAR_26;
 VAR_17->scratch = (void *)VAR_12;

 VAR_23 = (struct ethhdr *)VAR_19;
 VAR_19 += VAR_25;

 if (VAR_12->ipv4) {
  VAR_17->ipv4 = 1;

  VAR_21 = (struct iphdr *)VAR_19;
  VAR_19 += sizeof(*VAR_21);
  VAR_20 = (struct tcphdr *)VAR_19;
  VAR_19 += sizeof(*VAR_20);

  FUNC_1(VAR_23->h_dest, VAR_12->rem_mac);
  FUNC_1(VAR_23->h_source, VAR_12->loc_mac);
  if (VAR_12->vlan_id <= VAR_11) {
   ((struct vlan_ethhdr *)VAR_23)->h_vlan_proto = FUNC_3(VAR_1);
   VAR_29 = (VAR_12->user_pri << VAR_10) | VAR_12->vlan_id;
   ((struct vlan_ethhdr *)VAR_23)->h_vlan_TCI = FUNC_3(VAR_29);

   ((struct vlan_ethhdr *)VAR_23)->h_vlan_encapsulated_proto = FUNC_3(VAR_2);
  } else {
   VAR_23->h_proto = FUNC_3(VAR_2);
  }

  VAR_21->version = VAR_5;
  VAR_21->ihl = 5;
  VAR_21->tos = VAR_12->tos;
  VAR_21->tot_len = FUNC_3(VAR_24);
  VAR_21->id = FUNC_3(++VAR_12->tcp_cntxt.loc_id);

  VAR_21->frag_off = FUNC_3(0x4000);
  VAR_21->ttl = 0x40;
  VAR_21->protocol = VAR_4;
  VAR_21->saddr = FUNC_2(VAR_12->loc_addr[0]);
  VAR_21->daddr = FUNC_2(VAR_12->rem_addr[0]);
 } else {
  VAR_17->ipv4 = 0;
  VAR_22 = (struct ipv6hdr *)VAR_19;
  VAR_19 += sizeof(*VAR_22);
  VAR_20 = (struct tcphdr *)VAR_19;
  VAR_19 += sizeof(*VAR_20);

  FUNC_1(VAR_23->h_dest, VAR_12->rem_mac);
  FUNC_1(VAR_23->h_source, VAR_12->loc_mac);
  if (VAR_12->vlan_id <= VAR_11) {
   ((struct vlan_ethhdr *)VAR_23)->h_vlan_proto = FUNC_3(VAR_1);
   VAR_29 = (VAR_12->user_pri << VAR_10) | VAR_12->vlan_id;
   ((struct vlan_ethhdr *)VAR_23)->h_vlan_TCI = FUNC_3(VAR_29);
   ((struct vlan_ethhdr *)VAR_23)->h_vlan_encapsulated_proto = FUNC_3(VAR_3);
  } else {
   VAR_23->h_proto = FUNC_3(VAR_3);
  }
  VAR_22->version = 6;
  VAR_22->priority = VAR_12->tos >> 4;
  VAR_22->flow_lbl[0] = VAR_12->tos << 4;
  VAR_22->flow_lbl[1] = 0;
  VAR_22->flow_lbl[2] = 0;
  VAR_22->payload_len = FUNC_3(VAR_24 - sizeof(*VAR_22));
  VAR_22->nexthdr = 6;
  VAR_22->hop_limit = 128;
  FUNC_4(VAR_22->saddr.in6_u.u6_addr32,
        VAR_12->loc_addr);
  FUNC_4(VAR_22->daddr.in6_u.u6_addr32,
        VAR_12->rem_addr);
 }

 VAR_20->source = FUNC_3(VAR_12->loc_port);
 VAR_20->dest = FUNC_3(VAR_12->rem_port);

 VAR_20->seq = FUNC_2(VAR_12->tcp_cntxt.loc_seq_num);

 if (VAR_16 & VAR_6) {
  VAR_12->tcp_cntxt.loc_ack_num = VAR_12->tcp_cntxt.rcv_nxt;
  VAR_20->ack_seq = FUNC_2(VAR_12->tcp_cntxt.loc_ack_num);
  VAR_20->ack = 1;
 } else {
  VAR_20->ack_seq = 0;
 }

 if (VAR_16 & VAR_9) {
  VAR_12->tcp_cntxt.loc_seq_num++;
  VAR_20->syn = 1;
 } else {
  VAR_12->tcp_cntxt.loc_seq_num += VAR_28 + VAR_27;
 }

 if (VAR_16 & VAR_7) {
  VAR_12->tcp_cntxt.loc_seq_num++;
  VAR_20->fin = 1;
 }

 if (VAR_16 & VAR_8)
  VAR_20->rst = 1;

 VAR_20->doff = (u16)((sizeof(*VAR_20) + VAR_26 + 3) >> 2);
 VAR_17->tcphlen = VAR_20->doff << 2;
 VAR_20->window = FUNC_3(VAR_12->tcp_cntxt.rcv_wnd);
 VAR_20->urg_ptr = 0;

 if (VAR_26) {
  FUNC_6(VAR_19, VAR_13->addr, VAR_26);
  VAR_19 += VAR_26;
 }

 if (VAR_28) {
  FUNC_6(VAR_19, VAR_14->addr, VAR_28);
  VAR_19 += VAR_28;
 }

 if (VAR_15 && VAR_15->addr)
  FUNC_6(VAR_19, VAR_15->addr, VAR_15->size);

 FUNC_0(&VAR_17->refcount, 1);

 return VAR_17;
}
