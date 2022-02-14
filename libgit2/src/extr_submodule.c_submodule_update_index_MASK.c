
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int path; int repo; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int **,int ) ;
 int FUNC_2 (TYPE_1__*,int const*) ;

__attribute__((used)) static int FUNC_3(git_submodule *VAR_2)
{
 git_index *VAR_3;
 const git_index_entry *VAR_4;

 if (FUNC_1(&VAR_3, VAR_2->repo) < 0)
  return -1;

 VAR_2->flags = VAR_2->flags &
  ~(VAR_0 |
    VAR_1);

 if (!(VAR_4 = FUNC_0(VAR_3, VAR_2->path, 0)))
  return 0;

 FUNC_2(VAR_2, VAR_4);

 return 0;
}
