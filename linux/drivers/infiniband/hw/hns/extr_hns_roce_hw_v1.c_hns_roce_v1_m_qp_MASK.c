
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_32__ {scalar_t__ dmac; } ;
struct TYPE_26__ {TYPE_5__ roce; } ;
struct ib_qp_attr {int qp_access_flags; int pkey_index; int min_rnr_timer; int port_num; int dest_qp_num; int path_mtu; int rq_psn; int sq_psn; int retry_cnt; int rnr_retry; int timeout; scalar_t__ max_dest_rd_atomic; scalar_t__ max_rd_atomic; TYPE_14__ ah_attr; } ;
struct ib_qp {scalar_t__ send_cq; scalar_t__ recv_cq; scalar_t__ srq; scalar_t__ uobject; int pd; int device; } ;
struct TYPE_33__ {scalar_t__* raw; } ;
struct ib_global_route {int hop_limit; int flow_label; int traffic_class; TYPE_6__ dgid; int sgid_index; } ;
struct hns_roce_qp_context {int qpc_bytes_144; int qpc_bytes_188; void* tx_cur_sq_wqe_ba_l; int qpc_bytes_180; int qpc_bytes_176; scalar_t__ sge_use_len; int qpc_bytes_168; int qpc_bytes_164; scalar_t__ pkt_use_len; int qpc_bytes_156; scalar_t__ rnr_retry; int qpc_bytes_148; int qpc_bytes_140; int qpc_bytes_136; int qpc_bytes_132; int qpc_bytes_128; int qpc_bytes_124; int qpc_bytes_120; void* rx_cur_sq_wqe_ba_l; int qpc_bytes_112; int qpc_bytes_108; scalar_t__ va_h; scalar_t__ va_l; scalar_t__ r_key; scalar_t__ dma_length; int qpc_bytes_88; int qpc_bytes_84; scalar_t__ rx_rnr_time; int qpc_bytes_76; void* cur_rq_wqe_ba_l; int qpc_bytes_68; int qpc_bytes_44; int dmac_l; int * dgid; int qpc_bytes_48; int qpc_bytes_36; int qpc_bytes_32; void* irrl_ba_l; int qpc_bytes_24; void* sq_rq_bt_l; int qpc_bytes_16; int qpc_bytes_12; int qpc_bytes_8; int qpc_bytes_4; } ;
struct TYPE_22__ {scalar_t__ tail; scalar_t__ head; scalar_t__ wqe_cnt; } ;
struct TYPE_36__ {int head; scalar_t__ tail; scalar_t__ db_reg_l; scalar_t__ offset; scalar_t__ wqe_cnt; } ;
struct TYPE_27__ {int first_seg; } ;
struct TYPE_31__ {int qp_type; } ;
struct hns_roce_qp {int qpn; int access_flags; int pkey_index; int sq_signal_bits; int port; int phy_port; int sl; int state; scalar_t__ sq_next_wqe; TYPE_10__ sq; TYPE_9__ rq; scalar_t__ resp_depth; TYPE_19__ mtt; TYPE_4__ ibqp; } ;
struct TYPE_35__ {int* phy_port; } ;
struct TYPE_34__ {int index; } ;
struct TYPE_30__ {int irrl_table; } ;
struct TYPE_29__ {int mtt_table; } ;
struct hns_roce_dev {int loop_idc; TYPE_8__ iboe; TYPE_7__ priv_uar; scalar_t__ odb_offset; scalar_t__ reg_base; scalar_t__* dev_addr; TYPE_3__ qp_table; TYPE_2__ mr_table; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_28__ {struct device dev; } ;
struct TYPE_25__ {int cqn; } ;
struct TYPE_24__ {int pdn; } ;
struct TYPE_23__ {int srqn; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
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
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 int VAR_118 ;
 int VAR_119 ;
 int VAR_120 ;
 int VAR_121 ;
 int VAR_122 ;
 int VAR_123 ;
 int VAR_124 ;
 int VAR_125 ;
 int VAR_126 ;
 int VAR_127 ;
 int VAR_128 ;
 int VAR_129 ;
 int VAR_130 ;
 int VAR_131 ;
 int VAR_132 ;
 int VAR_133 ;
 int VAR_134 ;
 int VAR_135 ;
 int VAR_136 ;
 int VAR_137 ;
 int VAR_138 ;
 int VAR_139 ;
 int VAR_140 ;
 int VAR_141 ;
 int VAR_142 ;
 int VAR_143 ;
 int VAR_144 ;
 int VAR_145 ;
 int VAR_146 ;
 int VAR_147 ;
 int VAR_148 ;
 int VAR_149 ;
 int VAR_150 ;
 int VAR_151 ;
 int VAR_152 ;
 int VAR_153 ;
 int VAR_154 ;
 int VAR_155 ;
 int VAR_156 ;
 int VAR_157 ;
 int VAR_158 ;
 int VAR_159 ;
 int VAR_160 ;
 int VAR_161 ;
 int VAR_162 ;
 int VAR_163 ;
 int VAR_164 ;
 int VAR_165 ;
 int VAR_166 ;
 int VAR_167 ;
 int VAR_168 ;
 int VAR_169 ;
 int VAR_170 ;
 int VAR_171 ;
 int VAR_172 ;
 int VAR_173 ;
 int VAR_174 ;
 int VAR_175 ;
 int VAR_176 ;
 int VAR_177 ;
 int VAR_178 ;
 int VAR_179 ;
 int VAR_180 ;
 int VAR_181 ;
 int VAR_182 ;
 int VAR_183 ;
 int VAR_184 ;
 int VAR_185 ;
 int VAR_186 ;
 int VAR_187 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct hns_roce_dev*,scalar_t__,int ) ;
 int* FUNC_6 (struct hns_roce_dev*,int *,int,int*) ;
 int FUNC_7 (TYPE_13__*,int,TYPE_11__*) ;
 int FUNC_8 (struct hns_roce_dev*,TYPE_19__*,int ,int ,struct hns_roce_qp_context*,struct hns_roce_qp*) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (struct hns_roce_qp_context*) ;
 struct hns_roce_qp_context* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,scalar_t__*,int) ;
 int FUNC_14 (TYPE_14__*) ;
 scalar_t__ FUNC_15 (TYPE_14__*) ;
 int FUNC_16 (TYPE_14__*) ;
 int FUNC_17 (TYPE_14__*) ;
 struct ib_global_route* FUNC_18 (TYPE_14__*) ;
 int FUNC_19 (int ,int,int ) ;
 int FUNC_20 (int ,int ,int) ;
 int FUNC_21 (int ,int,int ,int) ;
 int FUNC_22 (int) ;
 TYPE_13__* FUNC_23 (scalar_t__) ;
 struct hns_roce_dev* FUNC_24 (int ) ;
 TYPE_12__* FUNC_25 (int ) ;
 struct hns_roce_qp* FUNC_26 (struct ib_qp*) ;
 int FUNC_27 (int ) ;
 TYPE_11__* FUNC_28 (scalar_t__) ;
 int FUNC_29 () ;

