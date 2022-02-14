
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_name; int pw_gid; } ;
struct cfjail {int dummy; } ;
typedef int login_cap_t ;


 scalar_t__ VAR_0 ;
 struct passwd* FUNC_0 (char const*) ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cfjail*,char*,char const*,...) ;
 int * FUNC_5 (struct passwd const*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct cfjail *VAR_1, const char *VAR_2,
    const struct passwd **VAR_3, login_cap_t **VAR_4)
{
 const struct passwd *VAR_5;

 VAR_0 = 0;
 *VAR_3 = VAR_5 = VAR_2 ? FUNC_0(VAR_2) : FUNC_1(FUNC_2());
 if (VAR_5 == ((void*)0)) {
  if (VAR_0)
   FUNC_4(VAR_1, "getpwnam%s%s: %s", VAR_2 ? " " : "",
       VAR_2 ? VAR_2 : "", FUNC_6(VAR_0));
  else if (VAR_2)
   FUNC_4(VAR_1, "%s: no such user", VAR_2);
  else
   FUNC_4(VAR_1, "unknown uid %d", FUNC_2());
  return -1;
 }
 *VAR_4 = FUNC_5(VAR_5);
 if (*VAR_4 == ((void*)0)) {
  FUNC_4(VAR_1, "getpwclass %s: %s", VAR_5->pw_name,
      FUNC_6(VAR_0));
  return -1;
 }

 if (FUNC_3(VAR_5->pw_name, VAR_5->pw_gid) < 0) {
  FUNC_4(VAR_1, "initgroups %s: %s", VAR_5->pw_name,
      FUNC_6(VAR_0));
  return -1;
 }
 return 0;
}
