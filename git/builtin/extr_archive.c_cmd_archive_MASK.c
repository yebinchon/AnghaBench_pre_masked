
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (char,char*,char const**,int ) ;
 struct option FUNC_3 (int ,char*,char const**,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char const**,char const*,struct option*,int *,int ) ;
 int FUNC_7 (int,char const**,char const*,char const*,char const*) ;
 int FUNC_8 (int ,int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int,char const**,char const*,int ,char const*,int ) ;

int FUNC_10(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 const char *VAR_8 = "git-upload-archive";
 const char *VAR_9 = ((void*)0);
 const char *VAR_10 = ((void*)0);
 struct option VAR_11[] = {
  FUNC_2('o', "output", &VAR_9,
        FUNC_0("write the archive to this file")),
  FUNC_3(0, "remote", &VAR_10, FUNC_0("repo"),
   FUNC_0("retrieve the archive from remote repository <repo>")),
  FUNC_3(0, "exec", &VAR_8, FUNC_0("command"),
   FUNC_0("path to the remote git-upload-archive command")),
  FUNC_1()
 };

 VAR_5 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_11, ((void*)0),
        VAR_1);

 FUNC_5();

 if (VAR_9)
  FUNC_4(VAR_9);

 if (VAR_10)
  return FUNC_7(VAR_5, VAR_6, VAR_10, VAR_8, VAR_9);

 FUNC_8(VAR_3, ((void*)0), VAR_2, VAR_0);

 return FUNC_9(VAR_5, VAR_6, VAR_7, VAR_4, VAR_9, 0);
}
