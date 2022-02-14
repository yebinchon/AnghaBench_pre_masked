
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int attr; } ;
typedef TYPE_1__ git_tree_entry ;
typedef int git_tree ;
struct TYPE_9__ {int flags; int path; int repo; } ;
typedef TYPE_2__ git_submodule ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int **,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(git_submodule *VAR_2)
{
 git_tree *VAR_3 = ((void*)0);
 git_tree_entry *VAR_4 = ((void*)0);

 VAR_2->flags = VAR_2->flags &
  ~(VAR_0 |
    VAR_1);


 if (FUNC_1(&VAR_3, VAR_2->repo) < 0 ||
  FUNC_2(&VAR_4, VAR_3, VAR_2->path) < 0)
  FUNC_0();
 else
  FUNC_6(VAR_2, VAR_4->attr, FUNC_4(VAR_4));

 FUNC_3(VAR_4);
 FUNC_5(VAR_3);
 return 0;
}
