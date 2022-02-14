
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,char const*,char const*,char const*,char const*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int ,char*,int ,int) ;
 scalar_t__ FUNC_5 (char const*,int *) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (char**,char*) ;

__attribute__((used)) static char *
FUNC_9(char *VAR_3)
{
 int64_t VAR_4;
 const char *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 char *VAR_11, *VAR_12, VAR_13[6], *VAR_14;
 int VAR_15;

 VAR_14 = VAR_11 = FUNC_6(VAR_3);
 if (VAR_11 == ((void*)0))
  FUNC_2(1, "strdup");

 VAR_5 = FUNC_8(&VAR_11, ":");
 VAR_6 = FUNC_8(&VAR_11, ":");
 VAR_7 = FUNC_8(&VAR_11, ":");
 VAR_8 = FUNC_8(&VAR_11, "=/");
 VAR_9 = FUNC_8(&VAR_11, "/");
 VAR_10 = VAR_11;

 if (VAR_9 == ((void*)0) || FUNC_7(VAR_9) == 0 ||
     FUNC_5(VAR_9, &VAR_4) != 0) {
  FUNC_3(VAR_14);
  return (VAR_3);
 }

 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_6 != ((void*)0));
 FUNC_1(VAR_7 != ((void*)0));
 FUNC_1(VAR_8 != ((void*)0));

 if (FUNC_4(VAR_13, sizeof(VAR_13), VAR_4, "", VAR_0,
     VAR_1 | VAR_2) == -1)
  FUNC_2(1, "humanize_number");

 if (VAR_10 == ((void*)0)) {
  VAR_15 = FUNC_0(&VAR_12, "%s:%s:%s:%s=%s",
      VAR_5, VAR_6, VAR_7, VAR_8, VAR_13);
 } else {
  VAR_15 = FUNC_0(&VAR_12, "%s:%s:%s:%s=%s/%s",
      VAR_5, VAR_6, VAR_7, VAR_8, VAR_13, VAR_10);
 }

 if (VAR_15 <= 0)
  FUNC_2(1, "asprintf");

 FUNC_3(VAR_14);
 return (VAR_12);
}
