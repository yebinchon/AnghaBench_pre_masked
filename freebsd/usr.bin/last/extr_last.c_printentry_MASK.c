
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {int tv_sec; } ;
struct utmpx {int ut_type; TYPE_1__ ut_tv; int ut_host; int ut_line; int ut_user; } ;
struct tm {int dummy; } ;
struct idtab {int logout; } ;
typedef int ct ;







 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct tm* FUNC_2 (int*) ;
 struct tm* FUNC_3 (int*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,int,char*,struct tm*) ;
 int VAR_4 ;
 int FUNC_5 (char*,char*,long) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_9(struct utmpx *VAR_6, struct idtab *VAR_7)
{
 char VAR_8[80];
 struct tm *VAR_9;
 time_t VAR_10;
 time_t VAR_11;

 if (VAR_2 != -1 && !VAR_2--)
  FUNC_1(0);
 FUNC_8("last");
 VAR_11 = VAR_6->ut_tv.tv_sec;
 VAR_9 = FUNC_3(&VAR_11);
 (void) FUNC_4(VAR_8, sizeof(VAR_8), VAR_1 ?
     (VAR_5 ? "%a %e %b %Y %R" : "%a %e %b %R") :
     (VAR_5 ? "%a %b %e %Y %R" : "%a %b %e %R"), VAR_9);
 switch (VAR_6->ut_type) {
 case 132:
  FUNC_7("{:user/%-42s/%s}", "boot time");
  break;
 case 129:
  FUNC_7("{:user/%-42s/%s}", "shutdown time");
  break;
 case 130:
  FUNC_7("{:user/%-42s/%s}", "old time");
  break;
 case 131:
  FUNC_7("{:user/%-42s/%s}", "new time");
  break;
 case 128:
  FUNC_7("{:user/%-10s/%s} {:tty/%-8s/%s} {:from/%-22.22s/%s}",
      VAR_6->ut_user, VAR_6->ut_line, VAR_6->ut_host);
  break;
 }
 FUNC_5("seconds", "%lu", (unsigned long)VAR_11);
 FUNC_7(FUNC_0(" {:login-time/%s%c/%s}"), VAR_8, VAR_7 == ((void*)0) ? '\n' : ' ');
 if (VAR_7 == ((void*)0))
  goto end;
 if (!VAR_7->logout) {
  FUNC_7("  {:logout-time/still logged in}\n");
  goto end;
 }
 if (VAR_7->logout < 0) {
  VAR_7->logout = -VAR_7->logout;
  FUNC_7("- {:logout-reason/%s}", VAR_0);
 } else {
  VAR_9 = FUNC_3(&VAR_7->logout);
  (void) FUNC_4(VAR_8, sizeof(VAR_8), "%R", VAR_9);
  FUNC_5("seconds", "%lu", (unsigned long)VAR_7->logout);
  FUNC_7(FUNC_0("- {:logout-time/%s}"), VAR_8);
 }
 VAR_10 = VAR_7->logout - VAR_6->ut_tv.tv_sec;
 FUNC_5("seconds", "%ld", (long)VAR_10);
 if (VAR_3) {
  FUNC_7("  ({:session-length/%8ld})\n", (long)VAR_10);
 } else {
  VAR_9 = FUNC_2(&VAR_10);
  (void) FUNC_4(VAR_8, sizeof(VAR_8), VAR_4 >= 8 ? "%T" : "%R", VAR_9);
  if (VAR_10 < 86400)
   FUNC_7(FUNC_0("  ({:session-length/%s})\n"), VAR_8);
  else
   FUNC_7(FUNC_0(" ({:session-length/%ld+%s})\n"),
       (long)VAR_10 / 86400, VAR_8);
 }

end:
 FUNC_6("last");
}
