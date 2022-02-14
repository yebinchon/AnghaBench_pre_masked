
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int * i_op; int * i_fop; struct super_block* i_sb; } ;
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
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct dentry *FUNC_12(struct dentry *VAR_4,
       const char *VAR_5)
{
 struct dentry *VAR_6;
 struct inode *VAR_7, *VAR_8;
 struct super_block *VAR_9;

 VAR_8 = FUNC_4(VAR_4);
 FUNC_9(VAR_8);

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (FUNC_1(VAR_6))
  goto out;

 VAR_9 = VAR_8->i_sb;
 VAR_7 = FUNC_3(VAR_9, VAR_1 | 0755);
 if (!VAR_7) {
  FUNC_6(VAR_6);
  VAR_6 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_7->i_fop = &VAR_3;
 VAR_7->i_op = &VAR_2;

 FUNC_11(VAR_7, 2);
 FUNC_5(VAR_6, VAR_7);
 FUNC_8(VAR_8);
 FUNC_7(VAR_8, VAR_6);

out:
 FUNC_10(VAR_8);
 return VAR_6;
}
