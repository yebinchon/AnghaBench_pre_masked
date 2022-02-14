
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
typedef int git_reader ;
typedef int git_index ;
struct TYPE_4__ {int path; } ;
struct TYPE_5__ {scalar_t__ status; TYPE_1__ old_file; } ;
typedef TYPE_2__ git_diff_delta ;
typedef int git_diff ;
typedef int git_apply_options ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int **,int *,int *) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int const*,int) ;

int FUNC_12(
 git_index **VAR_3,
 git_repository *VAR_4,
 git_tree *VAR_5,
 git_diff *VAR_6,
 const git_apply_options *VAR_7)
{
 git_index *VAR_8 = ((void*)0);
 git_reader *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 git_apply_options VAR_11 = VAR_0;
 const git_diff_delta *VAR_12;
 size_t VAR_13;
 int VAR_14 = 0;

 FUNC_1(VAR_3 && VAR_4 && VAR_5 && VAR_6);

 *VAR_3 = ((void*)0);

 if (VAR_7)
  FUNC_11(&VAR_11, VAR_7, sizeof(git_apply_options));

 if ((VAR_14 = FUNC_9(&VAR_9, VAR_5)) < 0)
  goto done;





 if ((VAR_14 = FUNC_5(&VAR_8)) < 0 ||
  (VAR_14 = FUNC_6(VAR_8, VAR_5)) < 0 ||
  (VAR_14 = FUNC_8(&VAR_10, VAR_4, VAR_8)) < 0)
  goto done;






 for (VAR_13 = 0; VAR_13 < FUNC_3(VAR_6); VAR_13++) {
  VAR_12 = FUNC_2(VAR_6, VAR_13);

  if (VAR_12->status == VAR_1 ||
   VAR_12->status == VAR_2) {
   if ((VAR_14 = FUNC_7(VAR_8,
     VAR_12->old_file.path, 0)) < 0)
    goto done;
  }
 }

 if ((VAR_14 = FUNC_0(VAR_4, VAR_9, ((void*)0), VAR_10, VAR_8, VAR_6, &VAR_11)) < 0)
  goto done;

 *VAR_3 = VAR_8;

done:
 if (VAR_14 < 0)
  FUNC_4(VAR_8);

 FUNC_10(VAR_9);
 FUNC_10(VAR_10);

 return VAR_14;
}
