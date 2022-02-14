
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_iterator_options ;
typedef int git_iterator ;
struct TYPE_5__ {scalar_t__ ignore_case; } ;
typedef TYPE_1__ git_index ;
typedef int git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char**,int *,int ,int *,int ,int const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int *,int *,int *,int const*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(
 git_diff **VAR_2,
 git_repository *VAR_3,
 git_index *VAR_4,
 git_index *VAR_5,
 const git_diff_options *VAR_6)
{
 git_iterator_options VAR_7 = VAR_1,
  VAR_8 = VAR_1;
 git_iterator *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 git_diff *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_0(VAR_2 && VAR_4 && VAR_5);

 *VAR_2 = ((void*)0);

 if ((VAR_13 = FUNC_1(&VAR_12, &VAR_7, VAR_0,
      &VAR_8, VAR_0, VAR_6) < 0) ||
     (VAR_13 = FUNC_6(&VAR_9, VAR_3, VAR_4, &VAR_7)) < 0 ||
     (VAR_13 = FUNC_6(&VAR_10, VAR_3, VAR_5, &VAR_8)) < 0 ||
     (VAR_13 = FUNC_3(&VAR_11, VAR_3, VAR_9, VAR_10, VAR_6)) < 0)
  goto out;


 if (VAR_4->ignore_case || VAR_5->ignore_case)
  FUNC_4(VAR_11, 1);

 *VAR_2 = VAR_11;
 VAR_11 = ((void*)0);
out:
 FUNC_7(VAR_9);
 FUNC_7(VAR_10);
 FUNC_5(VAR_11);
 FUNC_2(VAR_12);

 return VAR_13;
}
