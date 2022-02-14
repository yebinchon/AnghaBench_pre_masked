
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_root; } ;
struct spufs_fs_context {int mode; int gid; int uid; } ;
struct inode {int * i_fop; int * i_op; int i_gid; int i_uid; } ;
struct fs_context {struct spufs_fs_context* fs_private; } ;
struct TYPE_2__ {int * i_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_3 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_6, struct fs_context *VAR_7)
{
 struct spufs_fs_context *VAR_8 = VAR_7->fs_private;
 struct inode *VAR_9;

 if (!VAR_5)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_6, VAR_2 | VAR_8->mode);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->i_uid = VAR_8->uid;
 VAR_9->i_gid = VAR_8->gid;
 VAR_9->i_op = &VAR_3;
 VAR_9->i_fop = &VAR_4;
 FUNC_0(VAR_9)->i_ctx = ((void*)0);
 FUNC_2(VAR_9);

 VAR_6->s_root = FUNC_1(VAR_9);
 if (!VAR_6->s_root)
  return -VAR_1;
 return 0;
}
