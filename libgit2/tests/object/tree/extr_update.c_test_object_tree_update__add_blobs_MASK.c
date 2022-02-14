
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int member_0; } ;
struct TYPE_9__ {TYPE_3__ member_0; } ;
struct TYPE_11__ {char const* member_3; int id; int member_2; TYPE_2__ member_1; int member_0; } ;
typedef TYPE_4__ git_tree_update ;
typedef int git_tree ;
typedef int git_oid ;
struct TYPE_8__ {int member_0; } ;
struct TYPE_12__ {char const* path; int id; int mode; TYPE_1__ member_0; } ;
typedef TYPE_5__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,int *,int,TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *) ;

void FUNC_11(void)
{
 git_oid VAR_3, VAR_4, VAR_5;
 git_tree *VAR_6;
 git_index *VAR_7;
 git_index_entry VAR_8 = { 0 };
 int VAR_9;
 const char *VAR_10[] = {
  "some/deep/path",
  "some/other/path",
  "a/path/elsewhere",
 };

 git_tree_update VAR_11[] = {
  { VAR_1, {{0}}, VAR_0, VAR_10[0]},
  { VAR_1, {{0}}, VAR_0, VAR_10[1]},
  { VAR_1, {{0}}, VAR_0, VAR_10[2]},
 };

 FUNC_1(FUNC_7(&VAR_5, "c4dc1555e4d4fa0e0c9c3fc46734c7c35b3ce90b"));

 VAR_8.mode = VAR_0;
 FUNC_1(FUNC_7(&VAR_8.id, "fa49b077972391ad58037050f2a75f74e3671e92"));

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  FUNC_1(FUNC_7(&VAR_11[VAR_9].id, "fa49b077972391ad58037050f2a75f74e3671e92"));
 }

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  int VAR_12;


  FUNC_1(FUNC_4(&VAR_7));

  VAR_6 = ((void*)0);
  if (VAR_9 == 1) {
   FUNC_1(FUNC_10(&VAR_6, VAR_2, &VAR_5));
   FUNC_1(FUNC_5(VAR_7, VAR_6));
  }

  for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
   VAR_8.path = VAR_10[VAR_12];
   FUNC_1(FUNC_2(VAR_7, &VAR_8));
  }

  FUNC_1(FUNC_6(&VAR_3, VAR_7, VAR_2));
  FUNC_3(VAR_7);


  FUNC_1(FUNC_8(&VAR_4, VAR_2, VAR_6, 3, VAR_11));

  FUNC_0(&VAR_3, &VAR_4);
 }

 FUNC_9(VAR_6);
}
