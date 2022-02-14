
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int map; } ;
typedef TYPE_1__ git_treebuilder ;
typedef int git_tree_entry ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*) ;
 int * FUNC_3 (TYPE_1__*,char const*) ;

int FUNC_4(git_treebuilder *VAR_0, const char *VAR_1)
{
 git_tree_entry *VAR_2 = FUNC_3(VAR_0, VAR_1);

 if (VAR_2 == ((void*)0))
  return FUNC_2("failed to remove entry: file isn't in the tree", VAR_1);

 FUNC_0(VAR_0->map, VAR_1);
 FUNC_1(VAR_2);

 return 0;
}
