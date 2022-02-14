
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct inode {int dummy; } ;
struct file {struct dfl_feature_platform_data* private_data; } ;
struct dfl_feature_platform_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 struct dfl_feature_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (struct dfl_feature_platform_data*) ;
 struct platform_device* FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_4(VAR_1);
 struct dfl_feature_platform_data *VAR_4 = FUNC_2(&VAR_3->dev);
 int VAR_5;

 if (FUNC_0(!VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_3->dev, "Device File Open\n");
 VAR_2->private_data = VAR_4;

 return 0;
}
