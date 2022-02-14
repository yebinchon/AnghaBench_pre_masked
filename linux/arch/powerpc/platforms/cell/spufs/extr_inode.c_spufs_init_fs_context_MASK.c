
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_sb_info {int dummy; } ;
struct spufs_fs_context {int mode; int gid; int uid; } ;
struct fs_context {int * ops; struct spufs_sb_info* s_fs_info; struct spufs_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct spufs_fs_context*) ;
 void* FUNC_3 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct fs_context *VAR_3)
{
 struct spufs_fs_context *VAR_4;
 struct spufs_sb_info *VAR_5;

 VAR_4 = FUNC_3(sizeof(struct spufs_fs_context), VAR_1);
 if (!VAR_4)
  goto nomem;

 VAR_5 = FUNC_3(sizeof(struct spufs_sb_info), VAR_1);
 if (!VAR_5)
  goto nomem_ctx;

 VAR_4->uid = FUNC_1();
 VAR_4->gid = FUNC_0();
 VAR_4->mode = 0755;

 VAR_3->fs_private = VAR_4;
 VAR_3->s_fs_info = VAR_5;
 VAR_3->ops = &VAR_2;
 return 0;

nomem_ctx:
 FUNC_2(VAR_4);
nomem:
 return -VAR_0;
}
