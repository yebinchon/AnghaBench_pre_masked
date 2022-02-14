
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
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**,int *,int ,int *,int ,TYPE_1__ const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int *,int *,int *,TYPE_1__ const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(
 git_diff **VAR_4,
 git_repository *VAR_5,
 git_tree *VAR_6,
 git_tree *VAR_7,
 const git_diff_options *VAR_8)
{
 git_iterator_flag_t VAR_9 = VAR_1;
 git_iterator_options VAR_10 = VAR_3,
  VAR_11 = VAR_3;
 git_iterator *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 git_diff *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 FUNC_0(VAR_4 && VAR_5);

 *VAR_4 = ((void*)0);





 if (VAR_8 && (VAR_8->flags & VAR_0) != 0)
  VAR_9 = VAR_2;

 if ((VAR_16 = FUNC_1(&VAR_15, &VAR_10, VAR_9, &VAR_11, VAR_9, VAR_8)) < 0 ||
     (VAR_16 = FUNC_5(&VAR_12, VAR_6, &VAR_10)) < 0 ||
     (VAR_16 = FUNC_5(&VAR_13, VAR_7, &VAR_11)) < 0 ||
     (VAR_16 = FUNC_3(&VAR_14, VAR_5, VAR_12, VAR_13, VAR_8)) < 0)
  goto out;

 *VAR_4 = VAR_14;
 VAR_14 = ((void*)0);
out:
 FUNC_6(VAR_12);
 FUNC_6(VAR_13);
 FUNC_4(VAR_14);
 FUNC_2(VAR_15);

 return VAR_16;
}
