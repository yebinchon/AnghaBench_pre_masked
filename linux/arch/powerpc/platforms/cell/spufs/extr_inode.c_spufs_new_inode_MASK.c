
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_mode; int i_ino; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 struct inode* FUNC_4 (struct super_block*) ;

__attribute__((used)) static struct inode *
FUNC_5(struct super_block *VAR_0, umode_t VAR_1)
{
 struct inode *VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (!VAR_2)
  goto out;

 VAR_2->i_ino = FUNC_3();
 VAR_2->i_mode = VAR_1;
 VAR_2->i_uid = FUNC_1();
 VAR_2->i_gid = FUNC_0();
 VAR_2->i_atime = VAR_2->i_mtime = VAR_2->i_ctime = FUNC_2(VAR_2);
out:
 return VAR_2;
}
