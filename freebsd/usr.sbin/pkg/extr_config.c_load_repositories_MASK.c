
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char const* d_name; } ;
typedef int path ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,char const*,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_3)
{
 struct dirent *VAR_4;
 DIR *VAR_5;
 char *VAR_6;
 size_t VAR_7;
 char VAR_8[VAR_2];
 int VAR_9;

 VAR_9 = 0;

 if ((VAR_5 = FUNC_2(VAR_3)) == ((void*)0))
  return (1);

 while ((VAR_4 = FUNC_4(VAR_5))) {

  if ((VAR_7 = FUNC_7(VAR_4->d_name)) <= 5)
   continue;
  VAR_6 = &VAR_4->d_name[VAR_7 - 5];
  if (FUNC_6(VAR_6, ".conf") == 0) {
   FUNC_5(VAR_8, sizeof(VAR_8), "%s%s%s",
       VAR_3,
       VAR_3[FUNC_7(VAR_3) - 1] == '/' ? "" : "/",
       VAR_4->d_name);
   if (FUNC_0(VAR_8, VAR_1) == 0 &&
       FUNC_3(VAR_8, VAR_0)) {
    VAR_9 = 1;
    goto cleanup;
   }
  }
 }

cleanup:
 FUNC_1(VAR_5);

 return (VAR_9);
}
