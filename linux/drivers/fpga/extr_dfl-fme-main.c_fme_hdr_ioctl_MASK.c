
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dfl_feature_platform_data {int dummy; } ;
struct dfl_feature {int dummy; } ;




 long VAR_0 ;
 struct dfl_feature_platform_data* FUNC_0 (int *) ;
 long FUNC_1 (struct dfl_feature_platform_data*,unsigned long) ;
 long FUNC_2 (struct dfl_feature_platform_data*,unsigned long) ;

__attribute__((used)) static long FUNC_3(struct platform_device *VAR_1,
     struct dfl_feature *VAR_2,
     unsigned int VAR_3, unsigned long VAR_4)
{
 struct dfl_feature_platform_data *VAR_5 = FUNC_0(&VAR_1->dev);

 switch (VAR_3) {
 case 128:
  return FUNC_2(VAR_5, VAR_4);
 case 129:
  return FUNC_1(VAR_5, VAR_4);
 }

 return -VAR_0;
}
