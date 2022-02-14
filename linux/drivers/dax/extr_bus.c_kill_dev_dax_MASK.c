
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
struct dev_dax {struct dax_device* dax_dev; } ;
struct dax_device {int dummy; } ;


 struct inode* FUNC_0 (struct dax_device*) ;
 int FUNC_1 (struct dax_device*) ;
 int FUNC_2 (int ,int ,int ,int) ;

void FUNC_3(struct dev_dax *VAR_0)
{
 struct dax_device *VAR_1 = VAR_0->dax_dev;
 struct inode *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 FUNC_2(VAR_2->i_mapping, 0, 0, 1);
}
