
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_device_prv_data {int inject_fops; } ;
struct edac_device_ctl_info {struct altr_edac_device_dev* pvt_info; } ;
struct altr_edac_device_dev {int debugfs_dir; int edac_dev_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ,struct edac_device_ctl_info*,int ) ;

__attribute__((used)) static void FUNC_4(struct edac_device_ctl_info *VAR_2,
          const struct edac_device_prv_data *VAR_3)
{
 struct altr_edac_device_dev *VAR_4 = VAR_2->pvt_info;

 if (!FUNC_0(VAR_0))
  return;

 VAR_4->debugfs_dir = FUNC_2(VAR_4->edac_dev_name);
 if (!VAR_4->debugfs_dir)
  return;

 if (!FUNC_3("altr_trigger", VAR_1,
          VAR_4->debugfs_dir, VAR_2,
          VAR_3->inject_fops))
  FUNC_1(VAR_4->debugfs_dir);
}
