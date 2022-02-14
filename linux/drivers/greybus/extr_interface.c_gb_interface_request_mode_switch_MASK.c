
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int mode_switch; int mutex; int dev; int mode_switch_work; int mode_switch_completion; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

int FUNC_6(struct gb_interface *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_2->mutex);
 if (VAR_2->mode_switch) {
  VAR_3 = -VAR_0;
  goto out_unlock;
 }

 VAR_2->mode_switch = 1;
 FUNC_5(&VAR_2->mode_switch_completion);





 FUNC_0(&VAR_2->dev);

 if (!FUNC_4(VAR_1, &VAR_2->mode_switch_work)) {
  FUNC_3(&VAR_2->dev);
  VAR_3 = -VAR_0;
  goto out_unlock;
 }

out_unlock:
 FUNC_2(&VAR_2->mutex);

 return VAR_3;
}
