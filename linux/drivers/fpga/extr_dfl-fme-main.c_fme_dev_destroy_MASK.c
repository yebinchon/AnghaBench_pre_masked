
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dfl_fme {int dummy; } ;
struct dfl_feature_platform_data {int lock; } ;


 struct dfl_feature_platform_data* FUNC_0 (int *) ;
 struct dfl_fme* FUNC_1 (struct dfl_feature_platform_data*) ;
 int FUNC_2 (struct dfl_feature_platform_data*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_0)
{
 struct dfl_feature_platform_data *VAR_1 = FUNC_0(&VAR_0->dev);
 struct dfl_fme *VAR_2;

 FUNC_3(&VAR_1->lock);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_2(VAR_1, ((void*)0));
 FUNC_4(&VAR_1->lock);
}
