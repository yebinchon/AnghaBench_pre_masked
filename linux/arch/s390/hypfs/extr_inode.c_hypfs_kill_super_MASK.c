
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct hypfs_sb_info* s_fs_info; scalar_t__ s_root; } ;
struct hypfs_sb_info {scalar_t__ update_file; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hypfs_sb_info*) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_0)
{
 struct hypfs_sb_info *VAR_1 = VAR_0->s_fs_info;

 if (VAR_0->s_root)
  FUNC_0(VAR_0->s_root);
 if (VAR_1 && VAR_1->update_file)
  FUNC_1(VAR_1->update_file);
 FUNC_2(VAR_0->s_fs_info);
 VAR_0->s_fs_info = ((void*)0);
 FUNC_3(VAR_0);
}
