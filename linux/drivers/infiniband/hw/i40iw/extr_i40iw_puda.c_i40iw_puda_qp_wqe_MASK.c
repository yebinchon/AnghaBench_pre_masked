
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int qp_id; } ;
struct i40iw_sc_qp {TYPE_1__ qp_uk; int shadow_area_pa; int hw_host_ctx_pa; } ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; TYPE_2__* cqp_ops; } ;
struct i40iw_sc_cqp {int polarity; int dev; } ;
struct i40iw_ccq_cqe_info {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {int (* poll_for_cqp_op_done ) (struct i40iw_sc_cqp*,int,struct i40iw_ccq_cqe_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int ) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int ) ;
 int FUNC_6 (struct i40iw_sc_cqp*,int,struct i40iw_ccq_cqe_info*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(struct i40iw_sc_dev *VAR_9, struct i40iw_sc_qp *VAR_10)
{
 struct i40iw_sc_cqp *VAR_11;
 u64 *VAR_12;
 u64 VAR_13;
 struct i40iw_ccq_cqe_info VAR_14;
 enum i40iw_status_code VAR_15 = 0;

 VAR_11 = VAR_9->cqp;
 VAR_12 = FUNC_3(VAR_11, 0);
 if (!VAR_12)
  return VAR_7;

 FUNC_5(VAR_12, 16, VAR_10->hw_host_ctx_pa);
 FUNC_5(VAR_12, 40, VAR_10->shadow_area_pa);
 VAR_13 = VAR_10->qp_uk.qp_id |
   FUNC_0(VAR_5, VAR_0) |
   FUNC_0(VAR_8, VAR_3) |
   FUNC_0(1, VAR_1) |
   FUNC_0(2, VAR_2) |
   FUNC_0(VAR_11->polarity, VAR_4);

 FUNC_2(VAR_12, VAR_13);

 FUNC_1(VAR_11->dev, VAR_6, "PUDA CQE", VAR_12, 32);
 FUNC_4(VAR_11);
 VAR_15 = VAR_9->cqp_ops->poll_for_cqp_op_done(VAR_9->cqp,
          VAR_5,
          &VAR_14);
 return VAR_15;
}
