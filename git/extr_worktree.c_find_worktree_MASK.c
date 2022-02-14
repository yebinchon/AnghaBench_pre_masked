
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; } ;


 struct worktree* FUNC_0 (struct worktree**,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char const*,int ) ;

struct worktree *FUNC_6(struct worktree **VAR_0,
          const char *VAR_1,
          const char *VAR_2)
{
 struct worktree *VAR_3;
 char *VAR_4;
 char *VAR_5 = ((void*)0);

 if ((VAR_3 = FUNC_0(VAR_0, VAR_2)))
  return VAR_3;

 if (VAR_1)
  VAR_2 = VAR_5 = FUNC_3(VAR_1, VAR_2);
 VAR_4 = FUNC_5(VAR_2, 0);
 if (!VAR_4) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }
 for (; *VAR_0; VAR_0++) {
  const char *VAR_6 = FUNC_4((*VAR_0)->path);

  if (VAR_6 && !FUNC_2(VAR_4, VAR_6))
   break;
 }
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);
 return *VAR_0;
}
