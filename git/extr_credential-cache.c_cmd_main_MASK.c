
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct option FUNC_0 () ;
 struct option FUNC_1 (int ,char*,int*,char*) ;
 struct option FUNC_2 (int ,char*,char**,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int,int) ;
 char* FUNC_5 () ;
 int FUNC_6 (int,char const**,int *,struct option*,char const* const*,int ) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const* const*,struct option*) ;

int FUNC_9(int VAR_2, const char **VAR_3)
{
 char *VAR_4 = ((void*)0);
 int VAR_5 = 900;
 const char *VAR_6;
 const char * const VAR_7[] = {
  "git credential-cache [<options>] <action>",
  ((void*)0)
 };
 struct option VAR_8[] = {
  FUNC_1(0, "timeout", &VAR_5,
       "number of seconds to cache credentials"),
  FUNC_2(0, "socket", &VAR_4, "path",
      "path of cache-daemon socket"),
  FUNC_0()
 };

 VAR_2 = FUNC_6(VAR_2, VAR_3, ((void*)0), VAR_8, VAR_7, 0);
 if (!VAR_2)
  FUNC_8(VAR_7, VAR_8);
 VAR_6 = VAR_3[0];

 if (!VAR_4)
  VAR_4 = FUNC_5();
 if (!VAR_4)
  FUNC_3("unable to find a suitable socket path; use --socket");

 if (!FUNC_7(VAR_6, "exit"))
  FUNC_4(VAR_4, VAR_6, VAR_5, 0);
 else if (!FUNC_7(VAR_6, "get") || !FUNC_7(VAR_6, "erase"))
  FUNC_4(VAR_4, VAR_6, VAR_5, VAR_0);
 else if (!FUNC_7(VAR_6, "store"))
  FUNC_4(VAR_4, VAR_6, VAR_5, VAR_0|VAR_1);
 else
  ;

 return 0;
}
