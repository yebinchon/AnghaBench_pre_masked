
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; scalar_t__ is_current; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,int ) ;
 struct worktree* FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*,char*,char const**) ;

void FUNC_4(const char *VAR_0, int VAR_1)
{
 const struct worktree *VAR_2;

 VAR_2 = FUNC_2("HEAD", VAR_0);
 if (!VAR_2 || (VAR_1 && VAR_2->is_current))
  return;
 FUNC_3(VAR_0, "refs/heads/", &VAR_0);
 FUNC_1(FUNC_0("'%s' is already checked out at '%s'"),
     VAR_0, VAR_2->path);
}
