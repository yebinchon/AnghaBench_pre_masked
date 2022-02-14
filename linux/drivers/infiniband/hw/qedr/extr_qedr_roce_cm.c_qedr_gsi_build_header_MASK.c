
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef void* u32 ;
typedef scalar_t__ u16 ;
struct TYPE_23__ {int dmac; } ;
struct rdma_ah_attr {TYPE_2__ roce; } ;
struct qedr_qp {int sq_psn; } ;
struct qedr_dev {TYPE_3__* ndev; } ;
struct in6_addr {int dummy; } ;
struct TYPE_19__ {scalar_t__ csum; void* dport; void* sport; } ;
struct TYPE_18__ {void* daddr; void* saddr; int ttl; void* frag_off; void* tos; int protocol; } ;
struct TYPE_29__ {int raw; } ;
struct TYPE_17__ {int raw; } ;
struct TYPE_30__ {int flow_label; TYPE_8__ source_gid; TYPE_11__ destination_gid; int hop_limit; int traffic_class; } ;
struct TYPE_28__ {void* source_qpn; void* qkey; } ;
struct TYPE_27__ {int solicited_event; int opcode; void* psn; void* destination_qpn; int pkey; } ;
struct TYPE_26__ {void* type; int smac_h; int dmac_h; } ;
struct TYPE_25__ {void* type; void* tag; } ;
struct ib_ud_header {TYPE_13__ udp; TYPE_12__ ip4; TYPE_9__ grh; TYPE_7__ deth; TYPE_6__ bth; TYPE_5__ eth; TYPE_4__ vlan; } ;
struct ib_send_wr {int num_sge; int send_flags; TYPE_1__* sg_list; } ;
struct ib_global_route {int flow_label; TYPE_11__ dgid; int hop_limit; int traffic_class; struct ib_gid_attr* sgid_attr; } ;
struct TYPE_16__ {int raw; } ;
struct ib_gid_attr {scalar_t__ gid_type; TYPE_10__ gid; } ;
struct TYPE_24__ {int dev_addr; } ;
struct TYPE_22__ {scalar_t__ length; } ;
struct TYPE_21__ {struct rdma_ah_attr attr; } ;
struct TYPE_20__ {int remote_qpn; int ah; } ;


 int FUNC_0 (struct qedr_dev*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ,int ) ;
 TYPE_15__* FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int,int,int,int,int,int,int ,struct ib_ud_header*) ;
 scalar_t__ FUNC_6 (struct in6_addr*) ;
 int FUNC_7 (int *,int ,int) ;
 void* FUNC_8 (int ) ;
 struct ib_global_route* FUNC_9 (struct rdma_ah_attr*) ;
 int FUNC_10 (struct ib_gid_attr const*,scalar_t__*,int *) ;
 TYPE_14__* FUNC_11 (struct ib_send_wr const*) ;

__attribute__((used)) static inline int FUNC_12(struct qedr_dev *VAR_17,
     struct qedr_qp *VAR_18,
     const struct ib_send_wr *VAR_19,
     struct ib_ud_header *VAR_20,
     int *VAR_21)
{
 bool VAR_22 = 0, VAR_23 = 1;
 struct rdma_ah_attr *VAR_24 = &FUNC_2(FUNC_11(VAR_19)->ah)->attr;
 const struct ib_global_route *VAR_25 = FUNC_9(VAR_24);
 const struct ib_gid_attr *VAR_26 = VAR_25->sgid_attr;
 int VAR_27 = 0;
 u16 VAR_28 = 0;
 u16 VAR_29;
 int VAR_30;
 int VAR_31 = 0;

 bool VAR_32 = 0;
 int VAR_33;

 VAR_30 = FUNC_10(VAR_26, &VAR_28, ((void*)0));
 if (VAR_30)
  return VAR_30;

 if (VAR_28 < VAR_16)
  VAR_22 = 1;

 VAR_27 = 0;
 for (VAR_33 = 0; VAR_33 < VAR_19->num_sge; ++VAR_33)
  VAR_27 += VAR_19->sg_list[VAR_33].length;

 VAR_32 = (VAR_26->gid_type == VAR_4);
 if (!VAR_32) {

  VAR_29 = VAR_1;
  *VAR_21 = VAR_12;
 } else if (FUNC_6((struct in6_addr *)&VAR_26->gid)) {

  VAR_31 = 4;
  VAR_29 = VAR_2;
  VAR_23 = 0;
  *VAR_21 = VAR_13;
 } else {

  VAR_31 = 6;
  VAR_29 = VAR_3;
  *VAR_21 = VAR_14;
 }

 VAR_30 = FUNC_5(VAR_27, 0, 1, VAR_22,
          VAR_23, VAR_31, VAR_32, 0, VAR_20);
 if (VAR_30) {
  FUNC_0(VAR_17, "gsi post send: failed to init header\n");
  return VAR_30;
 }


 FUNC_1(VAR_20->eth.dmac_h, VAR_24->roce.dmac);
 FUNC_1(VAR_20->eth.smac_h, VAR_17->ndev->dev_addr);
 if (VAR_22) {
  VAR_20->eth.type = FUNC_4(VAR_0);
  VAR_20->vlan.tag = FUNC_4(VAR_28);
  VAR_20->vlan.type = FUNC_4(VAR_29);
 } else {
  VAR_20->eth.type = FUNC_4(VAR_29);
 }


 VAR_20->bth.solicited_event = !!(VAR_19->send_flags & VAR_6);
 VAR_20->bth.pkey = VAR_10;
 VAR_20->bth.destination_qpn = FUNC_3(FUNC_11(VAR_19)->remote_qpn);
 VAR_20->bth.psn = FUNC_3((VAR_18->sq_psn++) & ((1 << 24) - 1));
 VAR_20->bth.opcode = VAR_5;


 VAR_20->deth.qkey = FUNC_3(0x80010000);
 VAR_20->deth.source_qpn = FUNC_3(VAR_9);

 if (VAR_23) {

  VAR_20->grh.traffic_class = VAR_25->traffic_class;
  VAR_20->grh.flow_label = VAR_25->flow_label;
  VAR_20->grh.hop_limit = VAR_25->hop_limit;
  VAR_20->grh.destination_gid = VAR_25->dgid;
  FUNC_7(&VAR_20->grh.source_gid.raw, VAR_26->gid.raw,
         sizeof(VAR_20->grh.source_gid.raw));
 } else {

  u32 VAR_34;

  VAR_20->ip4.protocol = VAR_7;
  VAR_20->ip4.tos = FUNC_3(VAR_25->flow_label);
  VAR_20->ip4.frag_off = FUNC_4(VAR_8);
  VAR_20->ip4.ttl = VAR_25->hop_limit;

  VAR_34 = FUNC_8(VAR_26->gid.raw);
  VAR_20->ip4.saddr = VAR_34;
  VAR_34 = FUNC_8(VAR_25->dgid.raw);
  VAR_20->ip4.daddr = VAR_34;

 }


 if (VAR_32) {
  VAR_20->udp.sport = FUNC_4(VAR_11);
  VAR_20->udp.dport = FUNC_4(VAR_15);
  VAR_20->udp.csum = 0;

 }
 return 0;
}
