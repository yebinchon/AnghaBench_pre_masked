
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository_format {int work_tree; int is_bare; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct repository_format *VAR_3 = VAR_2;

 if (FUNC_3(VAR_0, "core.bare") == 0) {
  VAR_3->is_bare = FUNC_2(VAR_0, VAR_1);
 } else if (FUNC_3(VAR_0, "core.worktree") == 0) {
  if (!VAR_1)
   return FUNC_0(VAR_0);
  FUNC_1(VAR_3->work_tree);
  VAR_3->work_tree = FUNC_4(VAR_1);
 }
 return 0;
}
