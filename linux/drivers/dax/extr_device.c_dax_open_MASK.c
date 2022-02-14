
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flags; TYPE_1__* i_mapping; } ;
struct file {struct dev_dax* private_data; TYPE_1__* f_mapping; int f_wb_err; } ;
struct dev_dax {int dev; } ;
struct dax_device {int dummy; } ;
struct TYPE_2__ {int * a_ops; struct inode* host; } ;


 int VAR_0 ;
 struct dev_dax* FUNC_0 (struct dax_device*) ;
 struct inode* FUNC_1 (struct dax_device*) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct dax_device* FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct dax_device *VAR_4 = FUNC_4(VAR_2);
 struct inode *VAR_5 = FUNC_1(VAR_4);
 struct dev_dax *VAR_6 = FUNC_0(VAR_4);

 FUNC_2(&VAR_6->dev, "trace\n");
 VAR_2->i_mapping = VAR_5->i_mapping;
 VAR_2->i_mapping->host = VAR_5;
 VAR_2->i_mapping->a_ops = &VAR_1;
 VAR_3->f_mapping = VAR_2->i_mapping;
 VAR_3->f_wb_err = FUNC_3(VAR_3->f_mapping);
 VAR_3->private_data = VAR_6;
 VAR_2->i_flags = VAR_0;

 return 0;
}
