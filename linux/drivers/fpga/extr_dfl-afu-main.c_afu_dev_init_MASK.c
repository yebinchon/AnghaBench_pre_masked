
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dfl_feature_platform_data {int lock; } ;
struct dfl_afu {struct dfl_feature_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dfl_feature_platform_data*) ;
 int FUNC_1 (struct dfl_feature_platform_data*) ;
 struct dfl_feature_platform_data* FUNC_2 (int *) ;
 struct dfl_afu* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct dfl_feature_platform_data*,struct dfl_afu*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct dfl_feature_platform_data *VAR_3 = FUNC_2(&VAR_2->dev);
 struct dfl_afu *VAR_4;

 VAR_4 = FUNC_3(&VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->pdata = VAR_3;

 FUNC_5(&VAR_3->lock);
 FUNC_4(VAR_3, VAR_4);
 FUNC_1(VAR_3);
 FUNC_0(VAR_3);
 FUNC_6(&VAR_3->lock);

 return 0;
}
