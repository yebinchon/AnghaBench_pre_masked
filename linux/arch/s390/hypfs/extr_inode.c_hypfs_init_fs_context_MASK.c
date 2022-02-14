
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hypfs_sb_info {int gid; int uid; int lock; } ;
struct fs_context {int * ops; struct hypfs_sb_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 struct hypfs_sb_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fs_context *VAR_3)
{
 struct hypfs_sb_info *VAR_4;

 VAR_4 = FUNC_2(sizeof(struct hypfs_sb_info), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_4->lock);
 VAR_4->uid = FUNC_1();
 VAR_4->gid = FUNC_0();

 VAR_3->s_fs_info = VAR_4;
 VAR_3->ops = &VAR_2;
 return 0;
}
