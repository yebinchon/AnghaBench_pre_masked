
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_attr {int timeout; int retry_cnt; int rnr_retry; int sq_psn; int min_rnr_timer; int rq_psn; int qkey; scalar_t__ max_rd_atomic; scalar_t__ max_dest_rd_atomic; } ;
struct ib_qp {int device; } ;
struct hns_roce_v2_qp_context {scalar_t__ qkey_xrcd; int byte_152_raq; int byte_108_rx_reqepsn; int byte_80_rnr_rx_cqn; int byte_208_irrl; int byte_140_raq; int byte_244_rnr_rxack; int byte_224_retry_msg; int byte_220_retry_psn_msn; int byte_196_sq_psn; int byte_172_sq_psn; int byte_212_lsn; int byte_28_at_fl; } ;
struct hns_roce_qp {int qkey; } ;
struct hns_roce_dev {int dev; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ib_qp*,struct ib_qp_attr const*,int,struct hns_roce_v2_qp_context*,struct hns_roce_v2_qp_context*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (struct hns_roce_qp*,struct hns_roce_v2_qp_context*,struct hns_roce_v2_qp_context*,struct ib_qp_attr const*,int) ;
 struct hns_roce_dev* FUNC_6 (int ) ;
 struct hns_roce_qp* FUNC_7 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_8(struct ib_qp *VAR_43,
          const struct ib_qp_attr *VAR_44,
          int VAR_45,
          struct hns_roce_v2_qp_context *VAR_46,
          struct hns_roce_v2_qp_context *VAR_47)
{
 struct hns_roce_dev *VAR_48 = FUNC_6(VAR_43->device);
 struct hns_roce_qp *VAR_49 = FUNC_7(VAR_43);
 int VAR_50 = 0;

 if (VAR_45 & VAR_1) {
  VAR_50 = FUNC_3(VAR_43, VAR_44, VAR_45, VAR_46,
        VAR_47);
  if (VAR_50)
   return VAR_50;
 }

 if (VAR_45 & VAR_10) {
  if (VAR_44->timeout < 31) {
   FUNC_4(VAR_46->byte_28_at_fl,
           VAR_39, VAR_40,
           VAR_44->timeout);
   FUNC_4(VAR_47->byte_28_at_fl,
           VAR_39, VAR_40,
           0);
  } else {
   FUNC_1(VAR_48->dev,
     "Local ACK timeout shall be 0 to 30.\n");
  }
 }

 if (VAR_45 & VAR_6) {
  FUNC_4(VAR_46->byte_212_lsn,
          VAR_25,
          VAR_26,
          VAR_44->retry_cnt);
  FUNC_4(VAR_47->byte_212_lsn,
          VAR_25,
          VAR_26, 0);

  FUNC_4(VAR_46->byte_212_lsn,
          VAR_23,
          VAR_24,
          VAR_44->retry_cnt);
  FUNC_4(VAR_47->byte_212_lsn,
          VAR_23,
          VAR_24, 0);
 }

 if (VAR_45 & VAR_7) {
  FUNC_4(VAR_46->byte_244_rnr_rxack,
          VAR_35,
          VAR_36, VAR_44->rnr_retry);
  FUNC_4(VAR_47->byte_244_rnr_rxack,
          VAR_35,
          VAR_36, 0);

  FUNC_4(VAR_46->byte_244_rnr_rxack,
          VAR_33,
          VAR_34, VAR_44->rnr_retry);
  FUNC_4(VAR_47->byte_244_rnr_rxack,
          VAR_33,
          VAR_34, 0);
 }


 if (VAR_45 & VAR_9) {
  FUNC_4(VAR_46->byte_172_sq_psn,
          VAR_17,
          VAR_18, VAR_44->sq_psn);
  FUNC_4(VAR_47->byte_172_sq_psn,
          VAR_17,
          VAR_18, 0);

  FUNC_4(VAR_46->byte_196_sq_psn,
          VAR_19,
          VAR_20, VAR_44->sq_psn);
  FUNC_4(VAR_47->byte_196_sq_psn,
          VAR_19,
          VAR_20, 0);

  FUNC_4(VAR_46->byte_220_retry_psn_msn,
          VAR_27,
          VAR_28, VAR_44->sq_psn);
  FUNC_4(VAR_47->byte_220_retry_psn_msn,
          VAR_27,
          VAR_28, 0);

  FUNC_4(VAR_46->byte_224_retry_msg,
          VAR_31,
          VAR_32,
          VAR_44->sq_psn >> VAR_28);
  FUNC_4(VAR_47->byte_224_retry_msg,
          VAR_31,
          VAR_32, 0);

  FUNC_4(VAR_46->byte_224_retry_msg,
          VAR_29,
          VAR_30,
          VAR_44->sq_psn);
  FUNC_4(VAR_47->byte_224_retry_msg,
          VAR_29,
          VAR_30, 0);

  FUNC_4(VAR_46->byte_244_rnr_rxack,
          VAR_37,
          VAR_38, VAR_44->sq_psn);
  FUNC_4(VAR_47->byte_244_rnr_rxack,
          VAR_37,
          VAR_38, 0);
 }

 if ((VAR_45 & VAR_2) &&
      VAR_44->max_dest_rd_atomic) {
  FUNC_4(VAR_46->byte_140_raq, VAR_13,
          VAR_14,
          FUNC_2(VAR_44->max_dest_rd_atomic - 1));
  FUNC_4(VAR_47->byte_140_raq, VAR_13,
          VAR_14, 0);
 }

 if ((VAR_45 & VAR_3) && VAR_44->max_rd_atomic) {
  FUNC_4(VAR_46->byte_208_irrl, VAR_21,
          VAR_22,
          FUNC_2(VAR_44->max_rd_atomic - 1));
  FUNC_4(VAR_47->byte_208_irrl,
          VAR_21,
          VAR_22, 0);
 }

 if (VAR_45 & (VAR_0 | VAR_2))
  FUNC_5(VAR_49, VAR_46, VAR_47, VAR_44, VAR_45);

 if (VAR_45 & VAR_4) {
  FUNC_4(VAR_46->byte_80_rnr_rx_cqn,
          VAR_41,
          VAR_42,
          VAR_44->min_rnr_timer);
  FUNC_4(VAR_47->byte_80_rnr_rx_cqn,
          VAR_41,
          VAR_42, 0);
 }


 if (VAR_45 & VAR_8) {
  FUNC_4(VAR_46->byte_108_rx_reqepsn,
          VAR_11,
          VAR_12, VAR_44->rq_psn);
  FUNC_4(VAR_47->byte_108_rx_reqepsn,
          VAR_11,
          VAR_12, 0);

  FUNC_4(VAR_46->byte_152_raq, VAR_15,
          VAR_16, VAR_44->rq_psn - 1);
  FUNC_4(VAR_47->byte_152_raq,
          VAR_15,
          VAR_16, 0);
 }

 if (VAR_45 & VAR_5) {
  VAR_46->qkey_xrcd = FUNC_0(VAR_44->qkey);
  VAR_47->qkey_xrcd = 0;
  VAR_49->qkey = VAR_44->qkey;
 }

 return VAR_50;
}
