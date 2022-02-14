
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct worktree *const *VAR_2 = VAR_0;
 const struct worktree *const *VAR_3 = VAR_1;
 return FUNC_0((*VAR_2)->path, (*VAR_3)->path);
}
