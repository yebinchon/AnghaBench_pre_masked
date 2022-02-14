
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union ib_gid {struct ocrdma_grh* raw; } ;
typedef int u8 ;
typedef int u16 ;
struct sockaddr_in6 {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct rdma_ah_attr {int dummy; } ;
struct ocrdma_grh {int* smac; int ttl; int protocol; int* sgid; int* dgid; void* pdid_hoplimit; void* tclass_flow; int daddr; int saddr; void* tot_len; void* frag_off; void* id; int * dmac; void* eth_type; void* vlan_tag; void* roce_eth_type; } ;
struct ocrdma_eth_vlan {int* smac; int ttl; int protocol; int* sgid; int* dgid; void* pdid_hoplimit; void* tclass_flow; int daddr; int saddr; void* tot_len; void* frag_off; void* id; int * dmac; void* eth_type; void* vlan_tag; void* roce_eth_type; } ;
struct ocrdma_eth_basic {int dummy; } ;
struct TYPE_4__ {struct ocrdma_grh* mac_addr; } ;
struct ocrdma_dev {int pvid; int sl; TYPE_1__ nic_info; int id; scalar_t__ pfc_state; } ;
struct ocrdma_ah {scalar_t__ hdr_type; TYPE_3__* av; int sgid_index; } ;
struct iphdr {int* smac; int ttl; int protocol; int* sgid; int* dgid; void* pdid_hoplimit; void* tclass_flow; int daddr; int saddr; void* tot_len; void* frag_off; void* id; int * dmac; void* eth_type; void* vlan_tag; void* roce_eth_type; } ;
struct ib_global_route {int traffic_class; int hop_limit; int flow_label; union ib_gid const dgid; int sgid_index; } ;
typedef int grh ;
typedef int eth ;
typedef void* __be16 ;
struct TYPE_6__ {int eth_hdr; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int*,struct ocrdma_grh*,int) ;
 int FUNC_5 (struct ocrdma_grh*,int ,int) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct ocrdma_dev*,struct rdma_ah_attr*,int *) ;
 int FUNC_8 (char*,int ) ;
 struct ib_global_route* FUNC_9 (struct rdma_ah_attr*) ;
 int FUNC_10 (struct sockaddr*,union ib_gid const*) ;

__attribute__((used)) static inline int FUNC_11(struct ocrdma_dev *VAR_7, struct ocrdma_ah *VAR_8,
   struct rdma_ah_attr *VAR_9, const union ib_gid *VAR_10,
   int VAR_11, bool *VAR_12, u16 VAR_13)
{
 int VAR_14;
 struct ocrdma_eth_vlan VAR_15;
 struct ocrdma_grh VAR_16;
 int VAR_17;
 u16 VAR_18 = 0;
 u8 VAR_19 = 0x11;
 struct iphdr VAR_20;
 const struct ib_global_route *VAR_21;
 union {
  struct sockaddr_in _sockaddr_in;
  struct sockaddr_in6 _sockaddr_in6;
 } VAR_22, VAR_23;

 FUNC_5(&VAR_15, 0, sizeof(VAR_15));
 FUNC_5(&VAR_16, 0, sizeof(VAR_16));


 VAR_18 = FUNC_6(VAR_7->id, VAR_8->hdr_type);
 if (!VAR_18)
  return -VAR_0;
 VAR_19 = (VAR_18 == VAR_2) ? 0x1b : 0x11;

 if (!VAR_13 || (VAR_13 > 0xFFF))
  VAR_13 = VAR_7->pvid;
 if (VAR_13 || VAR_7->pfc_state) {
  if (!VAR_13) {
   FUNC_8("ocrdma%d:Using VLAN with PFC is recommended\n",
    VAR_7->id);
   FUNC_8("ocrdma%d:Using VLAN 0 for this connection\n",
    VAR_7->id);
  }
  VAR_15.eth_type = FUNC_0(0x8100);
  VAR_15.roce_eth_type = FUNC_0(VAR_18);
  VAR_13 |= (VAR_7->sl & 0x07) << VAR_5;
  VAR_15.vlan_tag = FUNC_0(VAR_13);
  VAR_17 = sizeof(struct ocrdma_eth_vlan);
  *VAR_12 = 1;
 } else {
  VAR_15.eth_type = FUNC_0(VAR_18);
  VAR_17 = sizeof(struct ocrdma_eth_basic);
 }

 FUNC_4(&VAR_15.smac[0], &VAR_7->nic_info.mac_addr[0], VAR_1);
 VAR_14 = FUNC_7(VAR_7, VAR_9, &VAR_15.dmac[0]);
 if (VAR_14)
  return VAR_14;
 VAR_21 = FUNC_9(VAR_9);
 VAR_8->sgid_index = VAR_21->sgid_index;

 FUNC_4(&VAR_8->av->eth_hdr, &VAR_15, VAR_17);
 if (VAR_8->hdr_type == VAR_6) {
  *((__be16 *)&VAR_20) = FUNC_3((4 << 12) | (5 << 8) |
        VAR_21->traffic_class);
  VAR_20 = FUNC_0(VAR_11);
  VAR_20 = FUNC_3(VAR_3);
  VAR_20 = FUNC_3(0);
  VAR_20 = VAR_21->hop_limit;
  VAR_20 = VAR_19;
  FUNC_10((struct sockaddr *)&VAR_22, VAR_10);
  VAR_20 = VAR_22._sockaddr_in.sin_addr.s_addr;
  FUNC_10((struct sockaddr*)&VAR_23, &VAR_21->dgid);
  VAR_20 = VAR_23._sockaddr_in.sin_addr.s_addr;
  FUNC_4((u8 *)VAR_8->av + VAR_17, &VAR_20, sizeof(struct iphdr));
 } else {
  FUNC_4(&VAR_16.sgid[0], VAR_10->raw, sizeof(union ib_gid));
  VAR_16.tclass_flow = FUNC_1((6 << 28) |
           (VAR_21->traffic_class << 24) |
           VAR_21->flow_label);
  FUNC_4(&VAR_16.dgid[0], VAR_21->dgid.raw,
         sizeof(VAR_21->dgid.raw));
  VAR_16.pdid_hoplimit = FUNC_1((VAR_11 << 16) |
      (VAR_19 << 8) |
      VAR_21->hop_limit);
  FUNC_4((u8 *)VAR_8->av + VAR_17, &VAR_16, sizeof(struct ocrdma_grh));
 }
 if (*VAR_12)
  VAR_8->av->valid |= VAR_4;
 VAR_8->av->valid = FUNC_2(VAR_8->av->valid);
 return VAR_14;
}
