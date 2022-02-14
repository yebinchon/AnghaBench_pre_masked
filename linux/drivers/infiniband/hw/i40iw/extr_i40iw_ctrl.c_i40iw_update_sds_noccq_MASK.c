
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40iw_update_sds_info {int dummy; } ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; } ;
struct i40iw_sc_cqp {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40iw_sc_cqp*,struct i40iw_update_sds_info*,int ) ;
 int FUNC_1 (struct i40iw_sc_cqp*,scalar_t__,int ) ;
 int FUNC_2 (struct i40iw_sc_cqp*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct i40iw_sc_cqp*) ;

enum i40iw_status_code FUNC_4(struct i40iw_sc_dev *VAR_2,
           struct i40iw_update_sds_info *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 struct i40iw_sc_cqp *VAR_7 = VAR_2->cqp;
 enum i40iw_status_code VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_3, 0);
 if (VAR_8)
  return VAR_8;
 FUNC_2(VAR_7, &VAR_5, &VAR_6, &VAR_4);
 if (VAR_4)
  return VAR_1;

 FUNC_3(VAR_7);
 VAR_8 = FUNC_1(VAR_7, VAR_6, VAR_0);

 return VAR_8;
}
