
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_8__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; } ;
struct stat {int st_mode; int st_uid; int st_gid; TYPE_4__ st_birthtim; TYPE_3__ st_ctim; scalar_t__ st_ctime; TYPE_2__ st_mtim; scalar_t__ st_mtime; TYPE_1__ st_atim; scalar_t__ st_atime; scalar_t__ st_size; scalar_t__ st_nlink; scalar_t__ st_ino; } ;
typedef int sizebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int,scalar_t__,char*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*,int ,int ) ;
 char* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_3, bool VAR_4, bool VAR_5)
{
 char VAR_6[8];
 struct stat VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_5(VAR_3, VAR_2, 0);
 if (VAR_9 == -1) {
  FUNC_7("open %s", VAR_3);
  return (1);
 }
 VAR_10 = 0;
 VAR_8 = FUNC_1(VAR_9, &VAR_7);
 if (VAR_8 == -1) {
  FUNC_7("stat %s", VAR_3);
  VAR_10 = 1;
 } else {
  FUNC_4("path\t%s\n", VAR_3);
  FUNC_4("inode\t%jd\n", (uintmax_t)VAR_7.st_ino);
  FUNC_4("mode\t%#o\n", VAR_7.st_mode);
  FUNC_4("nlink\t%jd\n", (uintmax_t)VAR_7.st_nlink);
  if (VAR_5) {
   FUNC_4("owner\t%s\n", FUNC_6(VAR_7.st_uid, 0));
   FUNC_4("group\t%s\n", FUNC_2(VAR_7.st_gid, 0));
  } else {
   FUNC_4("uid\t%d\n", VAR_7.st_uid);
   FUNC_4("gid\t%d\n", VAR_7.st_gid);
  }
  if (VAR_4) {
   FUNC_3(VAR_6, sizeof(VAR_6),
       VAR_7.st_size, "", VAR_0, VAR_1);
   FUNC_4("size\t%s\n", VAR_6);
  } else {
   FUNC_4("size\t%jd\n", (uintmax_t)VAR_7.st_size);
  }
  FUNC_4("atime\t%ld.%09ld\n", (long)VAR_7.st_atime,
      (long)VAR_7.st_atim.tv_nsec);
  FUNC_4("mtime\t%ld.%09ld\n", (long)VAR_7.st_mtime,
      (long)VAR_7.st_mtim.tv_nsec);
  FUNC_4("ctime\t%ld.%09ld\n", (long)VAR_7.st_ctime,
      (long)VAR_7.st_ctim.tv_nsec);
  FUNC_4("birth\t%ld.%09ld\n", (long)VAR_7.st_birthtim.tv_sec,
      (long)VAR_7.st_birthtim.tv_nsec);
 }
 FUNC_0(VAR_9);
 return (VAR_10);
}
