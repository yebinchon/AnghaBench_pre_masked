
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_entry_t ;
struct i40iw_sc_dev {int vchnl_up; int vf_reqs; struct i40iw_device* back_dev; } ;
struct i40iw_device {int vchnl_msgs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int *) ;

bool FUNC_6(struct i40iw_sc_dev *VAR_1)
{
 struct i40iw_device *VAR_2;
 wait_queue_entry_t VAR_3;

 VAR_2 = VAR_1->back_dev;

 if (!FUNC_5(&VAR_1->vf_reqs) &&
     (FUNC_1(&VAR_2->vchnl_msgs) == 0))
  return 1;

 FUNC_2(&VAR_3);
 FUNC_0(&VAR_1->vf_reqs, &VAR_3);

 if (!FUNC_4(VAR_1->vf_reqs,
    (FUNC_1(&VAR_2->vchnl_msgs) == 0),
    VAR_0))
  VAR_1->vchnl_up = 0;

 FUNC_3(&VAR_1->vf_reqs, &VAR_3);

 return VAR_1->vchnl_up;
}
