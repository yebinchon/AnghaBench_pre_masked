
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
typedef int git_iterator_options ;
typedef int git_iterator_flag_t ;
typedef int git_iterator ;
struct TYPE_5__ {int ignore_case; } ;
typedef TYPE_1__ git_index ;
typedef int git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__**,int *) ;
 int FUNC_2 (char**,int *,int,int *,int,int const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int **,int *,int *,int *,int const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_8 (int **,int *,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(
 git_diff **VAR_3,
 git_repository *VAR_4,
 git_tree *VAR_5,
 git_index *VAR_6,
 const git_diff_options *VAR_7)
{
 git_iterator_flag_t VAR_8 = VAR_0 |
  VAR_1;
 git_iterator_options VAR_9 = VAR_2,
  VAR_10 = VAR_2;
 git_iterator *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 git_diff *VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);
 bool VAR_15 = 0;
 int VAR_16 = 0;

 FUNC_0(VAR_3 && VAR_4);

 *VAR_3 = ((void*)0);

 if (!VAR_6 && (VAR_16 = FUNC_1(&VAR_6, VAR_4)) < 0)
  return VAR_16;

 VAR_15 = VAR_6->ignore_case;

 if ((VAR_16 = FUNC_2(&VAR_14, &VAR_9, VAR_8, &VAR_10, VAR_8, VAR_7)) < 0 ||
     (VAR_16 = FUNC_8(&VAR_11, VAR_5, &VAR_9)) < 0 ||
     (VAR_16 = FUNC_7(&VAR_12, VAR_4, VAR_6, &VAR_10)) < 0 ||
     (VAR_16 = FUNC_4(&VAR_13, VAR_4, VAR_11, VAR_12, VAR_7)) < 0)
  goto out;


 if (VAR_15)
  FUNC_5(VAR_13, 1);

 *VAR_3 = VAR_13;
 VAR_13 = ((void*)0);
out:
 FUNC_9(VAR_11);
 FUNC_9(VAR_12);
 FUNC_6(VAR_13);
 FUNC_3(VAR_14);

 return VAR_16;
}
