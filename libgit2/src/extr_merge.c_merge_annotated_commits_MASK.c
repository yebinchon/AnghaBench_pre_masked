
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_merge_options ;
typedef int git_iterator ;
typedef int git_index ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,int *,int *,int const*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,int *,int *,int const*) ;
 int FUNC_5 (int **,int *) ;

__attribute__((used)) static int FUNC_6(
 git_index **VAR_1,
 git_annotated_commit **VAR_2,
 git_repository *VAR_3,
 git_annotated_commit *VAR_4,
 git_annotated_commit *VAR_5,
 size_t VAR_6,
 const git_merge_options *VAR_7)
{
 git_annotated_commit *VAR_8 = ((void*)0);
 git_iterator *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 int VAR_12;

 if ((VAR_12 = FUNC_0(&VAR_8, VAR_3, VAR_4, VAR_5, VAR_7,
  VAR_6)) < 0) {

  if (VAR_12 != VAR_0)
   goto done;

  FUNC_2();
 }

 if ((VAR_12 = FUNC_5(&VAR_9, VAR_8)) < 0 ||
  (VAR_12 = FUNC_5(&VAR_10, VAR_4)) < 0 ||
  (VAR_12 = FUNC_5(&VAR_11, VAR_5)) < 0 ||
  (VAR_12 = FUNC_4(VAR_1, VAR_3, VAR_9, VAR_10,
   VAR_11, VAR_7)) < 0)
  goto done;

 if (VAR_2) {
  *VAR_2 = VAR_8;
  VAR_8 = ((void*)0);
 }

done:
 FUNC_1(VAR_8);
 FUNC_3(VAR_9);
 FUNC_3(VAR_10);
 FUNC_3(VAR_11);
 return VAR_12;
}
