
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char const*) ;

int FUNC_5(git_buf *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_1 && VAR_2);

 FUNC_1(VAR_1);

 if (VAR_2[0] == '~') {
  if (VAR_2[1] != '\0' && VAR_2[1] != '/') {
   FUNC_3(VAR_0, "retrieving a homedir by name is not supported");
   return -1;
  }

  return FUNC_4(VAR_1, VAR_2[1] ? &VAR_2[2] : ((void*)0));
 }

 return FUNC_2(VAR_1, VAR_2);
}
