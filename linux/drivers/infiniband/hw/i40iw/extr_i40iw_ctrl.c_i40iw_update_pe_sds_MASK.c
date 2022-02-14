
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_update_sds_info {int dummy; } ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; } ;
struct i40iw_sc_cqp {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int FUNC_0 (struct i40iw_sc_cqp*,struct i40iw_update_sds_info*,int ) ;
 int FUNC_1 (struct i40iw_sc_cqp*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_2(struct i40iw_sc_dev *VAR_0,
        struct i40iw_update_sds_info *VAR_1,
        u64 VAR_2)
{
 struct i40iw_sc_cqp *VAR_3 = VAR_0->cqp;
 enum i40iw_status_code VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);
 if (!VAR_4)
  FUNC_1(VAR_3);

 return VAR_4;
}
