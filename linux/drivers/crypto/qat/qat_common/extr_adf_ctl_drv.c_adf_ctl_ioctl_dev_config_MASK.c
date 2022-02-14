
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct adf_user_cfg_ctl_data {int device_id; } ;
struct adf_accel_dev {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct adf_accel_dev*,struct adf_user_cfg_ctl_data*) ;
 int FUNC_1 (struct adf_user_cfg_ctl_data**,unsigned long) ;
 scalar_t__ FUNC_2 (struct adf_accel_dev*) ;
 struct adf_accel_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct adf_user_cfg_ctl_data*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 int VAR_5;
 struct adf_user_cfg_ctl_data *VAR_6;
 struct adf_accel_dev *VAR_7;

 VAR_5 = FUNC_1(&VAR_6, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_7 = FUNC_3(VAR_6->device_id);
 if (!VAR_7) {
  VAR_5 = -VAR_1;
  goto out;
 }

 if (FUNC_2(VAR_7)) {
  VAR_5 = -VAR_1;
  goto out;
 }

 if (FUNC_0(VAR_7, VAR_6)) {
  VAR_5 = -VAR_1;
  goto out;
 }
 FUNC_5(VAR_0, &VAR_7->status);
out:
 FUNC_4(VAR_6);
 return VAR_5;
}
