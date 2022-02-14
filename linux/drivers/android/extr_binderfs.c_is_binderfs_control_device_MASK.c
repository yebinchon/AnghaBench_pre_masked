
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_sb; } ;
struct binderfs_info {struct dentry const* control_dentry; } ;
struct TYPE_2__ {struct binderfs_info* s_fs_info; } ;



__attribute__((used)) static inline bool FUNC_0(const struct dentry *VAR_0)
{
 struct binderfs_info *VAR_1 = VAR_0->d_sb->s_fs_info;
 return VAR_1->control_dentry == VAR_0;
}
