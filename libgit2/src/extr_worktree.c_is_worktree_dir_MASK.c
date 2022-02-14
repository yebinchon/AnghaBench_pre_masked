
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *,char*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_1)
{
 git_buf VAR_2 = VAR_0;
 int VAR_3;

 if (FUNC_1(&VAR_2, VAR_1) < 0)
  return -1;

 VAR_3 = FUNC_2(&VAR_2, "commondir")
  && FUNC_2(&VAR_2, "gitdir")
  && FUNC_2(&VAR_2, "HEAD");

 FUNC_0(&VAR_2);
 return VAR_3;
}
