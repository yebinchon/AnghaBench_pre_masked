
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct walk_object {int uninteresting; } ;
typedef int git_tree_entry ;
typedef int git_tree ;
struct TYPE_5__ {int repo; } ;
typedef TYPE_1__ git_packbuilder ;
typedef int git_oid ;




 int * FUNC_0 (int *,size_t) ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int const*) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 int FUNC_7 (struct walk_object**,TYPE_1__*,int const*) ;

__attribute__((used)) static int FUNC_8(git_packbuilder *VAR_0, const git_oid *VAR_1)
{
 struct walk_object *VAR_2;
 git_tree *VAR_3;
 int VAR_4;
 size_t VAR_5;

 if ((VAR_4 = FUNC_7(&VAR_2, VAR_0, VAR_1)) < 0)
  return VAR_4;

 if (VAR_2->uninteresting)
  return 0;

 VAR_2->uninteresting = 1;

 if ((VAR_4 = FUNC_5(&VAR_3, VAR_0->repo, VAR_1)) < 0)
  return VAR_4;

 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_3); VAR_5++) {
  const git_tree_entry *VAR_6 = FUNC_0(VAR_3, VAR_5);
  const git_oid *VAR_7 = FUNC_1(VAR_6);
  switch (FUNC_2(VAR_6)) {
  case 128:
   if ((VAR_4 = FUNC_8(VAR_0, VAR_7)) < 0)
    goto cleanup;
   break;
  case 129:
   if ((VAR_4 = FUNC_6(VAR_0, VAR_7)) < 0)
    goto cleanup;
   break;
  default:

   ;
  }
 }

cleanup:
 FUNC_4(VAR_3);
 return VAR_4;
}
