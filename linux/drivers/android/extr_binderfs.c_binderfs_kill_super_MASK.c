
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct binderfs_info* s_fs_info; } ;
struct binderfs_info {scalar_t__ ipc_ns; } ;


 int FUNC_0 (struct binderfs_info*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0)
{
 struct binderfs_info *VAR_1 = VAR_0->s_fs_info;

 FUNC_1(VAR_0);

 if (VAR_1 && VAR_1->ipc_ns)
  FUNC_2(VAR_1->ipc_ns);

 FUNC_0(VAR_1);
}
