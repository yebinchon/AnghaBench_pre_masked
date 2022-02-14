
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct inode {int dummy; } ;
struct file {struct platform_device* private_data; } ;
struct dfl_feature_platform_data {int lock; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct dfl_feature_platform_data*) ;
 int FUNC_2 (int *,char*) ;
 struct dfl_feature_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (struct dfl_feature_platform_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, struct file *VAR_1)
{
 struct platform_device *VAR_2 = VAR_1->private_data;
 struct dfl_feature_platform_data *VAR_3;

 FUNC_2(&VAR_2->dev, "Device File Release\n");

 VAR_3 = FUNC_3(&VAR_2->dev);

 FUNC_5(&VAR_3->lock);
 FUNC_0(VAR_2);
 FUNC_1(VAR_3);
 FUNC_6(&VAR_3->lock);

 FUNC_4(VAR_3);

 return 0;
}
