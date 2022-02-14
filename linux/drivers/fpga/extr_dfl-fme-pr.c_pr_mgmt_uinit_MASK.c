
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dfl_feature_platform_data {int lock; } ;
struct dfl_feature {int dummy; } ;


 struct dfl_feature_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (struct dfl_feature_platform_data*) ;
 int FUNC_2 (struct dfl_feature_platform_data*) ;
 int FUNC_3 (struct dfl_feature_platform_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_0,
     struct dfl_feature *VAR_1)
{
 struct dfl_feature_platform_data *VAR_2 = FUNC_0(&VAR_0->dev);

 FUNC_4(&VAR_2->lock);

 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_5(&VAR_2->lock);
}
