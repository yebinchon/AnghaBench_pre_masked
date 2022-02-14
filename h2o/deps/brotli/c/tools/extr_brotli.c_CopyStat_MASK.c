
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct utimbuf {int modtime; int actime; } ;
struct stat {int st_mode; int st_uid; int st_gid; int st_mtime; int st_atime; } ;
typedef int gid_t ;


 char* FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int VAR_4 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char const*,struct utimbuf*) ;

__attribute__((used)) static void FUNC_7(const char* VAR_5, const char* VAR_6) {
  struct stat VAR_7;
  struct utimbuf VAR_8;
  int VAR_9;
  if (VAR_5 == 0 || VAR_6 == 0) {
    return;
  }
  if (FUNC_4(VAR_5, &VAR_7) != 0) {
    return;
  }
  VAR_8.actime = VAR_7.st_atime;
  VAR_8.modtime = VAR_7.st_mtime;
  FUNC_6(VAR_6, &VAR_8);
  VAR_9 = FUNC_1(VAR_6, VAR_7.st_mode & (VAR_2 | VAR_0 | VAR_1));
  if (VAR_9 != 0) {
    FUNC_3(VAR_4, "setting access bits failed for [%s]: %s\n",
            FUNC_0(VAR_6), FUNC_5(VAR_3));
  }
  VAR_9 = FUNC_2(VAR_6, (uid_t)-1, VAR_7.st_gid);
  if (VAR_9 != 0) {
    FUNC_3(VAR_4, "setting group failed for [%s]: %s\n",
            FUNC_0(VAR_6), FUNC_5(VAR_3));
  }
  VAR_9 = FUNC_2(VAR_6, VAR_7.st_uid, (gid_t)-1);
  if (VAR_9 != 0) {
    FUNC_3(VAR_4, "setting user failed for [%s]: %s\n",
            FUNC_0(VAR_6), FUNC_5(VAR_3));
  }
}
