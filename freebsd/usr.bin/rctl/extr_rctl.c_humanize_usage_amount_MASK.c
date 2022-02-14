
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,char const*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int ,char*,int ,int) ;
 scalar_t__ FUNC_5 (char const*,int *) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static char *
FUNC_8(char *VAR_3)
{
 int64_t VAR_4;
 const char *VAR_5, *VAR_6;
 char *VAR_7, *VAR_8, VAR_9[6], *VAR_10;
 int VAR_11;

 VAR_10 = VAR_7 = FUNC_6(VAR_3);
 if (VAR_7 == ((void*)0))
  FUNC_2(1, "strdup");

 VAR_5 = FUNC_7(&VAR_7, "=");
 VAR_6 = VAR_7;

 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_6 != ((void*)0));

 if (FUNC_5(VAR_6, &VAR_4) != 0 ||
     FUNC_4(VAR_9, sizeof(VAR_9), VAR_4, "", VAR_0,
     VAR_1 | VAR_2) == -1) {
  FUNC_3(VAR_10);
  return (VAR_3);
 }

 VAR_11 = FUNC_0(&VAR_8, "%s=%s", VAR_5, VAR_9);
 if (VAR_11 <= 0)
  FUNC_2(1, "asprintf");

 FUNC_3(VAR_10);
 return (VAR_8);
}
