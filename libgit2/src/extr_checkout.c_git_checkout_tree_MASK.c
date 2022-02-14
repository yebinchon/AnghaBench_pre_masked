
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
typedef int git_object ;
struct TYPE_9__ {int strings; int count; } ;
struct TYPE_11__ {TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;
struct TYPE_10__ {int strings; int count; } ;
struct TYPE_12__ {int checkout_strategy; TYPE_2__ paths; } ;
typedef TYPE_4__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int *,int *,TYPE_4__ const*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int **,int const*,int ) ;
 int FUNC_8 (int **,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(
 git_repository *VAR_5,
 const git_object *VAR_6,
 const git_checkout_options *VAR_7)
{
 int VAR_8;
 git_index *VAR_9;
 git_tree *VAR_10 = ((void*)0);
 git_iterator *VAR_11 = ((void*)0);
 git_iterator_options VAR_12 = VAR_3;

 if (!VAR_6 && !VAR_5) {
  FUNC_2(VAR_1,
   "must provide either repository or tree to checkout");
  return -1;
 }
 if (VAR_6 && VAR_5 && FUNC_6(VAR_6) != VAR_5) {
  FUNC_2(VAR_1,
   "object to checkout does not match repository");
  return -1;
 }

 if (!VAR_5)
  VAR_5 = FUNC_6(VAR_6);

 if (VAR_6) {
  if (FUNC_7((git_object **)&VAR_10, VAR_6, VAR_4) < 0) {
   FUNC_2(
    VAR_1, "provided object cannot be peeled to a tree");
   return -1;
  }
 }
 else {
  if ((VAR_8 = FUNC_0(&VAR_10, VAR_5)) < 0) {
   if (VAR_8 != VAR_2)
    FUNC_2(
     VAR_1,
     "HEAD could not be peeled to a tree and no treeish given");
   return VAR_8;
  }
 }

 if ((VAR_8 = FUNC_8(&VAR_9, VAR_5)) < 0)
  return VAR_8;

 if (VAR_7 && (VAR_7->checkout_strategy & VAR_0)) {
  VAR_12.pathlist.count = VAR_7->paths.count;
  VAR_12.pathlist.strings = VAR_7->paths.strings;
 }

 if (!(VAR_8 = FUNC_4(&VAR_11, VAR_10, &VAR_12)))
  VAR_8 = FUNC_1(VAR_11, VAR_9, VAR_7);

 FUNC_5(VAR_11);
 FUNC_3(VAR_9);
 FUNC_9(VAR_10);

 return VAR_8;
}
