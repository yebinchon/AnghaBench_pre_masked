
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int qp_id; } ;
struct i40iw_sc_qp {TYPE_1__ qp_uk; } ;
struct i40iw_sc_cqp {int dev; int polarity; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;

enum i40iw_status_code FUNC_5(struct i40iw_sc_cqp *VAR_7,
        struct i40iw_sc_qp *VAR_8,
        u64 VAR_9)
{
 u64 VAR_10;
 u64 *VAR_11;

 VAR_11 = FUNC_3(VAR_7, VAR_9);
 if (!VAR_11)
  return VAR_6;
 VAR_10 = FUNC_0(VAR_8->qp_uk.qp_id, VAR_1) |
   FUNC_0(VAR_3, VAR_0) |
   FUNC_0(VAR_7->polarity, VAR_2);

 FUNC_2(VAR_11, VAR_10);

 FUNC_1(VAR_7->dev, VAR_5, "SUSPEND_QP WQE",
   VAR_11, VAR_4 * 8);

 FUNC_4(VAR_7);
 return 0;
}
