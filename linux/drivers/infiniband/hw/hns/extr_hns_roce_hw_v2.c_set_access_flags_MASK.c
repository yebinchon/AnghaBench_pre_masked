
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ib_qp_attr {int qp_access_flags; int max_dest_rd_atomic; } ;
struct hns_roce_v2_qp_context {int byte_76_srqn_op_en; } ;
struct hns_roce_qp {int atomic_rd_en; int resp_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_qp *VAR_8,
        struct hns_roce_v2_qp_context *VAR_9,
        struct hns_roce_v2_qp_context *VAR_10,
        const struct ib_qp_attr *VAR_11, int VAR_12)
{
 u8 VAR_13;
 u32 VAR_14;

 VAR_13 = (VAR_12 & VAR_4) ?
    VAR_11->max_dest_rd_atomic : VAR_8->resp_depth;

 VAR_14 = (VAR_12 & VAR_3) ?
         VAR_11->qp_access_flags : VAR_8->atomic_rd_en;

 if (!VAR_13)
  VAR_14 &= VAR_2;

 FUNC_0(VAR_9->byte_76_srqn_op_en, VAR_6,
       !!(VAR_14 & VAR_1));
 FUNC_0(VAR_10->byte_76_srqn_op_en, VAR_6, 0);

 FUNC_0(VAR_9->byte_76_srqn_op_en, VAR_7,
       !!(VAR_14 & VAR_2));
 FUNC_0(VAR_10->byte_76_srqn_op_en, VAR_7, 0);

 FUNC_0(VAR_9->byte_76_srqn_op_en, VAR_5,
       !!(VAR_14 & VAR_0));
 FUNC_0(VAR_10->byte_76_srqn_op_en, VAR_5, 0);
}
