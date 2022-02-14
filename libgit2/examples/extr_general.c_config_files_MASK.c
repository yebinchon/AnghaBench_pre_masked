
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int git_repository ;
typedef int git_config ;



 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*,int *,char*) ;
 int FUNC_3 (char const**,int *,char*) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char*,char const*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_0, git_repository* VAR_1)
{
 const char *VAR_2;
 char VAR_3[256];
 int32_t VAR_4;
 git_config *VAR_5;
 git_config *VAR_6;
 int VAR_7;

 FUNC_6("\n*Config Listing*\n");




 FUNC_7(VAR_3, "%s/config", VAR_0);
 FUNC_0(FUNC_4(&VAR_5, VAR_3), "opening config");

 if (FUNC_2(&VAR_4, VAR_5, "help.autocorrect") == 0)
  FUNC_6("Autocorrect: %d\n", VAR_4);

 FUNC_0(FUNC_5(&VAR_6, VAR_1), "config snapshot");
 FUNC_3(&VAR_2, VAR_6, "user.email");
 FUNC_6("Email: %s\n", VAR_2);

 VAR_7 = FUNC_2(&VAR_4, VAR_5, "help.autocorrect");
 switch (VAR_7)
 {
  case 0:
   FUNC_6("Autocorrect: %d\n", VAR_4);
   break;
  case 128:
   FUNC_6("Autocorrect: Undefined\n");
   break;
  default:
   FUNC_0(VAR_7, "get_int32 failed");
 }
 FUNC_1(VAR_5);

 FUNC_0(FUNC_5(&VAR_6, VAR_1), "config snapshot");
 VAR_7 = FUNC_3(&VAR_2, VAR_6, "user.email");
 switch (VAR_7)
 {
  case 0:
   FUNC_6("Email: %s\n", VAR_2);
   break;
  case 128:
   FUNC_6("Email: Undefined\n");
   break;
  default:
   FUNC_0(VAR_7, "get_string failed");
 }

 FUNC_1(VAR_6);
}
