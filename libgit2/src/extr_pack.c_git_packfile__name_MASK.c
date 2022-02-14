
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,int,char const*) ;
 int FUNC_2 (char*,int *,int ) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(char **VAR_1, const char *VAR_2)
{
 size_t VAR_3;
 git_buf VAR_4 = VAR_0;

 VAR_3 = FUNC_3(VAR_2);

 if (VAR_3 < FUNC_3(".idx"))
  return FUNC_2("invalid packfile path", ((void*)0), 0);

 if (FUNC_1(&VAR_4, "%.*s.pack", (int)(VAR_3 - FUNC_3(".idx")), VAR_2) < 0)
  return -1;

 *VAR_1 = FUNC_0(&VAR_4);
 return 0;
}
