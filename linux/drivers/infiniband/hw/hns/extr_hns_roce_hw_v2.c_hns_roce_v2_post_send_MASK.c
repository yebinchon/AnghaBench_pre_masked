
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_15__ {int invalidate_rkey; int imm_data; } ;
struct ib_send_wr {int num_sge; int opcode; int send_flags; TYPE_6__* sg_list; TYPE_3__ ex; int wr_id; struct ib_send_wr* next; } ;
struct ib_qp_attr {scalar_t__ qp_state; } ;
struct ib_qp {scalar_t__ qp_type; int pd; int device; } ;
struct hns_roce_wqe_frmr_seg {int dummy; } ;
struct hns_roce_v2_wqe_data_seg {int dummy; } ;
struct hns_roce_v2_ud_send_wqe {scalar_t__ byte_16; scalar_t__ byte_4; void* va; void* rkey; void* inv_key; void* immtdata; void* msg_len; int * dgid; scalar_t__ byte_48; scalar_t__ byte_40; scalar_t__ byte_36; scalar_t__ byte_32; void* qkey; scalar_t__ byte_24; scalar_t__ byte_20; scalar_t__ dmac; } ;
struct hns_roce_v2_rc_send_wqe {scalar_t__ byte_16; scalar_t__ byte_4; void* va; void* rkey; void* inv_key; void* immtdata; void* msg_len; int * dgid; scalar_t__ byte_48; scalar_t__ byte_40; scalar_t__ byte_36; scalar_t__ byte_32; void* qkey; scalar_t__ byte_24; scalar_t__ byte_20; scalar_t__ dmac; } ;
struct hns_roce_v2_db {scalar_t__ parameter; scalar_t__ byte_4; } ;
struct TYPE_21__ {int max_gs; int wqe_cnt; int head; int lock; int db_reg_l; int * wrid; } ;
struct TYPE_12__ {int send_cq; } ;
struct TYPE_13__ {int sge_cnt; } ;
struct hns_roce_qp {scalar_t__ state; unsigned int sq_next_wqe; unsigned int next_sge; size_t port; int qkey; int doorbell_qpn; int sl; TYPE_9__ sq; TYPE_10__ ibqp; int phy_port; TYPE_1__ sge; } ;
struct hns_roce_dev {scalar_t__* dev_addr; struct device* dev; } ;
struct TYPE_14__ {int* mac; int hop_limit; int tclass; int flowlabel; int sl; int * dgid; int gid_index; scalar_t__ vlan_en; int vlan; } ;
struct hns_roce_ah {TYPE_2__ av; } ;
struct device {int dummy; } ;
typedef int __le32 ;
struct TYPE_20__ {int rkey; int remote_addr; } ;
struct TYPE_19__ {int rkey; int remote_addr; } ;
struct TYPE_18__ {int length; } ;
struct TYPE_17__ {int pdn; } ;
struct TYPE_16__ {int remote_qkey; int remote_qpn; int ah; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 TYPE_7__* FUNC_0 (struct ib_send_wr const*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_5 (int*,int *) ;
 void* FUNC_6 (struct hns_roce_qp*,unsigned int) ;
 int FUNC_7 (struct hns_roce_dev*,int ,int ) ;
 int FUNC_8 (TYPE_10__*,struct ib_qp_attr*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_9__*,int,int ) ;
 int FUNC_10 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (struct hns_roce_v2_ud_send_wqe*,int ,int) ;
 TYPE_8__* FUNC_17 (struct ib_send_wr const*) ;
 int FUNC_18 (struct ib_send_wr const*) ;
 int FUNC_19 (scalar_t__,int ,int) ;
 int FUNC_20 (scalar_t__,int ,int ,int) ;
 int FUNC_21 (void*,TYPE_7__*) ;
 int FUNC_22 (struct hns_roce_v2_wqe_data_seg*,TYPE_6__*) ;
 int FUNC_23 (struct hns_roce_qp*,struct ib_send_wr const*,unsigned int*) ;
 int FUNC_24 (struct hns_roce_v2_ud_send_wqe*,struct hns_roce_wqe_frmr_seg*,int ) ;
 int FUNC_25 (struct ib_qp*,struct ib_send_wr const*,struct hns_roce_v2_ud_send_wqe*,void*,unsigned int*,struct ib_send_wr const**) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int *,unsigned long) ;
 struct hns_roce_ah* FUNC_28 (int ) ;
 struct hns_roce_dev* FUNC_29 (int ) ;
 TYPE_5__* FUNC_30 (int ) ;
 struct hns_roce_qp* FUNC_31 (struct ib_qp*) ;
 TYPE_4__* FUNC_32 (struct ib_send_wr const*) ;
 scalar_t__ FUNC_33 (int) ;
 int FUNC_34 () ;

__attribute__((used)) static int FUNC_35(struct ib_qp *VAR_89,
     const struct ib_send_wr *VAR_90,
     const struct ib_send_wr **VAR_91)
{
 struct hns_roce_dev *VAR_92 = FUNC_29(VAR_89->device);
 struct hns_roce_ah *VAR_93 = FUNC_28(FUNC_32(VAR_90)->ah);
 struct hns_roce_v2_ud_send_wqe *VAR_94;
 struct hns_roce_v2_rc_send_wqe *VAR_95;
 struct hns_roce_qp *VAR_96 = FUNC_31(VAR_89);
 struct hns_roce_wqe_frmr_seg *VAR_97;
 struct device *VAR_98 = VAR_92->dev;
 struct hns_roce_v2_db VAR_99;
 struct ib_qp_attr VAR_100;
 unsigned int VAR_101;
 unsigned int VAR_102;
 unsigned long VAR_103;
 unsigned int VAR_104;
 void *VAR_105 = ((void*)0);
 bool VAR_106;
 int VAR_107;
 u32 VAR_108;
 int VAR_109 = 0;
 u32 VAR_110;
 u8 *VAR_111;
 int VAR_112;
 int VAR_113;

 if (FUNC_33(VAR_89->qp_type != VAR_23 &&
       VAR_89->qp_type != VAR_22 &&
       VAR_89->qp_type != VAR_24)) {
  FUNC_4(VAR_98, "Not supported QP(0x%x)type!\n", VAR_89->qp_type);
  *VAR_91 = VAR_90;
  return -VAR_2;
 }

 if (FUNC_33(VAR_96->state == VAR_20 || VAR_96->state == VAR_19 ||
       VAR_96->state == VAR_21)) {
  FUNC_4(VAR_98, "Post WQE fail, QP state %d err!\n", VAR_96->state);
  *VAR_91 = VAR_90;
  return -VAR_0;
 }

 FUNC_26(&VAR_96->sq.lock, VAR_103);
 VAR_104 = VAR_96->sq_next_wqe;
 VAR_101 = VAR_96->next_sge;

 for (VAR_112 = 0; VAR_90; ++VAR_112, VAR_90 = VAR_90->next) {
  if (FUNC_9(&VAR_96->sq, VAR_112, VAR_96->ibqp.send_cq)) {
   VAR_109 = -VAR_1;
   *VAR_91 = VAR_90;
   goto out;
  }

  if (FUNC_33(VAR_90->num_sge > VAR_96->sq.max_gs)) {
   FUNC_4(VAR_98, "num_sge=%d > qp->sq.max_gs=%d\n",
    VAR_90->num_sge, VAR_96->sq.max_gs);
   VAR_109 = -VAR_0;
   *VAR_91 = VAR_90;
   goto out;
  }

  VAR_105 = FUNC_6(VAR_96, VAR_104 & (VAR_96->sq.wqe_cnt - 1));
  VAR_96->sq.wrid[(VAR_96->sq.head + VAR_112) & (VAR_96->sq.wqe_cnt - 1)] =
              VAR_90->wr_id;

  VAR_102 =
         ~(((VAR_96->sq.head + VAR_112) >> FUNC_11(VAR_96->sq.wqe_cnt)) & 0x1);
  VAR_108 = 0;


  if (VAR_89->qp_type == VAR_22) {
   VAR_94 = VAR_105;
   FUNC_16(VAR_94, 0, sizeof(*VAR_94));

   FUNC_20(VAR_94->dmac, VAR_81,
           VAR_82, VAR_93->av.mac[0]);
   FUNC_20(VAR_94->dmac, VAR_83,
           VAR_84, VAR_93->av.mac[1]);
   FUNC_20(VAR_94->dmac, VAR_85,
           VAR_86, VAR_93->av.mac[2]);
   FUNC_20(VAR_94->dmac, VAR_87,
           VAR_88, VAR_93->av.mac[3]);
   FUNC_20(VAR_94->byte_48,
           VAR_70,
           VAR_71,
           VAR_93->av.mac[4]);
   FUNC_20(VAR_94->byte_48,
           VAR_72,
           VAR_73,
           VAR_93->av.mac[5]);


   VAR_111 = (u8 *)VAR_92->dev_addr[VAR_96->port];
   VAR_106 = FUNC_5(VAR_93->av.mac,
             VAR_111) ? 1 : 0;

   FUNC_19(VAR_94->byte_40,
         VAR_64, VAR_106);

   FUNC_20(VAR_94->byte_4,
           VAR_77,
           VAR_78,
           VAR_15);

   for (VAR_113 = 0; VAR_113 < VAR_90->num_sge; VAR_113++)
    VAR_108 += VAR_90->sg_list[VAR_113].length;

   VAR_94->msg_len =
    FUNC_2(FUNC_13(VAR_94->msg_len) + VAR_108);

   switch (VAR_90->opcode) {
   case 129:
   case 132:
    VAR_94->immtdata =
          FUNC_2(FUNC_1(VAR_90->ex.imm_data));
    break;
   default:
    VAR_94->immtdata = 0;
    break;
   }


   FUNC_19(VAR_94->byte_4,
       VAR_76,
       (VAR_90->send_flags & VAR_27) ? 1 : 0);


   FUNC_19(VAR_94->byte_4,
      VAR_80,
      (VAR_90->send_flags & VAR_28) ? 1 : 0);

   FUNC_19(VAR_94->byte_4,
         VAR_79, VAR_102);

   FUNC_20(VAR_94->byte_16,
           VAR_46,
           VAR_47,
           FUNC_30(VAR_89->pd)->pdn);

   FUNC_20(VAR_94->byte_16,
           VAR_48,
           VAR_49,
           VAR_90->num_sge);

   FUNC_20(VAR_94->byte_20,
         VAR_50,
         VAR_51,
         VAR_101 & (VAR_96->sge.sge_cnt - 1));

   FUNC_20(VAR_94->byte_24,
           VAR_52,
           VAR_53, 0);
   VAR_94->qkey =
        FUNC_2(FUNC_32(VAR_90)->remote_qkey & 0x80000000 ?
        VAR_96->qkey : FUNC_32(VAR_90)->remote_qkey);
   FUNC_20(VAR_94->byte_32,
           VAR_54,
           VAR_55,
           FUNC_32(VAR_90)->remote_qpn);

   FUNC_20(VAR_94->byte_36,
           VAR_60,
           VAR_61,
           FUNC_12(VAR_93->av.vlan));
   FUNC_20(VAR_94->byte_36,
           VAR_56,
           VAR_57,
           VAR_93->av.hop_limit);
   FUNC_20(VAR_94->byte_36,
           VAR_58,
           VAR_59,
           VAR_93->av.tclass);
   FUNC_20(VAR_94->byte_40,
           VAR_62,
           VAR_63,
           VAR_93->av.flowlabel);
   FUNC_20(VAR_94->byte_40,
           VAR_67,
           VAR_68,
           VAR_93->av.sl);
   FUNC_20(VAR_94->byte_40,
           VAR_65,
           VAR_66,
           VAR_96->port);

   FUNC_19(VAR_94->byte_40,
         VAR_69,
         VAR_93->av.vlan_en ? 1 : 0);
   FUNC_20(VAR_94->byte_48,
           VAR_74,
           VAR_75,
           FUNC_7(VAR_92, VAR_96->phy_port,
        VAR_93->av.gid_index));

   FUNC_15(&VAR_94->dgid[0], &VAR_93->av.dgid[0],
          VAR_3);

   FUNC_23(VAR_96, VAR_90, &VAR_101);
   VAR_104++;
  } else if (VAR_89->qp_type == VAR_23) {
   VAR_95 = VAR_105;
   FUNC_16(VAR_95, 0, sizeof(*VAR_95));
   for (VAR_113 = 0; VAR_113 < VAR_90->num_sge; VAR_113++)
    VAR_108 += VAR_90->sg_list[VAR_113].length;

   VAR_95->msg_len =
    FUNC_2(FUNC_13(VAR_95->msg_len) + VAR_108);

   switch (VAR_90->opcode) {
   case 129:
   case 132:
    VAR_95->immtdata =
          FUNC_2(FUNC_1(VAR_90->ex.imm_data));
    break;
   case 128:
    VAR_95->inv_key =
     FUNC_2(VAR_90->ex.invalidate_rkey);
    break;
   default:
    VAR_95->immtdata = 0;
    break;
   }

   FUNC_19(VAR_95->byte_4,
         VAR_40,
         (VAR_90->send_flags & VAR_26) ? 1 : 0);

   FUNC_19(VAR_95->byte_4,
      VAR_44,
      (VAR_90->send_flags & VAR_28) ? 1 : 0);

   FUNC_19(VAR_95->byte_4,
       VAR_39,
       (VAR_90->send_flags & VAR_27) ? 1 : 0);

   FUNC_19(VAR_95->byte_4,
         VAR_43, VAR_102);

   VAR_105 += sizeof(struct hns_roce_v2_rc_send_wqe);
   switch (VAR_90->opcode) {
   case 134:
    VAR_110 = VAR_12;
    VAR_95->rkey =
     FUNC_2(FUNC_17(VAR_90)->rkey);
    VAR_95->va =
     FUNC_3(FUNC_17(VAR_90)->remote_addr);
    break;
   case 133:
    VAR_110 = VAR_13;
    VAR_95->rkey =
     FUNC_2(FUNC_17(VAR_90)->rkey);
    VAR_95->va =
     FUNC_3(FUNC_17(VAR_90)->remote_addr);
    break;
   case 132:
    VAR_110 = VAR_14;
    VAR_95->rkey =
     FUNC_2(FUNC_17(VAR_90)->rkey);
    VAR_95->va =
     FUNC_3(FUNC_17(VAR_90)->remote_addr);
    break;
   case 130:
    VAR_110 = VAR_15;
    break;
   case 128:
    VAR_110 = VAR_17;
    break;
   case 129:
    VAR_110 = VAR_16;
    break;
   case 137:
    VAR_110 = VAR_10;
    FUNC_19(VAR_95->byte_4,
            VAR_45, 1);
    VAR_95->inv_key =
         FUNC_2(VAR_90->ex.invalidate_rkey);
    break;
   case 131:
    VAR_110 = VAR_9;
    VAR_97 = VAR_105;
    FUNC_24(VAR_95, VAR_97, FUNC_18(VAR_90));
    break;
   case 139:
    VAR_110 = VAR_5;
    VAR_95->rkey =
     FUNC_2(FUNC_0(VAR_90)->rkey);
    VAR_95->va =
     FUNC_3(FUNC_0(VAR_90)->remote_addr);
    break;
   case 138:
    VAR_110 = VAR_6;
    VAR_95->rkey =
     FUNC_2(FUNC_0(VAR_90)->rkey);
    VAR_95->va =
     FUNC_3(FUNC_0(VAR_90)->remote_addr);
    break;
   case 136:
    VAR_110 =
           VAR_7;
    break;
   case 135:
    VAR_110 =
          VAR_8;
    break;
   default:
    VAR_110 = VAR_11;
    break;
   }

   FUNC_20(VAR_95->byte_4,
           VAR_41,
           VAR_42, VAR_110);

   if (VAR_90->opcode == 139 ||
       VAR_90->opcode == 138) {
    struct hns_roce_v2_wqe_data_seg *VAR_114;

    VAR_114 = VAR_105;
    FUNC_22(VAR_114, VAR_90->sg_list);
    VAR_105 += sizeof(struct hns_roce_v2_wqe_data_seg);
    FUNC_21(VAR_105, FUNC_0(VAR_90));
    FUNC_20(VAR_95->byte_16,
            VAR_37,
            VAR_38,
            VAR_90->num_sge);
   } else if (VAR_90->opcode != 131) {
    VAR_109 = FUNC_25(VAR_89, VAR_90, VAR_95,
       VAR_105, &VAR_101, VAR_91);
    if (VAR_109)
     goto out;
   }

   VAR_104++;
  } else {
   FUNC_4(VAR_98, "Illegal qp_type(0x%x)\n", VAR_89->qp_type);
   FUNC_27(&VAR_96->sq.lock, VAR_103);
   *VAR_91 = VAR_90;
   return -VAR_2;
  }
 }

out:
 if (FUNC_14(VAR_112)) {
  VAR_96->sq.head += VAR_112;

  FUNC_34();

  VAR_99.byte_4 = 0;
  VAR_99.parameter = 0;

  FUNC_20(VAR_99.byte_4, VAR_31,
          VAR_32, VAR_96->doorbell_qpn);
  FUNC_20(VAR_99.byte_4, VAR_29,
          VAR_30, VAR_4);
  FUNC_20(VAR_99.parameter, VAR_33,
          VAR_34,
          VAR_96->sq.head & ((VAR_96->sq.wqe_cnt << 1) - 1));
  FUNC_20(VAR_99.parameter, VAR_35,
          VAR_36, VAR_96->sl);

  FUNC_10(VAR_92, (__le32 *)&VAR_99, VAR_96->sq.db_reg_l);

  VAR_96->sq_next_wqe = VAR_104;
  VAR_96->next_sge = VAR_101;

  if (VAR_96->state == VAR_18) {
   VAR_107 = VAR_25;
   VAR_100.qp_state = VAR_18;

   VAR_109 = FUNC_8(&VAR_96->ibqp, &VAR_100, VAR_107,
          VAR_96->state, VAR_18);
   if (VAR_109) {
    FUNC_27(&VAR_96->sq.lock, VAR_103);
    *VAR_91 = VAR_90;
    return VAR_109;
   }
  }
 }

 FUNC_27(&VAR_96->sq.lock, VAR_103);

 return VAR_109;
}
