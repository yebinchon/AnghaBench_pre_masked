
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ id_t ;


 int FUNC_0 (char**,char*,char const*,...) ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,scalar_t__*,char const*) ;
 int FUNC_4 (char const*,scalar_t__*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (char**,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*) ;

__attribute__((used)) static char *
FUNC_11(const char *VAR_0, bool VAR_1)
{
 id_t VAR_2;
 const char *VAR_3, *VAR_4, *VAR_5;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = VAR_6 = FUNC_6(VAR_0);
 if (VAR_6 == ((void*)0)) {
  FUNC_9("strdup");
  return (((void*)0));
 }

 VAR_3 = FUNC_8(&VAR_6, ":");
 VAR_4 = FUNC_8(&VAR_6, ":");
 if (VAR_4 == ((void*)0)) {
  FUNC_10("malformed rule '%s': missing subject", VAR_0);
  return (((void*)0));
 }
 if (VAR_6 != ((void*)0))
  VAR_5 = VAR_6;
 else
  VAR_5 = "";

 if (FUNC_5(VAR_3, "u") == 0)
  VAR_3 = "user";
 else if (FUNC_5(VAR_3, "g") == 0)
  VAR_3 = "group";
 else if (FUNC_5(VAR_3, "p") == 0)
  VAR_3 = "process";
 else if (FUNC_5(VAR_3, "l") == 0 ||
     FUNC_5(VAR_3, "c") == 0 ||
     FUNC_5(VAR_3, "class") == 0)
  VAR_3 = "loginclass";
 else if (FUNC_5(VAR_3, "j") == 0)
  VAR_3 = "jail";

 if (VAR_1 &&
     FUNC_5(VAR_3, "user") == 0 && FUNC_7(VAR_4) > 0) {
  VAR_10 = FUNC_4(VAR_4, &VAR_2, VAR_0);
  if (VAR_10 != 0) {
   FUNC_2(VAR_9);
   return (((void*)0));
  }
  VAR_11 = FUNC_0(&VAR_8, "%s:%d:%s", VAR_3, (int)VAR_2, VAR_5);
 } else if (VAR_1 &&
     FUNC_5(VAR_3, "group") == 0 && FUNC_7(VAR_4) > 0) {
  VAR_10 = FUNC_3(VAR_4, &VAR_2, VAR_0);
  if (VAR_10 != 0) {
   FUNC_2(VAR_9);
   return (((void*)0));
  }
  VAR_11 = FUNC_0(&VAR_8, "%s:%d:%s", VAR_3, (int)VAR_2, VAR_5);
 } else {
  VAR_11 = FUNC_0(&VAR_8, "%s:%s:%s", VAR_3, VAR_4, VAR_5);
 }

 if (VAR_11 <= 0) {
  FUNC_9("asprintf");
  FUNC_2(VAR_9);
  return (((void*)0));
 }

 FUNC_2(VAR_9);

 VAR_7 = FUNC_1(VAR_8, VAR_0);
 FUNC_2(VAR_8);

 return (VAR_7);
}
