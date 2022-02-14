
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stash_info {int i_tree; int b_tree; int w_tree; int b_commit; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_3(struct stash_info *VAR_0, const char *VAR_1)
{
 if (FUNC_2(&VAR_0->b_commit, "%s^1", VAR_1) ||
     FUNC_2(&VAR_0->w_tree, "%s:", VAR_1) ||
     FUNC_2(&VAR_0->b_tree, "%s^1:", VAR_1) ||
     FUNC_2(&VAR_0->i_tree, "%s^2:", VAR_1))
  FUNC_1(FUNC_0("'%s' is not a stash-like commit"), VAR_1);
}
