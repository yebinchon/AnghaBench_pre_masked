
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct stat*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static char *FUNC_6(void)
{
 struct stat VAR_0;
 char *VAR_1, *VAR_2;
 VAR_1 = FUNC_1("~/.git-credential-cache", 0);
 if (VAR_1 && !FUNC_3(VAR_1, &VAR_0) && FUNC_0(VAR_0.st_mode))
  VAR_2 = FUNC_5("%s/socket", VAR_1);
 else
  VAR_2 = FUNC_4("credential/socket");
 FUNC_2(VAR_1);
 return VAR_2;
}
