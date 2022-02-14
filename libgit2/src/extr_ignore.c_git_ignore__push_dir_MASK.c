
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
struct TYPE_5__ {TYPE_4__ dir; int ign_path; int depth; } ;
typedef TYPE_1__ git_ignores ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,char const*) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ) ;

int FUNC_2(git_ignores *VAR_1, const char *VAR_2)
{
 if (FUNC_0(&VAR_1->dir, VAR_1->dir.ptr, VAR_2) < 0)
  return -1;

 VAR_1->depth++;

 return FUNC_1(
  VAR_1, &VAR_1->ign_path, VAR_1->dir.ptr, VAR_0);
}
