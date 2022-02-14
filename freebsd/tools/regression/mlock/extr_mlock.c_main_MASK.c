
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {scalar_t__ pw_uid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 struct passwd* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int) ;
 char* FUNC_5 (int *,int,int,int ,int,int ) ;
 scalar_t__ FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

int
FUNC_9(int VAR_7, char *VAR_8[])
{
 struct passwd *VAR_9;
 int VAR_10;
 char *VAR_11;

 if (FUNC_1() != 0)
  FUNC_0(-1, "mlock must run as root");

 VAR_6 = 0;
 VAR_9 = FUNC_3(VAR_3);
 if (VAR_9 == ((void*)0) && VAR_6 == 0)
  FUNC_0(-1, "getpwnam: user \"%s\" not found", VAR_3);
 if (VAR_9 == ((void*)0))
  FUNC_0(-1, "getpwnam: %s", FUNC_8(VAR_6));
 if (VAR_9->pw_uid == 0)
  FUNC_0(-1, "getpwnam: user \"%s\" has uid 0", VAR_3);

 VAR_10 = FUNC_2();
 VAR_11 = FUNC_5(((void*)0), VAR_10, VAR_4|VAR_5, VAR_1, -1, 0);
 if (VAR_11 == VAR_2)
  FUNC_0(-1, "mmap: %s", FUNC_8(VAR_6));

 if (FUNC_4(VAR_11, VAR_10) < 0)
  FUNC_0(-1, "mlock privileged: %s", FUNC_8(VAR_6));

 if (FUNC_6(VAR_11, VAR_10) < 0)
  FUNC_0(-1, "munlock privileged: %s", FUNC_8(VAR_6));

 if (FUNC_7(VAR_9->pw_uid) < 0)
  FUNC_0(-1, "seteuid: %s", FUNC_8(VAR_6));

 if (FUNC_4(VAR_11, VAR_10) == 0)
  FUNC_0(-1, "mlock unprivileged: succeeded but shouldn't have");
 if (VAR_6 != VAR_0)
  FUNC_0(-1, "mlock unprivileged: %s", FUNC_8(VAR_6));

 if (FUNC_6(VAR_11, VAR_10) == 0)
  FUNC_0(-1, "munlock unprivileged: succeeded but shouldn't have");
 if (VAR_6 != VAR_0)
  FUNC_0(-1, "munlock unprivileged: %s", FUNC_8(VAR_6));

 return (0);
}
