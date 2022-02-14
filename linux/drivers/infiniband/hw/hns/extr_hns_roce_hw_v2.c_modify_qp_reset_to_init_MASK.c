
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


typedef int u32 ;
struct ib_qp_attr {int qp_access_flags; } ;
struct ib_qp {int send_cq; scalar_t__ srq; int recv_cq; int pd; int device; } ;
struct hns_roce_v2_qp_context {int byte_256_sqflush_rqcqe; int byte_252_err_txcqn; int byte_248_ack_psn; int byte_240_irrl_tail; scalar_t__ irrl_cur_sge_offset; int byte_232_irrl_sge; int byte_220_retry_psn_msn; scalar_t__ sq_timer; int byte_212_lsn; int byte_208_irrl; int byte_200_sq_max; int byte_196_sq_psn; int byte_192_ext_sge; scalar_t__ cur_sge_offset; int byte_184_irrl_idx; int byte_176_msg_pktn; int byte_172_sq_psn; int byte_168_irrl_idx; int byte_160_sq_ci_pi; int byte_156_raq; int byte_152_raq; int byte_148_raq; int byte_144_raq; int byte_140_raq; int byte_132_trrl; scalar_t__ rx_va; scalar_t__ rx_rkey_pkt_info; scalar_t__ rx_msg_len; scalar_t__ rq_rnr_timer; int byte_108_rx_reqepsn; int byte_104_rq_sge; int byte_96_rx_reqmsn; int byte_92_srq_info; int byte_84_rq_ci_pi; int byte_76_srqn_op_en; int byte_80_rnr_rx_cqn; scalar_t__ rq_db_record_addr; int byte_68_rq_db; int byte_28_at_fl; int byte_60_qpst_tempid; int byte_56_dqpn_err; int byte_24_mtu_tc; int byte_20_smac_sgid_idx; int byte_16_buf_ba_pg_sz; int byte_4_sqpn_tst; } ;
struct TYPE_10__ {int dma; } ;
struct TYPE_9__ {int max_gs; } ;
struct TYPE_8__ {int qp_type; } ;
struct hns_roce_qp {int qpn; int access_flags; TYPE_3__ rdb; scalar_t__ rdb_en; TYPE_2__ rq; TYPE_1__ ibqp; } ;
struct TYPE_11__ {int flags; } ;
struct hns_roce_dev {TYPE_4__ caps; } ;
struct TYPE_14__ {int cqn; } ;
struct TYPE_13__ {int pdn; } ;
struct TYPE_12__ {int srqn; } ;


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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct hns_roce_qp*,struct hns_roce_v2_qp_context*,struct hns_roce_v2_qp_context*) ;
 TYPE_7__* FUNC_5 (int ) ;
 struct hns_roce_dev* FUNC_6 (int ) ;
 TYPE_6__* FUNC_7 (int ) ;
 struct hns_roce_qp* FUNC_8 (struct ib_qp*) ;
 int FUNC_9 (int ) ;
 TYPE_5__* FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct ib_qp *VAR_134,
        const struct ib_qp_attr *VAR_135,
        int VAR_136,
        struct hns_roce_v2_qp_context *VAR_137,
        struct hns_roce_v2_qp_context *VAR_138)
{
 struct hns_roce_dev *VAR_139 = FUNC_6(VAR_134->device);
 struct hns_roce_qp *VAR_140 = FUNC_8(VAR_134);







 FUNC_3(VAR_137->byte_4_sqpn_tst, VAR_105,
         VAR_106, FUNC_9(VAR_140->ibqp.qp_type));
 FUNC_3(VAR_138->byte_4_sqpn_tst, VAR_105,
         VAR_106, 0);

 FUNC_3(VAR_137->byte_4_sqpn_tst, VAR_103,
         VAR_104, VAR_140->qpn);
 FUNC_3(VAR_138->byte_4_sqpn_tst, VAR_103,
         VAR_104, 0);

 FUNC_3(VAR_137->byte_16_buf_ba_pg_sz, VAR_42,
         VAR_43, FUNC_7(VAR_134->pd)->pdn);
 FUNC_3(VAR_138->byte_16_buf_ba_pg_sz, VAR_42,
         VAR_43, 0);

 FUNC_3(VAR_137->byte_20_smac_sgid_idx, VAR_66,
         VAR_67, FUNC_1(VAR_140->rq.max_gs));
 FUNC_3(VAR_138->byte_20_smac_sgid_idx, VAR_66,
         VAR_67, 0);

 FUNC_4(VAR_140, VAR_137, VAR_138);


 FUNC_3(VAR_137->byte_24_mtu_tc, VAR_91,
         VAR_92, 0xfff);
 FUNC_3(VAR_138->byte_24_mtu_tc, VAR_91,
         VAR_92, 0);






