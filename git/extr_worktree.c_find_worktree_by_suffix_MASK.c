
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {char* path; } ;


 int FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static struct worktree *FUNC_3(struct worktree **VAR_0,
      const char *VAR_1)
{
 struct worktree *VAR_2 = ((void*)0);
 int VAR_3 = 0, VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4)
  return ((void*)0);

 for (; *VAR_0 && VAR_3 < 2; VAR_0++) {
  const char *VAR_5 = (*VAR_0)->path;
  int VAR_6 = FUNC_2(VAR_5);
  int VAR_7 = VAR_6 - VAR_4;


  if ((!VAR_7 || (VAR_7 > 0 && FUNC_1(VAR_5[VAR_7 - 1]))) &&
      !FUNC_0(VAR_1, VAR_5 + VAR_7)) {
   VAR_2 = *VAR_0;
   VAR_3++;
  }
 }
 return VAR_3 == 1 ? VAR_2 : ((void*)0);
}
