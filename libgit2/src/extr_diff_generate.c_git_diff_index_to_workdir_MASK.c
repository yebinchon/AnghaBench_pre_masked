
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;
typedef int git_diff_options ;
struct TYPE_8__ {scalar_t__ index_updated; } ;
typedef TYPE_2__ git_diff_generated ;
struct TYPE_7__ {int flags; } ;
struct TYPE_9__ {TYPE_1__ opts; } ;
typedef TYPE_3__ git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (char**,int *,int ,int *,int ,int const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__**,int *,int *,int *,int const*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,int *) ;
 int FUNC_8 (int **,int *,int *,int *,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(
 git_diff **VAR_4,
 git_repository *VAR_5,
 git_index *VAR_6,
 const git_diff_options *VAR_7)
{
 git_iterator_options VAR_8 = VAR_3,
  VAR_9 = VAR_3;
 git_iterator *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 git_diff *VAR_12 = ((void*)0);
 char *VAR_13 = ((void*)0);
 int VAR_14 = 0;

 FUNC_0(VAR_4 && VAR_5);

 *VAR_4 = ((void*)0);

 if (!VAR_6 && (VAR_14 = FUNC_1(&VAR_6, VAR_5)) < 0)
  return VAR_14;

 if ((VAR_14 = FUNC_2(&VAR_13, &VAR_8, VAR_2,
      &VAR_9, VAR_1, VAR_7)) < 0 ||
     (VAR_14 = FUNC_7(&VAR_10, VAR_5, VAR_6, &VAR_8)) < 0 ||
     (VAR_14 = FUNC_8(&VAR_11, VAR_5, VAR_6, ((void*)0), &VAR_9)) < 0 ||
     (VAR_14 = FUNC_4(&VAR_12, VAR_5, VAR_10, VAR_11, VAR_7)) < 0)
  goto out;

 if ((VAR_12->opts.flags & VAR_0) && ((git_diff_generated *)VAR_12)->index_updated)
  if ((VAR_14 = FUNC_6(VAR_6)) < 0)
   goto out;

 *VAR_4 = VAR_12;
 VAR_12 = ((void*)0);
out:
 FUNC_9(VAR_10);
 FUNC_9(VAR_11);
 FUNC_5(VAR_12);
 FUNC_3(VAR_13);

 return VAR_14;
}
