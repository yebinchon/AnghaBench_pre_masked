
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int qp_id; } ;
struct i40iw_sc_qp {TYPE_3__ qp_uk; TYPE_2__* pd; } ;
struct i40iw_sc_cqp {int polarity; int dev; } ;
struct i40iw_gen_ae_info {int ae_code; int ae_source; } ;
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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
    struct i40iw_sc_qp *VAR_8,
    struct i40iw_gen_ae_info *VAR_9,
    u64 VAR_10,
    bool VAR_11)
{
 u64 VAR_12;
 u64 *VAR_13;
 struct i40iw_sc_cqp *VAR_14;
 u64 VAR_15;

 VAR_14 = VAR_8->pd->dev->cqp;
 VAR_13 = FUNC_3(VAR_14, VAR_10);
 if (!VAR_13)
  return VAR_7;

 VAR_12 = VAR_9->ae_code |
        FUNC_0(VAR_9->ae_source, VAR_0);

 FUNC_5(VAR_13, 8, VAR_12);

 VAR_15 = VAR_8->qp_uk.qp_id |
   FUNC_0(VAR_4, VAR_2) |
   FUNC_0(1, VAR_1) |
   FUNC_0(VAR_14->polarity, VAR_3);

 FUNC_2(VAR_13, VAR_15);

 FUNC_1(VAR_14->dev, VAR_6, "GEN_AE WQE",
   VAR_13, VAR_5 * 8);

 if (VAR_11)
  FUNC_4(VAR_14);
 return 0;
}
