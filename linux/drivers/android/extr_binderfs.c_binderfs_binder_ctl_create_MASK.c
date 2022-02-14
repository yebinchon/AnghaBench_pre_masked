
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct binderfs_info* s_fs_info; struct dentry* s_root; } ;
struct inode {struct binder_device* i_private; int i_gid; int i_uid; int * i_fop; int i_ctime; int i_atime; int i_mtime; int i_ino; } ;
struct dentry {int dummy; } ;
struct binderfs_info {struct dentry* control_dentry; int root_gid; int root_uid; int * ipc_ns; } ;
struct TYPE_2__ {int minor; } ;
struct binder_device {TYPE_1__ miscdev; struct inode* binderfs_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_4 (struct dentry*,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_10 ;
 int FUNC_6 (struct inode*,int,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct binder_device*) ;
 struct binder_device* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct inode* FUNC_12 (struct super_block*) ;

__attribute__((used)) static int FUNC_13(struct super_block *VAR_11)
{
 int VAR_12, VAR_13;
 struct dentry *VAR_14;
 struct binder_device *VAR_15;
 struct inode *VAR_16 = ((void*)0);
 struct dentry *VAR_17 = VAR_11->s_root;
 struct binderfs_info *VAR_18 = VAR_11->s_fs_info;



 bool VAR_19 = 1;


 VAR_15 = FUNC_9(sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;


 if (VAR_18->control_dentry) {
  VAR_13 = 0;
  goto out;
 }

 VAR_13 = -VAR_2;
 VAR_16 = FUNC_12(VAR_11);
 if (!VAR_16)
  goto out;


 FUNC_10(&VAR_9);
 VAR_12 = FUNC_5(&VAR_8,
         VAR_19 ? VAR_0 :
         VAR_1,
         VAR_3);
 FUNC_11(&VAR_9);
 if (VAR_12 < 0) {
  VAR_13 = VAR_12;
  goto out;
 }

 VAR_16->i_ino = VAR_4;
 VAR_16->i_mtime = VAR_16->i_atime = VAR_16->i_ctime = FUNC_2(VAR_16);
 FUNC_6(VAR_16, VAR_5 | 0600,
      FUNC_1(FUNC_0(VAR_7), VAR_12));
 VAR_16->i_fop = &VAR_6;
 VAR_16->i_uid = VAR_18->root_uid;
 VAR_16->i_gid = VAR_18->root_gid;

 VAR_15->binderfs_inode = VAR_16;
 VAR_15->miscdev.minor = VAR_12;

 VAR_14 = FUNC_4(VAR_17, "binder-control");
 if (!VAR_14)
  goto out;

 VAR_16->i_private = VAR_15;
 VAR_18->control_dentry = VAR_14;
 FUNC_3(VAR_14, VAR_16);

 return 0;

out:
 FUNC_8(VAR_15);
 FUNC_7(VAR_16);

 return VAR_13;
}
