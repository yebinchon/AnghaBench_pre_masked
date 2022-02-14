
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (int *,char const*,char const*,int *) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int FUNC_2(git_buf *VAR_0, const char *VAR_1, const char *VAR_2)
{

 if (VAR_2[0] == '~' && VAR_2[1] == '/')
  return FUNC_1(VAR_0, &VAR_2[1]);

 return FUNC_0(VAR_0, VAR_2, VAR_1, ((void*)0));
}
