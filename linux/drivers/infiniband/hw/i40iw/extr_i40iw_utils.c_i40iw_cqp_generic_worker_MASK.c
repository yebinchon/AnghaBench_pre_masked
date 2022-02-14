
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct i40iw_virtchnl_work_info {scalar_t__ worker_vf_dev; int (* callback_fcn ) (scalar_t__) ;} ;
struct virtchnl_work {struct i40iw_virtchnl_work_info work_info; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct work_struct *VAR_0)
{
 struct i40iw_virtchnl_work_info *VAR_1 =
     &((struct virtchnl_work *)VAR_0)->work_info;

 if (VAR_1->worker_vf_dev)
  VAR_1->callback_fcn(VAR_1->worker_vf_dev);
}
