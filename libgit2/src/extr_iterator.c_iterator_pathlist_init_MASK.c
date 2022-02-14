
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t count; int * strings; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_6__ {int pathlist; } ;
typedef TYPE_2__ git_iterator ;


 scalar_t__ FUNC_0 (int *,size_t,int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(git_iterator *VAR_0, git_strarray *VAR_1)
{
 size_t VAR_2;

 if (FUNC_0(&VAR_0->pathlist, VAR_1->count, ((void*)0)) < 0)
  return -1;

 for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++) {
  if (!VAR_1->strings[VAR_2])
   continue;

  if (FUNC_1(&VAR_0->pathlist, VAR_1->strings[VAR_2]) < 0)
   return -1;
 }

 return 0;
}