__attribute__((used)) static int FUNC_30(struct ib_qp *VAR_188, const struct ib_qp_attr *VAR_189,
       int VAR_190, enum ib_qp_state VAR_191,
       enum ib_qp_state VAR_192)
{
 struct hns_roce_dev *VAR_193 = FUNC_24(VAR_188->device);
 struct hns_roce_qp *VAR_194 = FUNC_26(VAR_188);
 struct device *VAR_195 = &VAR_193->pdev->dev;
 struct hns_roce_qp_context *VAR_196;
 const struct ib_global_route *VAR_197 = FUNC_18(&VAR_189->ah_attr);
 dma_addr_t VAR_198 = 0;
 dma_addr_t VAR_199 = 0;
 __le32 VAR_200[2] = {0};
 int VAR_201 = 0;
 u64 *VAR_202 = ((void*)0);
 int VAR_203 = -VAR_1;
 u64 *VAR_204 = ((void*)0);
 int VAR_205;
 u8 VAR_206;
 u8 *VAR_207;
 u8 *VAR_208;

 VAR_196 = FUNC_12(sizeof(*VAR_196), VAR_3);
 if (!VAR_196)
  return -VAR_2;


 VAR_204 = FUNC_6(VAR_193, &VAR_193->mr_table.mtt_table,
       VAR_194->mtt.first_seg, &VAR_199);
 if (VAR_204 == ((void*)0)) {
  FUNC_2(VAR_195, "qp buf pa find failed\n");
  goto out;
 }


