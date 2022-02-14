
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int nr; } ;
struct option {int dummy; } ;
struct credential {int dummy; } ;


 struct credential VAR_0 ;
 struct option FUNC_0 () ;
 struct option FUNC_1 (int ,char*,char**,char*,char*) ;
 struct string_list VAR_1 ;
 scalar_t__ FUNC_2 (struct credential*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (struct string_list*,struct credential*) ;
 int FUNC_6 (int,char const**,int *,struct option*,char const* const*,int ) ;
 int FUNC_7 (struct string_list*,struct credential*) ;
 int VAR_2 ;
 int FUNC_8 (struct string_list*,struct credential*) ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (struct string_list*,char*) ;
 int FUNC_11 (struct string_list*,char*) ;
 int FUNC_12 (struct string_list*,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char const* const*,struct option*) ;
 char* FUNC_15 (char*) ;

int FUNC_16(int VAR_3, const char **VAR_4)
{
 const char * const VAR_5[] = {
  "git credential-store [<options>] <action>",
  ((void*)0)
 };
 const char *VAR_6;
 struct credential VAR_7 = VAR_0;
 struct string_list VAR_8 = VAR_1;
 char *VAR_9 = ((void*)0);
 struct option VAR_10[] = {
  FUNC_1(0, "file", &VAR_9, "path",
      "fetch and store credentials in <path>"),
  FUNC_0()
 };

 FUNC_13(077);

 VAR_3 = FUNC_6(VAR_3, (const char **)VAR_4, ((void*)0), VAR_10, VAR_5, 0);
 if (VAR_3 != 1)
  FUNC_14(VAR_5, VAR_10);
 VAR_6 = VAR_4[0];

 if (VAR_9) {
  FUNC_10(&VAR_8, VAR_9);
 } else {
  if ((VAR_9 = FUNC_4("~/.git-credentials", 0)))
   FUNC_11(&VAR_8, VAR_9);
  VAR_9 = FUNC_15("credentials");
  if (VAR_9)
   FUNC_11(&VAR_8, VAR_9);
 }
 if (!VAR_8.nr)
  FUNC_3("unable to set up default path; use --file");

 if (FUNC_2(&VAR_7, VAR_2) < 0)
  FUNC_3("unable to read credential");

 if (!FUNC_9(VAR_6, "get"))
  FUNC_5(&VAR_8, &VAR_7);
 else if (!FUNC_9(VAR_6, "erase"))
  FUNC_7(&VAR_8, &VAR_7);
 else if (!FUNC_9(VAR_6, "store"))
  FUNC_8(&VAR_8, &VAR_7);
 else
  ;

 FUNC_12(&VAR_8, 0);
 return 0;
}
