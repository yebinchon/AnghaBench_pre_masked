
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; int commit; } ;
typedef TYPE_1__ git_blame__origin ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(git_blame__origin *VAR_0, git_blame__origin *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 1;
 if (FUNC_1(FUNC_0(VAR_0->commit), FUNC_0(VAR_1->commit)))
  return 0;
 return 0 == FUNC_2(VAR_0->path, VAR_1->path);
}
