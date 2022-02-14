
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_4__ {scalar_t__ max; scalar_t__ stats_mode; } ;
struct binderfs_info {TYPE_2__ mount_opts; } ;
struct TYPE_3__ {struct binderfs_info* s_fs_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_2, struct dentry *VAR_3)
{
 struct binderfs_info *VAR_4;

 VAR_4 = VAR_3->d_sb->s_fs_info;
 if (VAR_4->mount_opts.max <= VAR_0)
  FUNC_0(VAR_2, ",max=%d", VAR_4->mount_opts.max);
 if (VAR_4->mount_opts.stats_mode == VAR_1)
  FUNC_0(VAR_2, ",stats=global");

 return 0;
}
