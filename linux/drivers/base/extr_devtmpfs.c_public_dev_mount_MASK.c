
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_root; int s_umount; int s_active; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct super_block* mnt_sb; } ;


 int FUNC_0 (int *) ;
 struct dentry* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct dentry *FUNC_3(struct file_system_type *VAR_1, int VAR_2,
        const char *VAR_3, void *VAR_4)
{
 struct super_block *VAR_5 = VAR_0->mnt_sb;
 FUNC_0(&VAR_5->s_active);
 FUNC_2(&VAR_5->s_umount);
 return FUNC_1(VAR_5->s_root);
}
