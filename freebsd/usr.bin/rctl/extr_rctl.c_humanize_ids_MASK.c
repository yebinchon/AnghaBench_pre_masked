
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int id_t ;


 int FUNC_0 (char**,char*,char const*,char const*,char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,...) ;
 struct group* FUNC_3 (int ) ;
 struct passwd* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 size_t FUNC_6 (char const*) ;
 char* FUNC_7 (char**,char*) ;
 int FUNC_8 (char const*,char**) ;

__attribute__((used)) static char *
FUNC_9(char *VAR_0)
{
 id_t VAR_1;
 struct passwd *VAR_2;
 struct group *VAR_3;
 const char *VAR_4, *VAR_5, *VAR_6;
 char *VAR_7, *VAR_8;
 int VAR_9;

 VAR_4 = FUNC_7(&VAR_0, ":");
 VAR_5 = FUNC_7(&VAR_0, ":");
 if (VAR_5 == ((void*)0))
  FUNC_2(1, "rule passed from the kernel didn't contain subject");
 if (VAR_0 != ((void*)0))
  VAR_6 = VAR_0;
 else
  VAR_6 = "";


 if (FUNC_5(VAR_4, "user") == 0) {
  VAR_1 = FUNC_8(VAR_5, &VAR_7);
  if ((size_t)(VAR_7 - VAR_5) != FUNC_6(VAR_5))
   FUNC_2(1, "malformed uid '%s'", VAR_5);
  VAR_2 = FUNC_4(VAR_1);
  if (VAR_2 != ((void*)0))
   VAR_5 = VAR_2->pw_name;
 } else if (FUNC_5(VAR_4, "group") == 0) {
  VAR_1 = FUNC_8(VAR_5, &VAR_7);
  if ((size_t)(VAR_7 - VAR_5) != FUNC_6(VAR_5))
   FUNC_2(1, "malformed gid '%s'", VAR_5);
  VAR_3 = FUNC_3(VAR_1);
  if (VAR_3 != ((void*)0))
   VAR_5 = VAR_3->gr_name;
 }

 VAR_9 = FUNC_0(&VAR_8, "%s:%s:%s", VAR_4, VAR_5, VAR_6);
 if (VAR_9 <= 0)
  FUNC_1(1, "asprintf");

 return (VAR_8);
}
