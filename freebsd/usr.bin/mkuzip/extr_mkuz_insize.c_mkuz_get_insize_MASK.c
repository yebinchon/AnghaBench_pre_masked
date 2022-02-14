
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_mntfromname; } ;
struct stat {int st_flags; int st_size; int st_mode; } ;
struct mkuz_cfg {int fdr; int iname; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (int,struct statfs*) ;
 scalar_t__ FUNC_5 (int,int ,int*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ) ;

off_t
FUNC_9(struct mkuz_cfg *VAR_3)
{
 int VAR_4;
 off_t VAR_5;
 struct stat VAR_6;
 struct statfs VAR_7;

 if (FUNC_3(VAR_3->fdr, &VAR_6) != 0) {
  FUNC_7("fstat(%s)", VAR_3->iname);
  return (-1);
 }
 if ((VAR_6.st_flags & VAR_2) != 0) {
  if (FUNC_4(VAR_3->fdr, &VAR_7) != 0) {
   FUNC_7("fstatfs(%s)", VAR_3->iname);
   return (-1);
  }
  VAR_4 = FUNC_6(VAR_7.f_mntfromname, VAR_1);
  if (VAR_4 < 0) {
   FUNC_7("open(%s, O_RDONLY)", VAR_7.f_mntfromname);
   return (-1);
  }
  if (FUNC_5(VAR_4, VAR_0, &VAR_5) < 0) {
   FUNC_7("ioctl(DIOCGMEDIASIZE)");
   FUNC_2(VAR_4);
   return (-1);
  }
  FUNC_2(VAR_4);
  VAR_6.st_size = VAR_5;
 } else if (FUNC_0(VAR_6.st_mode)) {
  if (FUNC_5(VAR_3->fdr, VAR_0, &VAR_5) < 0) {
   FUNC_7("ioctl(DIOCGMEDIASIZE)");
   return (-1);
  }
  VAR_6.st_size = VAR_5;
 } else if (!FUNC_1(VAR_6.st_mode)) {
  FUNC_8("%s: not a character device or regular file\n",
   VAR_3->iname);
  return (-1);
 }
 return (VAR_6.st_size);
}
