
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char**) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(char **VAR_3, const char *VAR_4, char VAR_5)
{
 FUNC_2("%s ", VAR_4);
 FUNC_0(VAR_2);

 if (!FUNC_3(VAR_3) && !VAR_5) {
  FUNC_1(VAR_1, "Could not read response: %s", FUNC_4(VAR_0));
  return -1;
 }

 return 0;
}
