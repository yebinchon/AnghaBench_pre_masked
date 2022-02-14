
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int member_0; } ;
struct TYPE_5__ {TYPE_2__ member_0; } ;
struct TYPE_7__ {char* member_3; int member_2; TYPE_1__ member_1; int member_0; } ;
typedef TYPE_3__ git_tree_update ;
typedef int git_tree ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int *,int,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;

void FUNC_5(void)
{
 git_tree *VAR_3;
 git_oid VAR_4, VAR_5;
 git_tree_update VAR_6[] = {
  {VAR_1, {{0}}, VAR_0, "submodule"},
 };


 FUNC_0(FUNC_1(&VAR_5, "396c7f1adb7925f51ba13a75f48252f44c5a14a2"));
 FUNC_0(FUNC_4(&VAR_3, VAR_2, &VAR_5));
 FUNC_0(FUNC_2(&VAR_4, VAR_2, VAR_3, 1, VAR_6));

 FUNC_3(VAR_3);
}