 VAR_202 = FUNC_6(VAR_193, &VAR_193->qp_table.irrl_table,
         VAR_194->qpn, &VAR_198);
 if (VAR_202 == ((void*)0)) {
  FUNC_2(VAR_195, "qp irrl_table find failed\n");
  goto out;
 }







 if (VAR_191 == VAR_9 && VAR_192 == VAR_8) {
  FUNC_21(VAR_196->qpc_bytes_4,
          VAR_144,
          VAR_145,
          FUNC_27(VAR_194->ibqp.qp_type));

  FUNC_20(VAR_196->qpc_bytes_4,
        VAR_176, 0);
  FUNC_20(VAR_196->qpc_bytes_4,
        VAR_178,
        !!(VAR_189->qp_access_flags & VAR_5));
  FUNC_20(VAR_196->qpc_bytes_4,
        VAR_179,
        !!(VAR_189->qp_access_flags & VAR_6)
        );
  FUNC_20(VAR_196->qpc_bytes_4,
        VAR_175,
        !!(VAR_189->qp_access_flags & VAR_4)
        );
  FUNC_20(VAR_196->qpc_bytes_4,
        VAR_177, 1);
  FUNC_21(VAR_196->qpc_bytes_4,
          VAR_142,
          VAR_143,
          FUNC_10((unsigned int)VAR_194->sq.wqe_cnt));
  FUNC_21(VAR_196->qpc_bytes_4,
          VAR_140,
          VAR_141,
          FUNC_10((unsigned int)VAR_194->rq.wqe_cnt));
  FUNC_21(VAR_196->qpc_bytes_4,
          VAR_138,
          VAR_139,
          FUNC_25(VAR_188->pd)->pdn);
  VAR_194->access_flags = VAR_189->qp_access_flags;
  FUNC_21(VAR_196->qpc_bytes_8,
          VAR_168,
          VAR_169,
          FUNC_23(VAR_188->send_cq)->cqn);
  FUNC_21(VAR_196->qpc_bytes_8,
          VAR_166,
          VAR_167,
          FUNC_23(VAR_188->recv_cq)->cqn);

  if (VAR_188->srq)
   FUNC_21(VAR_196->qpc_bytes_12,
           VAR_45,
           VAR_46,
           FUNC_28(VAR_188->srq)->srqn);

  FUNC_21(VAR_196->qpc_bytes_12,
          VAR_43,
          VAR_44,
          VAR_189->pkey_index);
  VAR_194->pkey_index = VAR_189->pkey_index;
  FUNC_21(VAR_196->qpc_bytes_16,
          VAR_97,
          VAR_98, VAR_194->qpn);

 } else if (VAR_191 == VAR_8 && VAR_192 == VAR_8) {
  FUNC_21(VAR_196->qpc_bytes_4,
          VAR_144,
          VAR_145,
          FUNC_27(VAR_194->ibqp.qp_type));
  FUNC_20(VAR_196->qpc_bytes_4,
        VAR_176, 0);
  if (VAR_190 & VAR_12) {
   FUNC_20(VAR_196->qpc_bytes_4,
         VAR_178,
         !!(VAR_189->qp_access_flags &
         VAR_5));
   FUNC_20(VAR_196->qpc_bytes_4,
         VAR_179,
         !!(VAR_189->qp_access_flags &
         VAR_6));
  } else {
   FUNC_20(VAR_196->qpc_bytes_4,
         VAR_178,
         !!(VAR_194->access_flags &
         VAR_5));
   FUNC_20(VAR_196->qpc_bytes_4,
         VAR_179,
         !!(VAR_194->access_flags &
         VAR_6));
  }

  FUNC_20(VAR_196->qpc_bytes_4,
        VAR_177, 1);
  FUNC_21(VAR_196->qpc_bytes_4,
          VAR_142,
          VAR_143,
          FUNC_10((unsigned int)VAR_194->sq.wqe_cnt));
  FUNC_21(VAR_196->qpc_bytes_4,
          VAR_140,
          VAR_141,
          FUNC_10((unsigned int)VAR_194->rq.wqe_cnt));
  FUNC_21(VAR_196->qpc_bytes_4,
          VAR_138,
          VAR_139,
          FUNC_25(VAR_188->pd)->pdn);

  FUNC_21(VAR_196->qpc_bytes_8,
          VAR_168,
          VAR_169,
          FUNC_23(VAR_188->send_cq)->cqn);
  FUNC_21(VAR_196->qpc_bytes_8,
          VAR_166,
          VAR_167,
          FUNC_23(VAR_188->recv_cq)->cqn);

  if (VAR_188->srq)
   FUNC_21(VAR_196->qpc_bytes_12,
           VAR_45,
           VAR_46,
           FUNC_28(VAR_188->srq)->srqn);
  if (VAR_190 & VAR_19)
   FUNC_21(VAR_196->qpc_bytes_12,
           VAR_43,
           VAR_44,
           VAR_189->pkey_index);
  else
   FUNC_21(VAR_196->qpc_bytes_12,
           VAR_43,
           VAR_44,
           VAR_194->pkey_index);

  FUNC_21(VAR_196->qpc_bytes_16,
          VAR_97,
          VAR_98, VAR_194->qpn);
 } else if (VAR_191 == VAR_8 && VAR_192 == VAR_10) {
  if ((VAR_190 & VAR_13) ||
      (VAR_190 & VAR_12) ||
      (VAR_190 & VAR_19) ||
      (VAR_190 & VAR_21)) {
   FUNC_2(VAR_195, "INIT2RTR attr_mask error\n");
   goto out;
  }

  VAR_207 = (u8 *)VAR_189->ah_attr.roce.dmac;

  VAR_196->sq_rq_bt_l = FUNC_0((u32)(VAR_199));
  FUNC_21(VAR_196->qpc_bytes_24,
          VAR_114,
          VAR_115,
          ((u32)(VAR_199 >> 32)));
  FUNC_20(VAR_196->qpc_bytes_24,
        VAR_170,
        1);
  FUNC_21(VAR_196->qpc_bytes_24,
          VAR_112,
          VAR_113,
          VAR_189->min_rnr_timer);
  VAR_196->irrl_ba_l = FUNC_0((u32)(VAR_198));
  FUNC_21(VAR_196->qpc_bytes_32,
          VAR_116,
          VAR_117,
          ((u32)(VAR_198 >> 32)) &
    VAR_116);
  FUNC_21(VAR_196->qpc_bytes_32,
          VAR_118,
          VAR_119, 0);
  FUNC_20(VAR_196->qpc_bytes_32,
        VAR_172,
        1);
  FUNC_20(VAR_196->qpc_bytes_32,
        VAR_174,
        VAR_194->sq_signal_bits);

  VAR_205 = (VAR_190 & VAR_20) ? (VAR_189->port_num - 1) :
   VAR_194->port;
  VAR_208 = (u8 *)VAR_193->dev_addr[VAR_205];

  if (FUNC_4(VAR_207, VAR_208) ||
      VAR_193->loop_idc == 0x1)
   FUNC_20(VAR_196->qpc_bytes_32,
         VAR_173, 1);

  FUNC_20(VAR_196->qpc_bytes_32,
        VAR_171,
        FUNC_14(&VAR_189->ah_attr));
  FUNC_21(VAR_196->qpc_bytes_32,
          VAR_120,
          VAR_121,
          FUNC_10((unsigned int)VAR_189->max_dest_rd_atomic));

  if (VAR_190 & VAR_15)
   FUNC_21(VAR_196->qpc_bytes_36,
           VAR_122,
           VAR_123,
           VAR_189->dest_qp_num);


  VAR_206 = FUNC_15(&VAR_189->ah_attr);
  FUNC_21(VAR_196->qpc_bytes_36,
          VAR_124,
          VAR_125,
    FUNC_5(VAR_193,
        VAR_206 - 1,
        VAR_197->sgid_index));

  FUNC_13(&(VAR_196->dmac_l), VAR_207, 4);

  FUNC_21(VAR_196->qpc_bytes_44,
          VAR_126,
          VAR_127,
          *((u16 *)(&VAR_207[4])));
  FUNC_21(VAR_196->qpc_bytes_44,
          VAR_130,
          VAR_131,
          FUNC_17(&VAR_189->ah_attr));
  FUNC_21(VAR_196->qpc_bytes_44,
          VAR_128,
          VAR_129,
          VAR_197->hop_limit);

  FUNC_21(VAR_196->qpc_bytes_48,
          VAR_132,
          VAR_133,
          VAR_197->flow_label);
  FUNC_21(VAR_196->qpc_bytes_48,
          VAR_136,
          VAR_137,
          VAR_197->traffic_class);
  FUNC_21(VAR_196->qpc_bytes_48,
          VAR_134,
          VAR_135, VAR_189->path_mtu);

  FUNC_13(VAR_196->dgid, VAR_197->dgid.raw,
         sizeof(VAR_197->dgid.raw));

  FUNC_1(VAR_195, "dmac:%x :%lx\n", VAR_196->dmac_l,
   FUNC_19(VAR_196->qpc_bytes_44,
           VAR_126,
           VAR_127));

  FUNC_21(VAR_196->qpc_bytes_68,
          VAR_148,
          VAR_149,
          VAR_194->rq.head);
  FUNC_21(VAR_196->qpc_bytes_68,
          VAR_146,
          VAR_147, 0);

  VAR_201 = (u32)VAR_194->rq.offset / VAR_22;
  VAR_196->cur_rq_wqe_ba_l =
    FUNC_0((u32)(VAR_204[VAR_201]));

  FUNC_21(VAR_196->qpc_bytes_76,
   VAR_150,
   VAR_151,
   VAR_204[VAR_201] >> 32);
  FUNC_21(VAR_196->qpc_bytes_76,
          VAR_152,
          VAR_153, 0);

  VAR_196->rx_rnr_time = 0;

  FUNC_21(VAR_196->qpc_bytes_84,
          VAR_154,
          VAR_155,
          VAR_189->rq_psn - 1);
  FUNC_21(VAR_196->qpc_bytes_84,
          VAR_156,
          VAR_157, 0);

  FUNC_21(VAR_196->qpc_bytes_88,
          VAR_163,
          VAR_164,
          VAR_189->rq_psn);
  FUNC_20(VAR_196->qpc_bytes_88,
        VAR_165, 0);
  FUNC_20(VAR_196->qpc_bytes_88,
        VAR_162, 0);
  FUNC_21(VAR_196->qpc_bytes_88,
   VAR_158,
   VAR_159,
   0);
  FUNC_21(VAR_196->qpc_bytes_88,
          VAR_160,
          VAR_161,
          0);

  VAR_196->dma_length = 0;
  VAR_196->r_key = 0;
  VAR_196->va_l = 0;
  VAR_196->va_h = 0;

  FUNC_21(VAR_196->qpc_bytes_108,
          VAR_24,
          VAR_25, 0);
  FUNC_20(VAR_196->qpc_bytes_108,
        VAR_23, 0);
  FUNC_20(VAR_196->qpc_bytes_108,
        VAR_26, 0);

  FUNC_21(VAR_196->qpc_bytes_112,
          VAR_29,
          VAR_30, 0);
  FUNC_21(VAR_196->qpc_bytes_112,
          VAR_27,
          VAR_28, 0);


  FUNC_21(VAR_196->qpc_bytes_156,
          VAR_76,
          VAR_77,
          VAR_194->phy_port);
  FUNC_21(VAR_196->qpc_bytes_156,
          VAR_82,
          VAR_83,
          FUNC_16(&VAR_189->ah_attr));
  VAR_194->sl = FUNC_16(&VAR_189->ah_attr);
 } else if (VAR_191 == VAR_10 &&
  VAR_192 == VAR_11) {

  if ((VAR_190 & VAR_13) ||
      (VAR_190 & VAR_12) ||
      (VAR_190 & VAR_21) ||
      (VAR_190 & VAR_18) ||
      (VAR_190 & VAR_14) ||
      (VAR_190 & VAR_17)) {
   FUNC_2(VAR_195, "RTR2RTS attr_mask error\n");
   goto out;
  }

  VAR_196->rx_cur_sq_wqe_ba_l = FUNC_0((u32)(VAR_204[0]));

  FUNC_21(VAR_196->qpc_bytes_120,
          VAR_31,
          VAR_32,
          (VAR_204[0]) >> 32);

  FUNC_21(VAR_196->qpc_bytes_124,
          VAR_35,
          VAR_36, 0);
  FUNC_21(VAR_196->qpc_bytes_124,
          VAR_33,
          VAR_34, 0);

  FUNC_21(VAR_196->qpc_bytes_128,
          VAR_40,
          VAR_41,
          VAR_189->sq_psn);
  FUNC_20(VAR_196->qpc_bytes_128,
        VAR_42, 0);
  FUNC_21(VAR_196->qpc_bytes_128,
        VAR_37,
        VAR_38,
        0);
  FUNC_20(VAR_196->qpc_bytes_128,
        VAR_39, 0);

  FUNC_21(VAR_196->qpc_bytes_132,
          VAR_47,
          VAR_48, 0);
  FUNC_21(VAR_196->qpc_bytes_132,
          VAR_49,
          VAR_50, 0);

  FUNC_21(VAR_196->qpc_bytes_136,
          VAR_53,
          VAR_54,
          VAR_189->sq_psn);
  FUNC_21(VAR_196->qpc_bytes_136,
          VAR_51,
          VAR_52,
          VAR_189->sq_psn);

  FUNC_21(VAR_196->qpc_bytes_140,
          VAR_55,
          VAR_56,
          (VAR_189->sq_psn >> VAR_187));
  FUNC_21(VAR_196->qpc_bytes_140,
          VAR_57,
          VAR_58, 0);
  FUNC_20(VAR_196->qpc_bytes_140,
        VAR_59, 0);

  FUNC_21(VAR_196->qpc_bytes_148,
          VAR_62,
          VAR_63, 0);
  FUNC_21(VAR_196->qpc_bytes_148,
          VAR_66,
          VAR_67,
          VAR_189->retry_cnt);
  FUNC_21(VAR_196->qpc_bytes_148,
          VAR_68,
          VAR_69,
          VAR_189->rnr_retry);
  FUNC_21(VAR_196->qpc_bytes_148,
          VAR_64,
          VAR_65, 0x100);

  VAR_196->rnr_retry = 0;

  FUNC_21(VAR_196->qpc_bytes_156,
          VAR_78,
          VAR_79,
          VAR_189->retry_cnt);
  if (VAR_189->timeout < 0x12) {
   FUNC_3(VAR_195, "ack timeout value(0x%x) must bigger than 0x12.\n",
     VAR_189->timeout);
   FUNC_21(VAR_196->qpc_bytes_156,
           VAR_72,
           VAR_73,
           0x12);
  } else {
   FUNC_21(VAR_196->qpc_bytes_156,
           VAR_72,
           VAR_73,
           VAR_189->timeout);
  }
  FUNC_21(VAR_196->qpc_bytes_156,
          VAR_80,
          VAR_81,
          VAR_189->rnr_retry);
  FUNC_21(VAR_196->qpc_bytes_156,
          VAR_76,
          VAR_77,
          VAR_194->phy_port);
  FUNC_21(VAR_196->qpc_bytes_156,
          VAR_82,
          VAR_83,
          FUNC_16(&VAR_189->ah_attr));
  VAR_194->sl = FUNC_16(&VAR_189->ah_attr);
  FUNC_21(VAR_196->qpc_bytes_156,
          VAR_74,
          VAR_75,
          FUNC_10((unsigned int)VAR_189->max_rd_atomic));
  FUNC_21(VAR_196->qpc_bytes_156,
          VAR_70,
          VAR_71, 0);
  VAR_196->pkt_use_len = 0;

  FUNC_21(VAR_196->qpc_bytes_164,
          VAR_86,
          VAR_87, VAR_189->sq_psn);
  FUNC_21(VAR_196->qpc_bytes_164,
          VAR_84,
          VAR_85, 0);

  FUNC_21(VAR_196->qpc_bytes_168,
          VAR_93,
          VAR_94,
          VAR_189->sq_psn);
  FUNC_21(VAR_196->qpc_bytes_168,
          VAR_95,
          VAR_96, 0);
  FUNC_21(VAR_196->qpc_bytes_168,
          VAR_89,
          VAR_90, 0);
  FUNC_20(VAR_196->qpc_bytes_168,
        VAR_91, 0);
  FUNC_20(VAR_196->qpc_bytes_168,
        VAR_88, 0);
  FUNC_20(VAR_196->qpc_bytes_168,
        VAR_92, 0);
  VAR_196->sge_use_len = 0;

  FUNC_21(VAR_196->qpc_bytes_176,
          VAR_99,
          VAR_100, 0);
  FUNC_21(VAR_196->qpc_bytes_176,
          VAR_101,
          VAR_102,
          0);
  FUNC_21(VAR_196->qpc_bytes_180,
          VAR_103,
          VAR_104, 0);
  FUNC_21(VAR_196->qpc_bytes_180,
          VAR_105,
          VAR_106, 0);

  VAR_196->tx_cur_sq_wqe_ba_l = FUNC_0((u32)(VAR_204[0]));

  FUNC_21(VAR_196->qpc_bytes_188,
          VAR_108,
          VAR_109,
          (VAR_204[0]) >> 32);
  FUNC_20(VAR_196->qpc_bytes_188,
        VAR_107, 0);
  FUNC_21(VAR_196->qpc_bytes_188,
          VAR_110,
          VAR_111,
          0);
 } else if (!((VAR_191 == VAR_8 && VAR_192 == VAR_9) ||
     (VAR_191 == VAR_8 && VAR_192 == VAR_7) ||
     (VAR_191 == VAR_10 && VAR_192 == VAR_9) ||
     (VAR_191 == VAR_10 && VAR_192 == VAR_7) ||
     (VAR_191 == VAR_11 && VAR_192 == VAR_9) ||
     (VAR_191 == VAR_11 && VAR_192 == VAR_7) ||
     (VAR_191 == VAR_7 && VAR_192 == VAR_9) ||
     (VAR_191 == VAR_7 && VAR_192 == VAR_7))) {
  FUNC_2(VAR_195, "not support this status migration\n");
  goto out;
 }


