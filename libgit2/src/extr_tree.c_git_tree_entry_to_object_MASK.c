
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oid; } ;
typedef TYPE_1__ git_tree_entry ;
typedef int git_repository ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **,int *,int ,int ) ;

int FUNC_2(
 git_object **VAR_1,
 git_repository *VAR_2,
 const git_tree_entry *VAR_3)
{
 FUNC_0(VAR_3 && VAR_1);
 return FUNC_1(VAR_1, VAR_2, VAR_3->oid, VAR_0);
}
