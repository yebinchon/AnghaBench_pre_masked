
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_dev {TYPE_1__* hmc_ops; } ;
struct i40iw_hmc_create_obj_info {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int (* create_hmc_object ) (struct i40iw_sc_dev*,struct i40iw_hmc_create_obj_info*) ;} ;


 int FUNC_0 (struct i40iw_sc_dev*,struct i40iw_hmc_create_obj_info*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_1(struct i40iw_sc_dev *VAR_0,
       struct i40iw_hmc_create_obj_info *VAR_1)
{
 return VAR_0->hmc_ops->create_hmc_object(VAR_0, VAR_1);
}
