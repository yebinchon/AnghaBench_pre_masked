
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {void* private; } ;
struct inode {struct blk_mq_debugfs_attr* i_private; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {struct seq_file* private_data; TYPE_2__ f_path; } ;
struct blk_mq_debugfs_attr {int show; scalar_t__ seq_ops; } ;
struct TYPE_6__ {void* i_private; } ;
struct TYPE_4__ {int d_parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (struct file*,scalar_t__) ;
 int FUNC_3 (struct file*,int ,struct blk_mq_debugfs_attr*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 const struct blk_mq_debugfs_attr *VAR_4 = VAR_2->i_private;
 void *VAR_5 = FUNC_1(VAR_3->f_path.dentry->d_parent)->i_private;
 struct seq_file *VAR_6;
 int VAR_7;

 if (VAR_4->seq_ops) {
  VAR_7 = FUNC_2(VAR_3, VAR_4->seq_ops);
  if (!VAR_7) {
   VAR_6 = VAR_3->private_data;
   VAR_6->private = VAR_5;
  }
  return VAR_7;
 }

 if (FUNC_0(!VAR_4->show))
  return -VAR_0;

 return FUNC_3(VAR_3, VAR_1, VAR_2->i_private);
}
