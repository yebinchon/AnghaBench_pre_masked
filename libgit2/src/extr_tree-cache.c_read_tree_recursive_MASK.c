
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tree_entry ;
struct TYPE_6__ {size_t children_count; scalar_t__ entry_count; struct TYPE_6__** children; int oid; } ;
typedef TYPE_1__ git_tree_cache ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_pool ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (size_t*,size_t,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__** FUNC_3 (int *,size_t) ;
 int FUNC_4 (TYPE_1__**,int ,int *) ;
 int * FUNC_5 (int const*,size_t) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 size_t FUNC_9 (int const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int **,int *,int ) ;
 int * FUNC_13 (int const*) ;

__attribute__((used)) static int FUNC_14(git_tree_cache *VAR_1, const git_tree *VAR_2, git_pool *VAR_3)
{
 git_repository *VAR_4;
 size_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_4 = FUNC_13(VAR_2);

 FUNC_2(&VAR_1->oid, FUNC_11(VAR_2));
 VAR_7 = FUNC_9(VAR_2);






 VAR_8 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  const git_tree_entry *VAR_11;

  VAR_11 = FUNC_5(VAR_2, VAR_5);
  if (FUNC_6(VAR_11) == VAR_0)
   VAR_8++;
 }

 FUNC_1(&VAR_9, VAR_8, sizeof(git_tree_cache *));

 VAR_1->children_count = VAR_8;
 VAR_1->children = FUNC_3(VAR_3, VAR_9);
 FUNC_0(VAR_1->children);

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  const git_tree_entry *VAR_12;
  git_tree *VAR_13;

  VAR_12 = FUNC_5(VAR_2, VAR_5);
  if (FUNC_6(VAR_12) != VAR_0) {
   VAR_1->entry_count++;
   continue;
  }

  if ((VAR_10 = FUNC_4(&VAR_1->children[VAR_6], FUNC_8(VAR_12), VAR_3)) < 0)
   return VAR_10;

  if ((VAR_10 = FUNC_12(&VAR_13, VAR_4, FUNC_7(VAR_12))) < 0)
   return VAR_10;

  VAR_10 = FUNC_14(VAR_1->children[VAR_6], VAR_13, VAR_3);
  FUNC_10(VAR_13);
  VAR_1->entry_count += VAR_1->children[VAR_6]->entry_count;
  VAR_6++;

  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
