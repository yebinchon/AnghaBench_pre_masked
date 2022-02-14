
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_merge_options ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int **,int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,int *,int *,TYPE_1__ const*) ;
 int FUNC_6 (int const*,int *) ;
 int * FUNC_7 (int const*) ;

int FUNC_8(
 git_index **VAR_3,
 git_repository *VAR_4,
 const git_tree *VAR_5,
 const git_tree *VAR_6,
 const git_tree *VAR_7,
 const git_merge_options *VAR_8)
{
 git_iterator *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 git_iterator_options VAR_12 = VAR_1;
 int VAR_13;

 FUNC_0(VAR_3 && VAR_4);


 if (VAR_5 && VAR_8 && (VAR_8->flags & VAR_2)) {
  const git_tree *VAR_14 = ((void*)0);
  const git_oid *VAR_15 = FUNC_7(VAR_5);

  if (VAR_6 && !FUNC_6(VAR_15, FUNC_7(VAR_6)))
   VAR_14 = VAR_7;
  else if (VAR_7 && !FUNC_6(VAR_15, FUNC_7(VAR_7)))
   VAR_14 = VAR_6;

  if (VAR_14) {
   if ((VAR_13 = FUNC_1(VAR_3)) == 0)
       VAR_13 = FUNC_2(*VAR_3, VAR_14);

   return VAR_13;
  }
 }

 VAR_12.flags = VAR_0;

 if ((VAR_13 = FUNC_3(
   &VAR_9, (git_tree *)VAR_5, &VAR_12)) < 0 ||
  (VAR_13 = FUNC_3(
   &VAR_10, (git_tree *)VAR_6, &VAR_12)) < 0 ||
  (VAR_13 = FUNC_3(
   &VAR_11, (git_tree *)VAR_7, &VAR_12)) < 0)
  goto done;

 VAR_13 = FUNC_5(
  VAR_3, VAR_4, VAR_9, VAR_10, VAR_11, VAR_8);

done:
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);
 FUNC_4(VAR_11);

 return VAR_13;
}
