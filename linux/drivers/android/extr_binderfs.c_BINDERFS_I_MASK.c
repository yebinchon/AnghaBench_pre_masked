
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct binderfs_info {int dummy; } ;
struct TYPE_2__ {struct binderfs_info* s_fs_info; } ;



__attribute__((used)) static inline struct binderfs_info *FUNC_0(const struct inode *VAR_0)
{
 return VAR_0->i_sb->s_fs_info;
}
