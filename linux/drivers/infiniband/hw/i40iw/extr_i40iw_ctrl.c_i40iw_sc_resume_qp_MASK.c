
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int qp_id; } ;
struct i40iw_sc_qp {TYPE_1__ qp_uk; int qs_handle; } ;
struct i40iw_sc_cqp {int dev; int polarity; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

enum i40iw_status_code FUNC_6(struct i40iw_sc_cqp *VAR_8,
       struct i40iw_sc_qp *VAR_9,
       u64 VAR_10)
{
 u64 VAR_11;
 u64 *VAR_12;

 VAR_12 = FUNC_3(VAR_8, VAR_10);
 if (!VAR_12)
  return VAR_7;
 FUNC_5(VAR_12,
        16,
   FUNC_0(VAR_9->qs_handle, VAR_2));

 VAR_11 = FUNC_0(VAR_9->qp_uk.qp_id, VAR_1) |
   FUNC_0(VAR_4, VAR_0) |
   FUNC_0(VAR_8->polarity, VAR_3);

 FUNC_2(VAR_12, VAR_11);

 FUNC_1(VAR_8->dev, VAR_6, "RESUME_QP WQE",
   VAR_12, VAR_5 * 8);

 FUNC_4(VAR_8);
 return 0;
}
