
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct hypfs_sb_info {int gid; int uid; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct hypfs_sb_info* s_fs_info; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, struct dentry *VAR_2)
{
 struct hypfs_sb_info *VAR_3 = VAR_2->d_sb->s_fs_info;

 FUNC_2(VAR_1, ",uid=%u", FUNC_1(&VAR_0, VAR_3->uid));
 FUNC_2(VAR_1, ",gid=%u", FUNC_0(&VAR_0, VAR_3->gid));
 return 0;
}
