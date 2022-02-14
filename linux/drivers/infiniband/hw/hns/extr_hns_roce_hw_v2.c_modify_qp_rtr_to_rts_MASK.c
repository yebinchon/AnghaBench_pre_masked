
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ib_qp_attr {int dummy; } ;
struct ib_qp {scalar_t__ qp_type; int device; } ;
struct hns_roce_v2_qp_context {int byte_196_sq_psn; int byte_212_lsn; int byte_248_ack_psn; int byte_220_retry_psn_msn; int byte_240_irrl_tail; int byte_232_irrl_sge; void* rx_sq_cur_blk_addr; int byte_184_irrl_idx; void* sq_cur_sge_blk_addr; int byte_168_irrl_idx; void* sq_cur_blk_addr; } ;
struct TYPE_6__ {scalar_t__ max_gs; } ;
struct TYPE_5__ {int offset; } ;
struct hns_roce_qp {int qpn; TYPE_3__ sq; TYPE_2__ sge; int mtr; } ;
struct TYPE_4__ {int mtt_buf_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct hns_roce_dev*,int *,int,int*,int,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 struct hns_roce_dev* FUNC_5 (int ) ;
 struct hns_roce_qp* FUNC_6 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_7(struct ib_qp *VAR_33,
    const struct ib_qp_attr *VAR_34, int VAR_35,
    struct hns_roce_v2_qp_context *VAR_36,
    struct hns_roce_v2_qp_context *VAR_37)
{
 struct hns_roce_dev *VAR_38 = FUNC_5(VAR_33->device);
 struct hns_roce_qp *VAR_39 = FUNC_6(VAR_33);
 struct device *VAR_40 = VAR_38->dev;
 u64 VAR_41 = 0;
 u64 VAR_42 = 0;
 u32 VAR_43;
 int VAR_44;


 VAR_44 = FUNC_2(VAR_38, &VAR_39->mtr, 0, &VAR_42, 1, ((void*)0));
 if (VAR_44 < 1) {
  FUNC_1(VAR_40, "qp(0x%lx) buf pa find failed\n", VAR_39->qpn);
  return -VAR_0;
 }

 if (VAR_39->sge.offset) {
  VAR_43 = 1 << (VAR_38->caps.mtt_buf_pg_sz + VAR_6);
  VAR_44 = FUNC_2(VAR_38, &VAR_39->mtr,
       VAR_39->sge.offset / VAR_43,
       &VAR_41, 1, ((void*)0));
  if (VAR_44 < 1) {
   FUNC_1(VAR_40, "qp(0x%lx) sge pa find failed\n",
    VAR_39->qpn);
   return -VAR_0;
  }
 }


 if ((VAR_35 & VAR_3) ||
     (VAR_35 & VAR_4)) {
  FUNC_1(VAR_40, "RTR2RTS attr_mask (0x%x)error\n", VAR_35);
  return -VAR_0;
 }







 VAR_36->sq_cur_blk_addr = FUNC_0(VAR_42 >> VAR_5);
 FUNC_4(VAR_36->byte_168_irrl_idx,
         VAR_7,
         VAR_8,
         VAR_42 >> (32 + VAR_5));
 VAR_37->sq_cur_blk_addr = 0;
 FUNC_4(VAR_37->byte_168_irrl_idx,
         VAR_7,
         VAR_8, 0);

 VAR_36->sq_cur_sge_blk_addr = ((VAR_33->qp_type == VAR_2) ||
         VAR_39->sq.max_gs > VAR_1) ?
         FUNC_0(VAR_41 >>
         VAR_5) : 0;
 FUNC_4(VAR_36->byte_184_irrl_idx,
         VAR_9,
         VAR_10,
         ((VAR_33->qp_type == VAR_2) || VAR_39->sq.max_gs >
         VAR_1) ?
         (VAR_41 >>
         (32 + VAR_5)) : 0);
 VAR_37->sq_cur_sge_blk_addr = 0;
 FUNC_4(VAR_37->byte_184_irrl_idx,
         VAR_9,
         VAR_10, 0);

 VAR_36->rx_sq_cur_blk_addr =
  FUNC_0(VAR_42 >> VAR_5);
 FUNC_4(VAR_36->byte_232_irrl_sge,
         VAR_21,
         VAR_22,
         VAR_42 >> (32 + VAR_5));
 VAR_37->rx_sq_cur_blk_addr = 0;
 FUNC_4(VAR_37->byte_232_irrl_sge,
         VAR_21,
         VAR_22, 0);






 FUNC_4(VAR_37->byte_232_irrl_sge,
         VAR_19,
         VAR_20, 0);

 FUNC_4(VAR_37->byte_240_irrl_tail,
         VAR_25,
         VAR_26, 0);

 FUNC_4(VAR_37->byte_248_ack_psn,
         VAR_27,
         VAR_28, 0);
 FUNC_3(VAR_37->byte_248_ack_psn,
       VAR_31, 0);
 FUNC_4(VAR_37->byte_248_ack_psn,
         VAR_29,
         VAR_30, 0);

 FUNC_4(VAR_37->byte_240_irrl_tail,
         VAR_23,
         VAR_24, 0);

 FUNC_4(VAR_37->byte_220_retry_psn_msn,
         VAR_17,
         VAR_18, 0);

 FUNC_3(VAR_37->byte_248_ack_psn,
       VAR_32, 0);

 FUNC_4(VAR_37->byte_212_lsn, VAR_13,
         VAR_14, 0);

 FUNC_4(VAR_36->byte_212_lsn, VAR_15,
         VAR_16, 0x100);
 FUNC_4(VAR_37->byte_212_lsn, VAR_15,
         VAR_16, 0);

 FUNC_4(VAR_37->byte_196_sq_psn, VAR_11,
         VAR_12, 0);

 return 0;
}
