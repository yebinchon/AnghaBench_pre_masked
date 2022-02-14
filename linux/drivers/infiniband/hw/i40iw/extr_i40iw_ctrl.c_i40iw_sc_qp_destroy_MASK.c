
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int qp_id; } ;
struct i40iw_sc_qp {int qp_type; TYPE_3__ qp_uk; int shadow_area_pa; int hw_host_ctx_pa; TYPE_2__* pd; } ;
struct i40iw_sc_cqp {int polarity; int dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct i40iw_sc_cqp* cqp; } ;


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
 int FUNC_3 (struct i40iw_sc_qp*) ;
 int* FUNC_4 (struct i40iw_sc_cqp*,int) ;
 int FUNC_5 (struct i40iw_sc_cqp*) ;
 int FUNC_6 (int*,int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(
     struct i40iw_sc_qp *VAR_9,
     u64 VAR_10,
     bool VAR_11,
     bool VAR_12,
     bool VAR_13)
{
 u64 *VAR_14;
 struct i40iw_sc_cqp *VAR_15;
 u64 VAR_16;

 FUNC_3(VAR_9);
 VAR_15 = VAR_9->pd->dev->cqp;
 VAR_14 = FUNC_4(VAR_15, VAR_10);
 if (!VAR_14)
  return VAR_8;
 FUNC_6(VAR_14, 16, VAR_9->hw_host_ctx_pa);
 FUNC_6(VAR_14, 40, VAR_9->shadow_area_pa);

 VAR_16 = VAR_9->qp_uk.qp_id |
   FUNC_0(VAR_5, VAR_0) |
   FUNC_0(VAR_9->qp_type, VAR_2) |
   FUNC_0(VAR_12, VAR_1) |
   FUNC_0(VAR_11, VAR_3) |
   FUNC_0(VAR_15->polarity, VAR_4);

 FUNC_2(VAR_14, VAR_16);
 FUNC_1(VAR_15->dev, VAR_7, "QP_DESTROY WQE",
   VAR_14, VAR_6 * 8);

 if (VAR_13)
  FUNC_5(VAR_15);
 return 0;
}
