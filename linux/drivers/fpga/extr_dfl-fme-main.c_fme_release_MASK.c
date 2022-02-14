
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct inode {int dummy; } ;
struct file {struct dfl_feature_platform_data* private_data; } ;
struct dfl_feature_platform_data {struct platform_device* dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct dfl_feature_platform_data*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct dfl_feature_platform_data *VAR_2 = VAR_1->private_data;
 struct platform_device *VAR_3 = VAR_2->dev;

 FUNC_0(&VAR_3->dev, "Device File Release\n");
 FUNC_1(VAR_2);

 return 0;
}
