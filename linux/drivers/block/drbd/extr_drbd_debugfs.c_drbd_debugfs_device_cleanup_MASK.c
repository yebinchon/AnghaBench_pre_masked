
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int debugfs_vol; int debugfs_vol_ed_gen_id; int debugfs_vol_data_gen_id; int debugfs_vol_resync_extents; int debugfs_vol_act_log_extents; int debugfs_vol_oldest_requests; int debugfs_minor; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct drbd_device *VAR_0)
{
 FUNC_0(&VAR_0->debugfs_minor);
 FUNC_0(&VAR_0->debugfs_vol_oldest_requests);
 FUNC_0(&VAR_0->debugfs_vol_act_log_extents);
 FUNC_0(&VAR_0->debugfs_vol_resync_extents);
 FUNC_0(&VAR_0->debugfs_vol_data_gen_id);
 FUNC_0(&VAR_0->debugfs_vol_ed_gen_id);
 FUNC_0(&VAR_0->debugfs_vol);
}