 FUNC_2(VAR_138->byte_56_dqpn_err, VAR_110, 0);
 FUNC_2(VAR_138->byte_56_dqpn_err, VAR_109, 0);
 FUNC_2(VAR_138->byte_56_dqpn_err, VAR_108, 0);
 FUNC_2(VAR_138->byte_56_dqpn_err, VAR_107, 0);

 FUNC_3(VAR_138->byte_60_qpst_tempid, VAR_115,
         VAR_116, 0);

 FUNC_3(VAR_138->byte_60_qpst_tempid,
         VAR_112, VAR_113,
         0);
 FUNC_2(VAR_138->byte_60_qpst_tempid,
       VAR_114, 0);
 FUNC_2(VAR_138->byte_60_qpst_tempid,
       VAR_111, 0);
 FUNC_2(VAR_138->byte_28_at_fl, VAR_102, 0);
 FUNC_2(VAR_138->byte_28_at_fl, VAR_101, 0);

 if (VAR_140->rdb_en) {
  FUNC_2(VAR_137->byte_68_rq_db,
        VAR_119, 1);
  FUNC_2(VAR_138->byte_68_rq_db,
        VAR_119, 0);
 }

 FUNC_3(VAR_137->byte_68_rq_db,
         VAR_117,
         VAR_118,
         ((u32)VAR_140->rdb.dma) >> 1);
 FUNC_3(VAR_138->byte_68_rq_db,
         VAR_117,
         VAR_118, 0);
 VAR_137->rq_db_record_addr = FUNC_0(VAR_140->rdb.dma >> 32);
 VAR_138->rq_db_record_addr = 0;

 FUNC_2(VAR_137->byte_76_srqn_op_en, VAR_120,
      (VAR_139->caps.flags & VAR_0) ? 1 : 0);
 FUNC_2(VAR_138->byte_76_srqn_op_en, VAR_120, 0);

 FUNC_3(VAR_137->byte_80_rnr_rx_cqn, VAR_124,
         VAR_125, FUNC_5(VAR_134->recv_cq)->cqn);
 FUNC_3(VAR_138->byte_80_rnr_rx_cqn, VAR_124,
         VAR_125, 0);
 if (VAR_134->srq) {
  FUNC_3(VAR_137->byte_76_srqn_op_en,
          VAR_121, VAR_122,
          FUNC_10(VAR_134->srq)->srqn);
  FUNC_3(VAR_138->byte_76_srqn_op_en,
          VAR_121, VAR_122, 0);
  FUNC_2(VAR_137->byte_76_srqn_op_en,
        VAR_123, 1);
  FUNC_2(VAR_138->byte_76_srqn_op_en,
        VAR_123, 0);
 }

 FUNC_3(VAR_138->byte_84_rq_ci_pi,
         VAR_128,
         VAR_129, 0);
 FUNC_3(VAR_138->byte_84_rq_ci_pi,
         VAR_126,
         VAR_127, 0);

 FUNC_3(VAR_138->byte_92_srq_info, VAR_130,
         VAR_131, 0);

 FUNC_3(VAR_138->byte_96_rx_reqmsn, VAR_132,
         VAR_133, 0);

 FUNC_3(VAR_138->byte_104_rq_sge,
         VAR_1,
         VAR_2, 0);

 FUNC_2(VAR_138->byte_108_rx_reqepsn,
       VAR_5, 0);
 FUNC_3(VAR_138->byte_108_rx_reqepsn,
         VAR_3,
         VAR_4, 0);
 FUNC_2(VAR_138->byte_108_rx_reqepsn,
       VAR_6, 0);

 VAR_138->rq_rnr_timer = 0;
 VAR_138->rx_msg_len = 0;
 VAR_138->rx_rkey_pkt_info = 0;
 VAR_138->rx_va = 0;

 FUNC_3(VAR_138->byte_132_trrl, VAR_7,
         VAR_8, 0);
 FUNC_3(VAR_138->byte_132_trrl, VAR_9,
         VAR_10, 0);

 FUNC_2(VAR_138->byte_140_raq, VAR_15,
       0);
 FUNC_3(VAR_138->byte_140_raq, VAR_11,
         VAR_12, 0);
 FUNC_3(VAR_138->byte_140_raq, VAR_13,
         VAR_14, 0);

 FUNC_3(VAR_138->byte_144_raq,
         VAR_18,
         VAR_19, 0);
 FUNC_3(VAR_138->byte_144_raq, VAR_16,
         VAR_17, 0);
 FUNC_2(VAR_138->byte_144_raq, VAR_20, 0);

 FUNC_3(VAR_138->byte_148_raq, VAR_23,
         VAR_24, 0);
 FUNC_3(VAR_138->byte_148_raq, VAR_21,
         VAR_22, 0);

 FUNC_3(VAR_138->byte_152_raq, VAR_25,
         VAR_26, 0);
 FUNC_3(VAR_138->byte_152_raq,
         VAR_27,
         VAR_28, 0);