 FUNC_21(VAR_196->qpc_bytes_144,
         VAR_60,
         VAR_61, VAR_192);


 VAR_203 = FUNC_8(VAR_193, &VAR_194->mtt,
        FUNC_22(VAR_191),
        FUNC_22(VAR_192), VAR_196,
        VAR_194);
 if (VAR_203) {
  FUNC_2(VAR_195, "hns_roce_qp_modify failed\n");
  goto out;
 }





 if (VAR_191 == VAR_8 && VAR_192 == VAR_8) {

  FUNC_29();

  FUNC_21(VAR_200[0], VAR_180,
          VAR_181, VAR_194->rq.head);
  FUNC_21(VAR_200[1], VAR_185,
          VAR_186, VAR_194->qpn);
  FUNC_21(VAR_200[1], VAR_182,
          VAR_183, 1);
  FUNC_20(VAR_200[1], VAR_184, 1);

  if (VAR_188->uobject) {
   VAR_194->rq.db_reg_l = VAR_193->reg_base +
         VAR_193->odb_offset +
         VAR_0 * VAR_193->priv_uar.index;
  }

  FUNC_9(VAR_200, VAR_194->rq.db_reg_l);
 }

 VAR_194->state = VAR_192;

 if (VAR_190 & VAR_16)
  VAR_194->resp_depth = VAR_189->max_dest_rd_atomic;
 if (VAR_190 & VAR_20) {
  VAR_194->port = VAR_189->port_num - 1;
  VAR_194->phy_port = VAR_193->iboe.phy_port[VAR_194->port];
 }

 if (VAR_192 == VAR_9 && !VAR_188->uobject) {
  FUNC_7(FUNC_23(VAR_188->recv_cq), VAR_194->qpn,
         VAR_188->srq ? FUNC_28(VAR_188->srq) : ((void*)0));
  if (VAR_188->send_cq != VAR_188->recv_cq)
   FUNC_7(FUNC_23(VAR_188->send_cq),
          VAR_194->qpn, ((void*)0));

  VAR_194->rq.head = 0;
  VAR_194->rq.tail = 0;
  VAR_194->sq.head = 0;
  VAR_194->sq.tail = 0;
  VAR_194->sq_next_wqe = 0;
 }
out:
 FUNC_11(VAR_196);
 return VAR_203;
}
