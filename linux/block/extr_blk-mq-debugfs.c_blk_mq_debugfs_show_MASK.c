
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {TYPE_3__* file; struct blk_mq_debugfs_attr* private; } ;
struct blk_mq_debugfs_attr {int (* show ) (void*,struct seq_file*) ;} ;
struct TYPE_8__ {void* i_private; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct TYPE_7__ {TYPE_2__ f_path; } ;
struct TYPE_5__ {int d_parent; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (void*,struct seq_file*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 const struct blk_mq_debugfs_attr *VAR_2 = VAR_0->private;
 void *VAR_3 = FUNC_0(VAR_0->file->f_path.dentry->d_parent)->i_private;

 return VAR_2->show(VAR_3, VAR_0);
}
