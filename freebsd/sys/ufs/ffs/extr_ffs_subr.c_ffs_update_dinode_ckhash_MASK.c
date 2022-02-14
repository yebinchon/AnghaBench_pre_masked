
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs2_dinode {scalar_t__ di_mode; scalar_t__ di_ckhash; } ;
struct fs {int fs_metackhash; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (long,void*,int) ;

void
FUNC_1(struct fs *VAR_1, struct ufs2_dinode *VAR_2)
{

 if (VAR_2->di_mode == 0 || (VAR_1->fs_metackhash & VAR_0) == 0)
  return;




 VAR_2->di_ckhash = 0;
 VAR_2->di_ckhash = FUNC_0(~0L, (void *)VAR_2, sizeof(*VAR_2));
}
