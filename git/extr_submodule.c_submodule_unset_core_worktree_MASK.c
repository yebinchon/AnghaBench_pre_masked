
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int path; int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char*,int *) ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (char*,int ,int ) ;

void FUNC_6(const struct submodule *VAR_0)
{
 char *VAR_1 = FUNC_5("%s/modules/%s/config",
        FUNC_2(), VAR_0->name);

 if (FUNC_3(VAR_1, "core.worktree", ((void*)0)))
  FUNC_4(FUNC_0("Could not unset core.worktree setting in submodule '%s'"),
     VAR_0->path);

 FUNC_1(VAR_1);
}
