
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct walk_object {int seen; scalar_t__ uninteresting; int const id; } ;
typedef int git_tree_entry ;
typedef int git_tree ;
struct TYPE_5__ {int repo; } ;
typedef TYPE_1__ git_packbuilder ;
typedef int git_oid ;




 int FUNC_0 (TYPE_1__*,int const*,char const*) ;
 int * FUNC_1 (int *,size_t) ;
 int * FUNC_2 (int const*) ;
 char* FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int const* FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int const*) ;
 int FUNC_9 (struct walk_object**,TYPE_1__*,int const*) ;

int FUNC_10(git_packbuilder *VAR_0, git_tree *VAR_1)
{
 size_t VAR_2;
 int VAR_3;
 git_tree *VAR_4;
 struct walk_object *VAR_5;
 const char *VAR_6;

 if ((VAR_3 = FUNC_9(&VAR_5, VAR_0, FUNC_7(VAR_1))) < 0)
  return VAR_3;

 if (VAR_5->seen || VAR_5->uninteresting)
  return 0;

 VAR_5->seen = 1;

 if ((VAR_3 = FUNC_0(VAR_0, &VAR_5->id, ((void*)0))))
  return VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_5(VAR_1); VAR_2++) {
  const git_tree_entry *VAR_7 = FUNC_1(VAR_1, VAR_2);
  const git_oid *VAR_8 = FUNC_2(VAR_7);
  switch (FUNC_4(VAR_7)) {
  case 128:
   if ((VAR_3 = FUNC_8(&VAR_4, VAR_0->repo, VAR_8)) < 0)
    return VAR_3;

   VAR_3 = FUNC_10(VAR_0, VAR_4);
   FUNC_6(VAR_4);

   if (VAR_3 < 0)
    return VAR_3;

   break;
  case 129:
   if ((VAR_3 = FUNC_9(&VAR_5, VAR_0, VAR_8)) < 0)
    return VAR_3;
   if (VAR_5->uninteresting)
    continue;
   VAR_6 = FUNC_3(VAR_7);
   if ((VAR_3 = FUNC_0(VAR_0, VAR_8, VAR_6)) < 0)
    return VAR_3;
   break;
  default:

   ;
  }
 }


 return VAR_3;
}
