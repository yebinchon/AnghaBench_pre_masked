
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; TYPE_2__* cqp_ops; } ;
struct i40iw_sc_cqp {int polarity; } ;
struct TYPE_3__ {int cq_size; int cq_id; } ;
struct i40iw_sc_cq {int shadow_read_threshold; int cq_pa; int shadow_area_pa; TYPE_1__ cq_uk; } ;
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
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct i40iw_sc_cq*,int) ;
 int FUNC_2 (struct i40iw_sc_dev*,int ,char*,int*,int) ;
 int FUNC_3 (int*,int) ;
 int* FUNC_4 (struct i40iw_sc_cqp*,int ) ;
 int FUNC_5 (struct i40iw_sc_cqp*) ;
 int FUNC_6 (int*,int,int) ;
 int FUNC_7 (struct i40iw_sc_cqp*,int,struct i40iw_ccq_cqe_info*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_8(struct i40iw_sc_dev *VAR_10, struct i40iw_sc_cq *VAR_11)
{
 u64 *VAR_12;
 struct i40iw_sc_cqp *VAR_13;
 u64 VAR_14;
 struct i40iw_ccq_cqe_info VAR_15;
 enum i40iw_status_code VAR_16 = 0;

 VAR_13 = VAR_10->cqp;
 VAR_12 = FUNC_4(VAR_13, 0);
 if (!VAR_12)
  return VAR_9;

 FUNC_6(VAR_12, 0, VAR_11->cq_uk.cq_size);
 FUNC_6(VAR_12, 8, FUNC_1(VAR_11, 1));
 FUNC_6(VAR_12, 16,
        FUNC_0(VAR_11->shadow_read_threshold,
       VAR_3));
 FUNC_6(VAR_12, 32, VAR_11->cq_pa);

 FUNC_6(VAR_12, 40, VAR_11->shadow_area_pa);

 VAR_14 = VAR_11->cq_uk.cq_id |
     FUNC_0(VAR_6, VAR_4) |
     FUNC_0(1, VAR_1) |
     FUNC_0(1, VAR_2) |
     FUNC_0(1, VAR_0) |
     FUNC_0(VAR_13->polarity, VAR_5);
 FUNC_3(VAR_12, VAR_14);

 FUNC_2(VAR_10, VAR_8, "PUDA CQE",
   VAR_12, VAR_7 * 8);

 FUNC_5(VAR_10->cqp);
 VAR_16 = VAR_10->cqp_ops->poll_for_cqp_op_done(VAR_10->cqp,
       VAR_6,
       &VAR_15);
 return VAR_16;
}
