
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int times ;
struct timeval {int tv_sec; } ;
struct stat {int st_mode; int st_mtime; int st_atime; int st_gid; int st_uid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (char*,struct timeval*) ;
 int FUNC_4 (struct timeval*,int ,int) ;
 scalar_t__ FUNC_5 (char*,struct timeval*) ;
 int FUNC_6 (int,char*,char*) ;

int FUNC_7 (char *VAR_2, struct stat *VAR_3) {
  if (!FUNC_0 (VAR_3->st_mode)) {
    if (FUNC_1 (VAR_2, VAR_3->st_mode) < 0) {
      FUNC_6 (1, "chmod for %s failed. %m\n", VAR_2);
      return -1;
    }
  }
  if (FUNC_2 (VAR_2, VAR_3->st_uid, VAR_3->st_gid) < 0) {
    FUNC_6 (1, "lchown for %s failed. %m\n", VAR_2);
    return -1;
  }
  struct timeval VAR_4[2];
  FUNC_4 (VAR_4, 0, sizeof (VAR_4));
  VAR_4[0].tv_sec = VAR_3->st_atime;
  VAR_4[1].tv_sec = VAR_3->st_mtime;
  VAR_1 = 0;
  if (FUNC_3 (VAR_2, VAR_4) < 0) {
    int VAR_5 = VAR_1;
    FUNC_6 (1, "lutimes for %s failed. %m\n", VAR_2);
    if (VAR_5 == VAR_0 && !FUNC_0 (VAR_3->st_mode)) {
      if (FUNC_5 (VAR_2, VAR_4) < 0) {
        FUNC_6 (1, "utimes for %s failed. %m\n", VAR_2);
        return -3;
      }
      VAR_1 = 0;
      return 0;
    }
    return -2;
  }
  return 0;
}
