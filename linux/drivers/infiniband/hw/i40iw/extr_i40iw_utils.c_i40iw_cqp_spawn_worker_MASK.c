
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct virtchnl_work {int work; int work_info; } ;
struct i40iw_virtchnl_work_info {int dummy; } ;
struct i40iw_sc_dev {scalar_t__ back_dev; } ;
struct i40iw_device {int virtchnl_wq; struct virtchnl_work* virtchnl_w; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct i40iw_virtchnl_work_info*,int) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct i40iw_sc_dev *VAR_1,
       struct i40iw_virtchnl_work_info *VAR_2,
       u32 VAR_3)
{
 struct virtchnl_work *VAR_4;
 struct i40iw_device *VAR_5 = (struct i40iw_device *)VAR_1->back_dev;

 VAR_4 = &VAR_5->virtchnl_w[VAR_3];
 FUNC_1(&VAR_4->work_info, VAR_2, sizeof(*VAR_2));
 FUNC_0(&VAR_4->work, VAR_0);
 FUNC_2(VAR_5->virtchnl_wq, &VAR_4->work);
}
