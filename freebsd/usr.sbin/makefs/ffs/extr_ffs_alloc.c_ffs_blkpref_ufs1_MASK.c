
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct inode {int i_number; struct fs* i_fs; } ;
struct TYPE_4__ {int cs_nbfree; } ;
struct fs {int fs_maxbpg; int fs_fpg; int fs_frag; int fs_ncg; TYPE_2__ (* fs_cs ) (struct fs*,int) ;TYPE_1__ fs_cstotal; } ;
typedef scalar_t__ int32_t ;
typedef int daddr_t ;
struct TYPE_5__ {int cs_nbfree; } ;


 int FUNC_0 (struct fs*) ;
 int FUNC_1 (struct fs*) ;
 int VAR_0 ;
 int FUNC_2 (struct fs*,int) ;
 int FUNC_3 (struct fs*,int ) ;
 TYPE_2__ FUNC_4 (struct fs*,int) ;
 TYPE_2__ FUNC_5 (struct fs*,int) ;
 int FUNC_6 (scalar_t__,int ) ;

daddr_t
FUNC_7(struct inode *VAR_1, daddr_t VAR_2, int VAR_3, int32_t *VAR_4)
{
 struct fs *VAR_5;
 u_int VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = VAR_1->i_fs;
 if (VAR_3 % VAR_5->fs_maxbpg == 0 || VAR_4[VAR_3 - 1] == 0) {
  if (VAR_2 < VAR_0 + FUNC_0(VAR_5)) {
   VAR_6 = FUNC_3(VAR_5, VAR_1->i_number);
   return (VAR_5->fs_fpg * VAR_6 + VAR_5->fs_frag);
  }




  if (VAR_3 == 0 || VAR_4[VAR_3 - 1] == 0)
   VAR_7 =
       FUNC_3(VAR_5, VAR_1->i_number) + VAR_2 / VAR_5->fs_maxbpg;
  else
   VAR_7 = FUNC_2(VAR_5,
    FUNC_6(VAR_4[VAR_3 - 1], FUNC_1(VAR_5)) + 1);
  VAR_7 %= VAR_5->fs_ncg;
  VAR_8 = VAR_5->fs_cstotal.cs_nbfree / VAR_5->fs_ncg;
  for (VAR_6 = VAR_7; VAR_6 < VAR_5->fs_ncg; VAR_6++)
   if (VAR_5->fs_cs(VAR_5, VAR_6).cs_nbfree >= VAR_8)
    return (VAR_5->fs_fpg * VAR_6 + VAR_5->fs_frag);
  for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++)
   if (VAR_5->fs_cs(VAR_5, VAR_6).cs_nbfree >= VAR_8)
    return (VAR_5->fs_fpg * VAR_6 + VAR_5->fs_frag);
  return (0);
 }



 return FUNC_6(VAR_4[VAR_3 - 1], FUNC_1(VAR_5)) + VAR_5->fs_frag;
}
