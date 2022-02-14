
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* uintmax_t ;
struct vnstat {scalar_t__ vn_type; char const* vn_mntdir; int vn_mode; char const* vn_devname; scalar_t__ vn_size; scalar_t__ vn_dev; scalar_t__ vn_fileid; scalar_t__ vn_fsid; } ;
struct procstat {int dummy; } ;
struct filestat {int fs_fflags; } ;
typedef int mode ;
typedef int intmax_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (struct procstat*,struct filestat*,struct vnstat*,char*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void
FUNC_5(struct procstat *VAR_6, struct filestat *VAR_7)
{
 struct vnstat VAR_8;
 char VAR_9[VAR_4];
 char VAR_10[15];
 const char *VAR_11;
 int VAR_12;

 VAR_11 = ((void*)0);
 VAR_12 = FUNC_2(VAR_6, VAR_7, &VAR_8, VAR_9);
 if (VAR_12 != 0)
  VAR_11 = VAR_9;
 else if (VAR_8.vn_type == VAR_0)
  VAR_11 = "bad";
 else if (VAR_8.vn_type == VAR_3)
  VAR_11 = "none";
 if (VAR_11 != ((void*)0)) {
  FUNC_1(" -         -  %10s    -", VAR_11);
  return;
 }

 if (VAR_5)
  FUNC_1(" %#5jx", (uintmax_t)VAR_8.vn_fsid);
 else if (VAR_8.vn_mntdir != ((void*)0))
  (void)FUNC_1(" %-8s", VAR_8.vn_mntdir);




 if (VAR_5)
  (void)FUNC_3(VAR_10, sizeof(VAR_10), "%o", VAR_8.vn_mode);
 else {
  FUNC_4(VAR_8.vn_mode, VAR_10);
 }
 (void)FUNC_1(" %6jd %10s", (intmax_t)VAR_8.vn_fileid, VAR_10);

 if (VAR_8.vn_type == VAR_1 || VAR_8.vn_type == VAR_2) {
  if (VAR_5 || !*VAR_8.vn_devname)
   FUNC_1(" %#6jx", (uintmax_t)VAR_8.vn_dev);
  else {
   FUNC_1(" %6s", VAR_8.vn_devname);
  }
 } else
  FUNC_1(" %6ju", (uintmax_t)VAR_8.vn_size);
 FUNC_0(VAR_7->fs_fflags);
}
