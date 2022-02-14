
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpasswd {scalar_t__ pw_gid; scalar_t__ pw_expire; scalar_t__ pw_change; int pw_shell; int pw_dir; int pw_name; int pw_gecos; scalar_t__ pw_uid; } ;
struct xgroup {char* gr_name; scalar_t__ gr_gid; int gr_mem; } ;
struct tm {int dummy; } ;
typedef int ebuf ;
typedef int cbuf ;


 scalar_t__ VAR_0 ;
 struct xgroup* FUNC_0 (scalar_t__) ;
 struct tm* FUNC_1 (scalar_t__*) ;
 struct xgroup* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int,char*,struct tm*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_5(struct xpasswd *VAR_6)
{
 struct xgroup *VAR_7;
 unsigned int VAR_8;
 char VAR_9[16], VAR_10[16];
 struct tm *VAR_11;

 VAR_7 = FUNC_0(VAR_6->pw_gid);
 FUNC_3(VAR_4 ? "%s:%ld:%s:%ld:%s" : "%-15s %-7ld %-15s %-7ld %s\n",
     VAR_6->pw_name, (long)VAR_6->pw_uid, VAR_7 ? VAR_7->gr_name : "",
     (long)VAR_6->pw_gid, VAR_6->pw_gecos);
 if (VAR_2) {
  for (VAR_8 = 0, VAR_7 = VAR_1; VAR_8 < VAR_3; ++VAR_8, ++VAR_7) {
   if (VAR_7->gr_gid == VAR_6->pw_gid ||
       !FUNC_2(VAR_6->pw_name, VAR_7->gr_mem))
    continue;
   FUNC_3(VAR_4 ? "%s:%s:%ld" : "%24s%-15s %-7ld\n",
       "", VAR_7->gr_name, (long)VAR_7->gr_gid);
  }
 }
 if (VAR_5) {
  FUNC_3(VAR_4 ? "%s:%s" : "%24s%s\n", "", VAR_6->pw_dir);
  FUNC_3(VAR_4 ? "%s:%s" : "%24s%s\n", "", VAR_6->pw_shell);
 }
 if (VAR_0) {
  VAR_11 = FUNC_1(&VAR_6->pw_change);
  FUNC_4(VAR_9, sizeof(VAR_9), VAR_6->pw_change ? "%F" : "0", VAR_11);
  VAR_11 = FUNC_1(&VAR_6->pw_expire);
  FUNC_4(VAR_10, sizeof(VAR_10), VAR_6->pw_expire ? "%F" : "0", VAR_11);
  FUNC_3(VAR_4 ? "%s:%s:%s" : "%24s%s %s\n", "", VAR_9, VAR_10);
 }
 if (VAR_4)
  FUNC_3("\n");
}
