
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct hypfs_sb_info* s_fs_info; } ;
struct inode {int i_ctime; int i_mtime; int i_atime; } ;
struct hypfs_sb_info {int last_update; int update_file; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0)
{
 struct hypfs_sb_info *VAR_1 = VAR_0->s_fs_info;
 struct inode *VAR_2 = FUNC_1(VAR_1->update_file);

 VAR_1->last_update = FUNC_2();
 VAR_2->i_atime = VAR_2->i_mtime = VAR_2->i_ctime = FUNC_0(VAR_2);
}
