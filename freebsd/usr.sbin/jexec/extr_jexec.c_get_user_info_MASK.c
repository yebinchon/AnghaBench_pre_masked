
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* uid_t ;
struct passwd {char const* pw_name; int pw_gid; } ;
typedef int login_cap_t ;


 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,char const*) ;
 struct passwd* FUNC_2 (char const*) ;
 struct passwd* FUNC_3 (char const*) ;
 char* FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 int * FUNC_6 (struct passwd const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_1, const struct passwd **VAR_2,
    login_cap_t **VAR_3)
{
 uid_t VAR_4;
 const struct passwd *VAR_5;

 VAR_0 = 0;
 if (VAR_1) {
  VAR_5 = FUNC_2(VAR_1);
  if (VAR_5 == ((void*)0)) {
   if (VAR_0)
    FUNC_0(1, "getpwnam: %s", VAR_1);
   else
    FUNC_1(1, "%s: no such user", VAR_1);
  }
 } else {
  VAR_4 = FUNC_4();
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 == ((void*)0)) {
   if (VAR_0)
    FUNC_0(1, "getpwuid: %d", VAR_4);
   else
    FUNC_1(1, "unknown uid: %d", VAR_4);
  }
 }
 *VAR_2 = VAR_5;
 *VAR_3 = FUNC_6(VAR_5);
 if (*VAR_3 == ((void*)0))
  FUNC_0(1, "getpwclass: %s", VAR_5->pw_name);
 if (FUNC_5(VAR_5->pw_name, VAR_5->pw_gid) < 0)
  FUNC_0(1, "initgroups: %s", VAR_5->pw_name);
}
