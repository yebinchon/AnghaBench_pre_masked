
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**,char*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2, char **VAR_3) {
 const char *VAR_4, *VAR_5;
 char *VAR_6, *VAR_7;

 VAR_6 = FUNC_2("");
 VAR_4 = VAR_2;
 while ((VAR_5 = FUNC_4(VAR_4, "%m")) != ((void*)0)) {
  FUNC_0(&VAR_7, "%s%.*s%d", VAR_6, (int)(VAR_5 - VAR_4),
      VAR_4, FUNC_3(VAR_1));
  FUNC_1(VAR_6);
  if (VAR_7 == ((void*)0)) {
   VAR_1 = VAR_0;
   return (-1);
  }
  VAR_6 = VAR_7;
  VAR_4 = VAR_5 + 2;
 }

 if (*VAR_4 != '\0') {
  FUNC_0(&VAR_7, "%s%s", VAR_6, VAR_4);
  FUNC_1(VAR_6);
  if (VAR_7 == ((void*)0)) {
   VAR_1 = VAR_0;
   return (-1);
  }
  VAR_6 = VAR_7;
 }

 *VAR_3 = VAR_6;
 return (0);
}
