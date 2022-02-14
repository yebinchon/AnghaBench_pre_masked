
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {struct hypfs_sb_info* s_fs_info; } ;
struct inode {int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_mode; int i_ino; } ;
struct hypfs_sb_info {int gid; int uid; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 struct inode* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*,int) ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_0, umode_t VAR_1)
{
 struct inode *VAR_2 = FUNC_3(VAR_0);

 if (VAR_2) {
  struct hypfs_sb_info *VAR_3 = VAR_0->s_fs_info;
  VAR_2->i_ino = FUNC_2();
  VAR_2->i_mode = VAR_1;
  VAR_2->i_uid = VAR_3->uid;
  VAR_2->i_gid = VAR_3->gid;
  VAR_2->i_atime = VAR_2->i_mtime = VAR_2->i_ctime = FUNC_1(VAR_2);
  if (FUNC_0(VAR_1))
   FUNC_4(VAR_2, 2);
 }
 return VAR_2;
}
