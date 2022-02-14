
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ufs2_dinode {scalar_t__ di_mode; scalar_t__ di_ckhash; } ;
struct fs {int fs_metackhash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (long,void*,int) ;

int
FUNC_1(struct fs *VAR_2, struct ufs2_dinode *VAR_3)
{
 uint32_t VAR_4, VAR_5;




 if (VAR_3->di_mode == 0 || (VAR_2->fs_metackhash & VAR_0) == 0)
  return (0);




 VAR_5 = VAR_3->di_ckhash;
 VAR_3->di_ckhash = 0;
 VAR_4 = FUNC_0(~0L, (void *)VAR_3, sizeof(*VAR_3));
 VAR_3->di_ckhash = VAR_5;
 if (VAR_5 == VAR_4)
  return (0);
 return (VAR_1);
}
