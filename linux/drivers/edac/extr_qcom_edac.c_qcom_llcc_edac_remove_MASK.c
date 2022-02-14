
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct edac_device_ctl_info {int dev; } ;


 struct edac_device_ctl_info* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct edac_device_ctl_info*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct edac_device_ctl_info *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1->dev);
 FUNC_2(VAR_1);

 return 0;
}
