
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct inode {struct fs* i_fs; } ;
struct fs {int fs_ncg; } ;
typedef scalar_t__ daddr_t ;


 scalar_t__ FUNC_0 (struct inode*,int,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct inode*,int,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct inode*,int,scalar_t__,int) ;

__attribute__((used)) static daddr_t
FUNC_3(struct inode *VAR_0, u_int VAR_1, daddr_t VAR_2, int VAR_3,
    daddr_t (*VAR_4)(struct inode *, int, daddr_t, int))
{
 struct fs *VAR_5;
 daddr_t VAR_6;
 u_int VAR_7, VAR_8 = VAR_1;

 VAR_5 = VAR_0->i_fs;



 VAR_6 = (*VAR_4)(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  return (VAR_6);



 for (VAR_7 = 1; VAR_7 < VAR_5->fs_ncg; VAR_7 *= 2) {
  VAR_1 += VAR_7;
  if (VAR_1 >= VAR_5->fs_ncg)
   VAR_1 -= VAR_5->fs_ncg;
  VAR_6 = (*VAR_4)(VAR_0, VAR_1, 0, VAR_3);
  if (VAR_6)
   return (VAR_6);
 }





 VAR_1 = (VAR_8 + 2) % VAR_5->fs_ncg;
 for (VAR_7 = 2; VAR_7 < VAR_5->fs_ncg; VAR_7++) {
  VAR_6 = (*VAR_4)(VAR_0, VAR_1, 0, VAR_3);
  if (VAR_6)
   return (VAR_6);
  VAR_1++;
  if (VAR_1 == VAR_5->fs_ncg)
   VAR_1 = 0;
 }
 return (0);
}
