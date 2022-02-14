
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; int pw_gid; } ;
typedef int gid_t ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct passwd* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int *) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8 (char *VAR_1) {
  struct passwd *VAR_2;

  if (FUNC_2() == 0 || FUNC_0() == 0) {
    if (VAR_1 == 0 || *VAR_1 == '\0') {
      VAR_1 = VAR_0;


    }
    if ((VAR_2 = FUNC_1 (VAR_1)) == 0) {
      FUNC_4 ("can't find the user %s to switch to\n", VAR_1);
      return -1;
    }
    gid_t VAR_3 = VAR_2->pw_gid;
    if (FUNC_6(1, &VAR_3) < 0) {
      FUNC_4 ("failed to clear supplementary groups list: %m\n");
      return -1;
    }
    if (FUNC_3(VAR_1, VAR_3) != 0) {
      FUNC_4 ("failed to load groups of user %s: %m\n", VAR_1);
      return -1;
    }
    if (FUNC_5 (VAR_2->pw_gid) < 0 || FUNC_7 (VAR_2->pw_uid) < 0) {
      FUNC_4 ("failed to assume identity of user %s\n", VAR_1);
      return -1;
    }
  }
  return 0;
}
