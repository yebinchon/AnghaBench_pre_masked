
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_cfg_device_data {int debug; int lock; int sec_list; } ;
struct adf_accel_dev {int debugfs_dir; struct adf_cfg_device_data* cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,struct adf_cfg_device_data*,int *) ;
 int FUNC_2 (int *) ;
 struct adf_cfg_device_data* FUNC_3 (int,int ) ;
 int VAR_3 ;

int FUNC_4(struct adf_accel_dev *VAR_4)
{
 struct adf_cfg_device_data *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_0(&VAR_5->sec_list);
 FUNC_2(&VAR_5->lock);
 VAR_4->cfg = VAR_5;


 VAR_5->debug = FUNC_1("dev_cfg", VAR_2,
        VAR_4->debugfs_dir,
        VAR_5,
        &VAR_3);
 return 0;
}
