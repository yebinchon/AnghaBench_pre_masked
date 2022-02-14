
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fs {int fs_metackhash; int fs_ckhash; int fs_sbsize; } ;


 int VAR_0 ;
 int FUNC_0 (long,void*,int ) ;

uint32_t
FUNC_1(struct fs *VAR_1)
{
 uint32_t VAR_2, VAR_3;
 if ((VAR_1->fs_metackhash & VAR_0) == 0)
  return (VAR_1->fs_ckhash);

 VAR_3 = VAR_1->fs_ckhash;
 VAR_1->fs_ckhash = 0;




 VAR_2 = FUNC_0(~0L, (void *)VAR_1, VAR_1->fs_sbsize);
 VAR_1->fs_ckhash = VAR_3;
 return (VAR_2);
}
