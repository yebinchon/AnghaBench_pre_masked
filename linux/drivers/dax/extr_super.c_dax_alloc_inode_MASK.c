
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {scalar_t__ i_rdev; } ;
struct dax_device {struct inode inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dax_device* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2)
{
 struct dax_device *VAR_3;
 struct inode *VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = &VAR_3->inode;
 VAR_4->i_rdev = 0;
 return VAR_4;
}