 FUNC_3(VAR_138->byte_156_raq, VAR_29,
         VAR_30, 0);

 FUNC_3(VAR_138->byte_160_sq_ci_pi,
         VAR_33,
         VAR_34, 0);
 FUNC_3(VAR_138->byte_160_sq_ci_pi,
         VAR_31,
         VAR_32, 0);

 FUNC_2(VAR_138->byte_168_irrl_idx,
       VAR_38, 0);
 FUNC_2(VAR_138->byte_168_irrl_idx,
       VAR_39, 0);
 FUNC_2(VAR_138->byte_168_irrl_idx,
       VAR_41, 0);
 FUNC_2(VAR_138->byte_168_irrl_idx,
       VAR_37, 0);
 FUNC_2(VAR_138->byte_168_irrl_idx,
       VAR_40, 0);
 FUNC_3(VAR_138->byte_168_irrl_idx,
         VAR_35,
         VAR_36, 0);

 FUNC_3(VAR_137->byte_172_sq_psn, VAR_44,
         VAR_45, 4);
 FUNC_3(VAR_138->byte_172_sq_psn,
         VAR_44,
         VAR_45, 0);

 FUNC_2(VAR_138->byte_172_sq_psn, VAR_47,
       0);

 FUNC_2(VAR_137->byte_172_sq_psn, VAR_46, 1);
 FUNC_2(VAR_138->byte_172_sq_psn, VAR_46, 0);

 FUNC_3(VAR_138->byte_176_msg_pktn,
         VAR_50,
         VAR_51, 0);
 FUNC_3(VAR_138->byte_176_msg_pktn,
         VAR_48,
         VAR_49, 0);

 FUNC_3(VAR_138->byte_184_irrl_idx,
         VAR_52,
         VAR_53, 0);

 VAR_138->cur_sge_offset = 0;

 FUNC_3(VAR_138->byte_192_ext_sge,
         VAR_54,
         VAR_55, 0);
 FUNC_3(VAR_138->byte_192_ext_sge,
         VAR_56,
         VAR_57, 0);

 FUNC_3(VAR_138->byte_196_sq_psn, VAR_58,
         VAR_59, 0);

 FUNC_3(VAR_138->byte_200_sq_max, VAR_62,
         VAR_63, 0);
 FUNC_3(VAR_138->byte_200_sq_max,
         VAR_60,
         VAR_61, 0);

 FUNC_2(VAR_138->byte_208_irrl, VAR_64, 0);
 FUNC_2(VAR_138->byte_208_irrl, VAR_65, 0);

 FUNC_3(VAR_138->byte_212_lsn, VAR_68,
         VAR_69, 0);

 VAR_138->sq_timer = 0;

 FUNC_3(VAR_138->byte_220_retry_psn_msn,
         VAR_70,
         VAR_71, 0);
 FUNC_3(VAR_138->byte_232_irrl_sge,
         VAR_74,
         VAR_75, 0);

 FUNC_2(VAR_138->byte_232_irrl_sge, VAR_76,
       0);
 FUNC_2(VAR_138->byte_232_irrl_sge,
       VAR_72, 0);
 FUNC_2(VAR_138->byte_232_irrl_sge, VAR_73,
       0);

 VAR_138->irrl_cur_sge_offset = 0;

 FUNC_3(VAR_138->byte_240_irrl_tail,
         VAR_79,
         VAR_80, 0);
 FUNC_3(VAR_138->byte_240_irrl_tail,
         VAR_77,
         VAR_78, 0);
 FUNC_3(VAR_138->byte_240_irrl_tail,
         VAR_81,
         VAR_82, 0);

 FUNC_3(VAR_138->byte_248_ack_psn, VAR_87,
         VAR_88, 0);
 FUNC_2(VAR_138->byte_248_ack_psn, VAR_85,
       0);
 FUNC_3(VAR_138->byte_248_ack_psn,
         VAR_83,
         VAR_84, 0);
 FUNC_2(VAR_138->byte_248_ack_psn, VAR_89,
       0);
 FUNC_2(VAR_138->byte_248_ack_psn,
       VAR_90, 0);
 FUNC_2(VAR_138->byte_248_ack_psn, VAR_86,
       0);

 VAR_140->access_flags = VAR_135->qp_access_flags;
 FUNC_3(VAR_137->byte_252_err_txcqn, VAR_95,
         VAR_96, FUNC_5(VAR_134->send_cq)->cqn);
 FUNC_3(VAR_138->byte_252_err_txcqn, VAR_95,
         VAR_96, 0);

 FUNC_3(VAR_138->byte_252_err_txcqn, VAR_93,
         VAR_94, 0);

 FUNC_3(VAR_138->byte_256_sqflush_rqcqe,
         VAR_97,
         VAR_98, 0);
 FUNC_3(VAR_138->byte_256_sqflush_rqcqe,
         VAR_99,
         VAR_100, 0);
}
