
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; scalar_t__ pw_gid; } ;
struct group {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct group* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8 (char *VAR_1, char *VAR_2) {
  struct passwd *VAR_3;

  if (FUNC_3() == 0 || FUNC_0() == 0) {
    if (VAR_1 == 0 || *VAR_1 == '\0') {
      VAR_1 = VAR_0;
    }
    if ((VAR_3 = FUNC_2 (VAR_1)) == 0) {
      FUNC_4 ("change_user_group: can't find the user %s to switch to\n", VAR_1);
      return -1;
    }
    gid_t VAR_4 = VAR_3->pw_gid;
    if (FUNC_6 (1, &VAR_4) < 0) {
      FUNC_4 ("change_user_group: failed to clear supplementary groups list: %m\n");
      return -1;
    }

    if (VAR_2) {
      struct group *VAR_5 = FUNC_1 (VAR_2);
      if (VAR_5 == ((void*)0)) {
        FUNC_4 ("change_user_group: can't find the group %s to switch to\n", VAR_2);
        return -1;
      }
      VAR_4 = VAR_5->gr_gid;
    }

    if (FUNC_5 (VAR_4) < 0) {
      FUNC_4 ("change_user_group: setgid (%d) failed. %m\n", (int) VAR_4);
      return -1;
    }

    if (FUNC_7 (VAR_3->pw_uid) < 0) {
      FUNC_4 ("change_user_group: failed to assume identity of user %s\n", VAR_1);
      return -1;
    }
  }
  return 0;
}
