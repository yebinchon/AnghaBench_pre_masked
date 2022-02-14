
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct edac_device_ctl_info {struct altr_edac_device_dev* pvt_info; } ;
struct altr_edac_device_dev {int debugfs_dir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct edac_device_ctl_info*) ;
 struct edac_device_ctl_info* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct edac_device_ctl_info *VAR_1 = FUNC_3(VAR_0);
 struct altr_edac_device_dev *VAR_2 = VAR_1->pvt_info;

 FUNC_0(VAR_2->debugfs_dir);
 FUNC_1(&VAR_0->dev);
 FUNC_2(VAR_1);

 return 0;
}
