
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_7__ {int tree_pool; TYPE_3__* tree; scalar_t__ ignore_case; } ;
typedef TYPE_1__ git_index ;
typedef int git_buf ;
struct TYPE_8__ {scalar_t__ entry_count; int oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__**,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int *) ;
 int FUNC_10 (int *,int *,TYPE_1__*,char*,int ,int *) ;

int FUNC_11(
 git_oid *VAR_3, git_index *VAR_4, git_repository *VAR_5)
{
 int VAR_6;
 git_tree *VAR_7;
 git_buf VAR_8 = VAR_0;
 bool VAR_9 = 0;

 FUNC_0(VAR_3 && VAR_4 && VAR_5);

 if (FUNC_4(VAR_4)) {
  FUNC_2(VAR_1,
   "cannot create a tree from a not fully merged index.");
  return VAR_2;
 }

 if (VAR_4->tree != ((void*)0) && VAR_4->tree->entry_count >= 0) {
  FUNC_5(VAR_3, &VAR_4->tree->oid);
  return 0;
 }






 if (VAR_4->ignore_case) {
  VAR_9 = 1;
  FUNC_3(VAR_4, 0);
 }

 VAR_6 = FUNC_10(VAR_3, VAR_5, VAR_4, "", 0, &VAR_8);
 FUNC_1(&VAR_8);

 if (VAR_9)
  FUNC_3(VAR_4, 1);

 VAR_4->tree = ((void*)0);

 if (VAR_6 < 0)
  return VAR_6;

 FUNC_6(&VAR_4->tree_pool);

 if ((VAR_6 = FUNC_9(&VAR_7, VAR_5, VAR_3)) < 0)
  return VAR_6;


 VAR_6 = FUNC_7(&VAR_4->tree, VAR_7, &VAR_4->tree_pool);
 FUNC_8(VAR_7);

 return VAR_6;
}
