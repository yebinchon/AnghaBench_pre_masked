
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,struct passwd*) ;
 int FUNC_1 (char const*,struct passwd*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 struct passwd* FUNC_4 (struct passwd*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, struct passwd *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct passwd *VAR_5;


 if (VAR_3 && *VAR_3 == '/')
  VAR_5 = FUNC_4(VAR_2);

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 == -1)
  FUNC_3(VAR_0, "user '%s' does not exist (NIS?)", VAR_2->pw_name);
 else if (VAR_4 != 0)
  FUNC_2(VAR_0, "passwd file update");

 if (VAR_3 && *VAR_3 == '/') {
  VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_5);
  if (VAR_4 == -1)
   FUNC_5("User '%s' not found in NIS passwd", VAR_2->pw_name);
  else if (VAR_4 != 0)
   FUNC_5("NIS passwd update");

 }
}
