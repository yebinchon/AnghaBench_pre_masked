
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct edac_device_ctl_info {struct aurora_l2_drvdata* pvt_info; } ;
struct aurora_l2_drvdata {int debugfs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct edac_device_ctl_info*) ;
 struct edac_device_ctl_info* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct edac_device_ctl_info *VAR_1 = FUNC_3(VAR_0);





 FUNC_1(&VAR_0->dev);
 FUNC_2(VAR_1);
 FUNC_4(VAR_0, ((void*)0));

 return 0;
}
