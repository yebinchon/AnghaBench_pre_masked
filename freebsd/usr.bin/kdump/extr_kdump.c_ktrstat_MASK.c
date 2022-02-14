
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int timestr ;
struct tm {int dummy; } ;
struct TYPE_8__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct stat {int st_flags; scalar_t__ st_blocks; scalar_t__ st_blksize; scalar_t__ st_size; TYPE_4__ st_birthtim; TYPE_3__ st_ctim; TYPE_2__ st_mtim; TYPE_1__ st_atim; scalar_t__ st_rdev; scalar_t__ st_gid; scalar_t__ st_uid; scalar_t__ st_nlink; scalar_t__ st_mode; scalar_t__ st_ino; scalar_t__ st_dev; } ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct group* FUNC_0 (int *,scalar_t__) ;
 struct passwd* FUNC_1 (int *,scalar_t__) ;
 int * VAR_2 ;
 int * VAR_3 ;
 struct group* FUNC_2 (scalar_t__) ;
 struct passwd* FUNC_3 (scalar_t__) ;
 struct tm* FUNC_4 (scalar_t__*) ;
 int FUNC_5 (char*,...) ;
 int VAR_4 ;
 int FUNC_6 (char*,int,int ,struct tm*) ;
 int FUNC_7 (scalar_t__,char*) ;

void
FUNC_8(struct stat *VAR_5)
{
 char VAR_6[12], VAR_7[VAR_0 + 4];
 struct passwd *VAR_8;
 struct group *VAR_9;
 struct tm *VAR_10;





 FUNC_5("struct stat {");
 FUNC_5("dev=%ju, ino=%ju, ",
  (uintmax_t)VAR_5->st_dev, (uintmax_t)VAR_5->st_ino);
 if (!VAR_4)
  FUNC_5("mode=0%jo, ", (uintmax_t)VAR_5->st_mode);
 else {
  FUNC_7(VAR_5->st_mode, VAR_6);
  FUNC_5("mode=%s, ", VAR_6);
 }
 FUNC_5("nlink=%ju, ", (uintmax_t)VAR_5->st_nlink);
 if (!VAR_4) {
  VAR_8 = ((void*)0);
 } else {





   VAR_8 = FUNC_3(VAR_5->st_uid);
 }
 if (VAR_8 == ((void*)0))
  FUNC_5("uid=%ju, ", (uintmax_t)VAR_5->st_uid);
 else
  FUNC_5("uid=\"%s\", ", VAR_8->pw_name);
 if (!VAR_4) {
  VAR_9 = ((void*)0);
 } else {





   VAR_9 = FUNC_2(VAR_5->st_gid);
 }
 if (VAR_9 == ((void*)0))
  FUNC_5("gid=%ju, ", (uintmax_t)VAR_5->st_gid);
 else
  FUNC_5("gid=\"%s\", ", VAR_9->gr_name);
 FUNC_5("rdev=%ju, ", (uintmax_t)VAR_5->st_rdev);
 FUNC_5("atime=");
 if (!VAR_4)
  FUNC_5("%jd", (intmax_t)VAR_5->st_atim.tv_sec);
 else {
  VAR_10 = FUNC_4(&VAR_5->st_atim.tv_sec);
  FUNC_6(VAR_7, sizeof(VAR_7), VAR_1, VAR_10);
  FUNC_5("\"%s\"", VAR_7);
 }
 if (VAR_5->st_atim.tv_nsec != 0)
  FUNC_5(".%09ld, ", VAR_5->st_atim.tv_nsec);
 else
  FUNC_5(", ");
 FUNC_5("mtime=");
 if (!VAR_4)
  FUNC_5("%jd", (intmax_t)VAR_5->st_mtim.tv_sec);
 else {
  VAR_10 = FUNC_4(&VAR_5->st_mtim.tv_sec);
  FUNC_6(VAR_7, sizeof(VAR_7), VAR_1, VAR_10);
  FUNC_5("\"%s\"", VAR_7);
 }
 if (VAR_5->st_mtim.tv_nsec != 0)
  FUNC_5(".%09ld, ", VAR_5->st_mtim.tv_nsec);
 else
  FUNC_5(", ");
 FUNC_5("ctime=");
 if (!VAR_4)
  FUNC_5("%jd", (intmax_t)VAR_5->st_ctim.tv_sec);
 else {
  VAR_10 = FUNC_4(&VAR_5->st_ctim.tv_sec);
  FUNC_6(VAR_7, sizeof(VAR_7), VAR_1, VAR_10);
  FUNC_5("\"%s\"", VAR_7);
 }
 if (VAR_5->st_ctim.tv_nsec != 0)
  FUNC_5(".%09ld, ", VAR_5->st_ctim.tv_nsec);
 else
  FUNC_5(", ");
 FUNC_5("birthtime=");
 if (!VAR_4)
  FUNC_5("%jd", (intmax_t)VAR_5->st_birthtim.tv_sec);
 else {
  VAR_10 = FUNC_4(&VAR_5->st_birthtim.tv_sec);
  FUNC_6(VAR_7, sizeof(VAR_7), VAR_1, VAR_10);
  FUNC_5("\"%s\"", VAR_7);
 }
 if (VAR_5->st_birthtim.tv_nsec != 0)
  FUNC_5(".%09ld, ", VAR_5->st_birthtim.tv_nsec);
 else
  FUNC_5(", ");
 FUNC_5("size=%jd, blksize=%ju, blocks=%jd, flags=0x%x",
  (uintmax_t)VAR_5->st_size, (uintmax_t)VAR_5->st_blksize,
  (intmax_t)VAR_5->st_blocks, VAR_5->st_flags);
 FUNC_5(" }\n");
}
