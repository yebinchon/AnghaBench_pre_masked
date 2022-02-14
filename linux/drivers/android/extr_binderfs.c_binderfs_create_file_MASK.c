
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {void* i_private; struct file_operations const* i_fop; struct super_block* i_sb; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 struct dentry* FUNC_2 (struct dentry*,char const*) ;
 struct inode* FUNC_3 (struct super_block*,int) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*,struct dentry*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;

struct dentry *FUNC_10(struct dentry *VAR_2, const char *VAR_3,
        const struct file_operations *VAR_4,
        void *VAR_5)
{
 struct dentry *VAR_6;
 struct inode *VAR_7, *VAR_8;
 struct super_block *VAR_9;

 VAR_8 = FUNC_4(VAR_2);
 FUNC_8(VAR_8);

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_1(VAR_6))
  goto out;

 VAR_9 = VAR_8->i_sb;
 VAR_7 = FUNC_3(VAR_9, VAR_1 | 0444);
 if (!VAR_7) {
  FUNC_6(VAR_6);
  VAR_6 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_7->i_fop = VAR_4;
 VAR_7->i_private = VAR_5;
 FUNC_5(VAR_6, VAR_7);
 FUNC_7(VAR_8, VAR_6);

out:
 FUNC_9(VAR_8);
 return VAR_6;
}
