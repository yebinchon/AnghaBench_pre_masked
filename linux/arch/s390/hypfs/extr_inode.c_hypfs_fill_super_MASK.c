
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct dentry* s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; struct hypfs_sb_info* s_fs_info; } ;
struct inode {int * i_fop; int * i_op; } ;
struct hypfs_sb_info {struct dentry* update_file; } ;
struct fs_context {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_5 ;
 struct dentry* FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct inode* FUNC_5 (struct super_block*,int) ;
 int VAR_6 ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (char*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_9, struct fs_context *VAR_10)
{
 struct hypfs_sb_info *VAR_11 = VAR_9->s_fs_info;
 struct inode *VAR_12;
 struct dentry *VAR_13, *VAR_14;
 int VAR_15;

 VAR_9->s_blocksize = VAR_4;
 VAR_9->s_blocksize_bits = VAR_3;
 VAR_9->s_magic = VAR_1;
 VAR_9->s_op = &VAR_6;

 VAR_12 = FUNC_5(VAR_9, VAR_5 | 0755);
 if (!VAR_12)
  return -VAR_0;
 VAR_12->i_op = &VAR_7;
 VAR_12->i_fop = &VAR_8;
 VAR_9->s_root = VAR_13 = FUNC_2(VAR_12);
 if (!VAR_13)
  return -VAR_0;
 if (VAR_2)
  VAR_15 = FUNC_7(VAR_13);
 else
  VAR_15 = FUNC_4(VAR_13);
 if (VAR_15)
  return VAR_15;
 VAR_14 = FUNC_3(VAR_13);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);
 VAR_11->update_file = VAR_14;
 FUNC_6(VAR_9);
 FUNC_8("Hypervisor filesystem mounted\n");
 return 0;
}
