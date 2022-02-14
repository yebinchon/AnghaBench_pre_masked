
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct adf_user_cfg_ctl_data {scalar_t__ device_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adf_user_cfg_ctl_data**,unsigned long) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct adf_user_cfg_ctl_data*) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2, unsigned int VAR_3,
      unsigned long VAR_4)
{
 int VAR_5;
 struct adf_user_cfg_ctl_data *VAR_6;

 VAR_5 = FUNC_0(&VAR_6, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (FUNC_3(VAR_6->device_id)) {
  FUNC_5("QAT: Device %d not found\n", VAR_6->device_id);
  VAR_5 = -VAR_1;
  goto out;
 }

 VAR_5 = FUNC_1(VAR_6->device_id);
 if (VAR_5)
  goto out;

 if (VAR_6->device_id == VAR_0)
  FUNC_6("QAT: Stopping all acceleration devices.\n");
 else
  FUNC_6("QAT: Stopping acceleration device qat_dev%d.\n",
   VAR_6->device_id);

 FUNC_2(VAR_6->device_id);

out:
 FUNC_4(VAR_6);
 return VAR_5;
}
