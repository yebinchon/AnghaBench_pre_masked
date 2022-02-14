
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dax_device {struct inode inode; } ;



struct inode *FUNC_0(struct dax_device *VAR_0)
{
 return &VAR_0->inode;
}
