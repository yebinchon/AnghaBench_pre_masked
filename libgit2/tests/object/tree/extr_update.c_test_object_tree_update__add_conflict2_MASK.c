
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int member_0; } ;
struct TYPE_5__ {TYPE_2__ member_0; } ;
struct TYPE_7__ {char* member_3; int id; int member_2; TYPE_1__ member_1; int member_0; } ;
typedef TYPE_3__ git_tree_update ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int *,int,TYPE_3__*) ;

void FUNC_4(void)
{
 int VAR_4;
 git_oid VAR_5;
 git_tree_update VAR_6[] = {
  { VAR_2, {{0}}, VAR_0, "a/dir/blob"},
  { VAR_2, {{0}}, VAR_1, "a/dir/blob"},
 };

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  FUNC_1(FUNC_2(&VAR_6[VAR_4].id, "a71586c1dfe8a71c6cbf6c129f404c5642ff31bd"));
 }

 FUNC_0(FUNC_3(&VAR_5, VAR_3, ((void*)0), 2, VAR_6));
}
