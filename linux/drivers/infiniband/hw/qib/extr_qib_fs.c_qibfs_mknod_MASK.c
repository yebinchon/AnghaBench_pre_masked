
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {struct file_operations const* i_fop; int * i_op; void* i_private; int i_atime; int i_ctime; int i_mtime; scalar_t__ i_blocks; int i_gid; int i_uid; int i_mode; int i_ino; int i_sb; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_4, struct dentry *VAR_5,
         umode_t VAR_6, const struct file_operations *VAR_7,
         void *VAR_8)
{
 int VAR_9;
 struct inode *VAR_10 = FUNC_5(VAR_4->i_sb);

 if (!VAR_10) {
  VAR_9 = -VAR_0;
  goto bail;
 }

 VAR_10->i_ino = FUNC_3();
 VAR_10->i_mode = VAR_6;
 VAR_10->i_uid = VAR_2;
 VAR_10->i_gid = VAR_1;
 VAR_10->i_blocks = 0;
 VAR_10->i_atime = FUNC_1(VAR_10);
 VAR_10->i_mtime = VAR_10->i_atime;
 VAR_10->i_ctime = VAR_10->i_atime;
 VAR_10->i_private = VAR_8;
 if (FUNC_0(VAR_6)) {
  VAR_10->i_op = &VAR_3;
  FUNC_4(VAR_10);
  FUNC_4(VAR_4);
 }

 VAR_10->i_fop = VAR_7;

 FUNC_2(VAR_5, VAR_10);
 VAR_9 = 0;

bail:
 return VAR_9;
}
