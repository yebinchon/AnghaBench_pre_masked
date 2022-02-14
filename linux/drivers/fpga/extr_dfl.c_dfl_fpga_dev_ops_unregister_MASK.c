
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dfl_feature_platform_data {int cdev; } ;


 int FUNC_0 (int *) ;
 struct dfl_feature_platform_data* FUNC_1 (int *) ;

void FUNC_2(struct platform_device *VAR_0)
{
 struct dfl_feature_platform_data *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(&VAR_1->cdev);
}
