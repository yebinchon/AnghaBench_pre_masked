
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct blk_mq_debugfs_attr* i_private; } ;
struct file {int dummy; } ;
struct blk_mq_debugfs_attr {scalar_t__ show; } ;


 int FUNC_0 (struct inode*,struct file*) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 const struct blk_mq_debugfs_attr *VAR_2 = VAR_0->i_private;

 if (VAR_2->show)
  return FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1);
}
