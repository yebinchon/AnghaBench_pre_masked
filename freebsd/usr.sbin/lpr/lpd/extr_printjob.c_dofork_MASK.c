
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int printer; int daemon_user; } ;
struct passwd {int pw_gid; int pw_name; } ;
typedef int pid_t ;




 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct passwd* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_9(const struct printer *VAR_4, int VAR_5)
{
 pid_t VAR_6;
 int VAR_7, VAR_8;
 struct passwd *VAR_9;

 VAR_6 = -1;
 if (VAR_2 == ((void*)0)) {
  VAR_9 = FUNC_2(VAR_4->daemon_user);
  if (VAR_9 == ((void*)0)) {
   FUNC_8(VAR_0, "%s: Can't lookup default daemon uid (%ld) in password file",
       VAR_4->printer, VAR_4->daemon_user);
   goto error_ret;
  }
  VAR_2 = FUNC_7(VAR_9->pw_name);
  VAR_1 = VAR_9->pw_gid;
 }

 for (VAR_7 = 0; VAR_7 < 20; VAR_7++) {
  VAR_6 = FUNC_1();
  if (VAR_6 < 0) {
   FUNC_6((unsigned)(VAR_7*VAR_7));
   continue;
  }



  if (VAR_6 == 0) {
   VAR_3 = 0;
   VAR_8 = FUNC_3(VAR_2, VAR_1);
   if (VAR_8) {
    FUNC_8(VAR_0, "%s: initgroups(%s,%u): %m",
        VAR_4->printer, VAR_2, VAR_1);
    break;
   }
   VAR_8 = FUNC_4(VAR_1);
   if (VAR_8) {
    FUNC_8(VAR_0, "%s: setgid(%u): %m",
        VAR_4->printer, VAR_1);
    break;
   }
   VAR_8 = FUNC_5(VAR_4->daemon_user);
   if (VAR_8) {
    FUNC_8(VAR_0, "%s: setuid(%ld): %m",
        VAR_4->printer, VAR_4->daemon_user);
    break;
   }
  }
  return (VAR_6);
 }






error_ret:
 if (VAR_6 == 0) {
  FUNC_8(VAR_0, "%s: dofork(): aborting child process...",
      VAR_4->printer);
  FUNC_0(1);
 }
 FUNC_8(VAR_0, "%s: dofork(): failure in fork", VAR_4->printer);

 FUNC_6(1);
 switch (VAR_5) {
 case 128:
  return (-1);
 default:
  FUNC_8(VAR_0, "bad action (%d) to dofork", VAR_5);

 case 129:
  FUNC_0(1);
 }

}
