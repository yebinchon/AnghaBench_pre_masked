
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dfl_feature_platform_data {int lock; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 struct dfl_feature_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0, bool VAR_1)
{
 struct dfl_feature_platform_data *VAR_2 = FUNC_2(&VAR_0->dev);
 int VAR_3 = 0;

 FUNC_3(&VAR_2->lock);
 if (VAR_1)
  FUNC_1(VAR_0);
 else
  VAR_3 = FUNC_0(VAR_0);
 FUNC_4(&VAR_2->lock);

 return VAR_3;
}
