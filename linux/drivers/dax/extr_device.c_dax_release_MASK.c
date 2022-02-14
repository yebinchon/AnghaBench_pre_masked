
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dev_dax* private_data; } ;
struct dev_dax {int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct dev_dax *VAR_2 = VAR_1->private_data;

 FUNC_0(&VAR_2->dev, "trace\n");
 return 0;
}
