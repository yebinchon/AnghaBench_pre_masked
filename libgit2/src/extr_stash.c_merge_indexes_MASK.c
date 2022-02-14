
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int **,int *,int *,TYPE_1__*) ;
 int FUNC_1 (int **,int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(
 git_index **VAR_2,
 git_repository *VAR_3,
 git_tree *VAR_4,
 git_index *VAR_5,
 git_index *VAR_6)
{
 git_iterator *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 git_iterator_options VAR_10 = VAR_1;
 int VAR_11;

 VAR_10.flags = VAR_0;

 if ((VAR_11 = FUNC_1(&VAR_7, VAR_4, &VAR_10)) < 0 ||
  (VAR_11 = FUNC_0(&VAR_8, VAR_3, VAR_5, &VAR_10)) < 0 ||
  (VAR_11 = FUNC_0(&VAR_9, VAR_3, VAR_6, &VAR_10)) < 0)
  goto done;

 VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_7, VAR_8, VAR_9, ((void*)0));

done:
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
 return VAR_11;
}
