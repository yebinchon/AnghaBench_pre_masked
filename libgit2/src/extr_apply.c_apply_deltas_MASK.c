
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_strmap ;
typedef int git_repository ;
typedef int git_reader ;
typedef int git_index ;
typedef int git_diff ;
typedef int git_apply_options ;


 int FUNC_0 (int *,int *,int *,int *,int *,int *,int *,size_t,int const*) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **) ;

__attribute__((used)) static int FUNC_4(
 git_repository *VAR_0,
 git_reader *VAR_1,
 git_index *VAR_2,
 git_reader *VAR_3,
 git_index *VAR_4,
 git_diff *VAR_5,
 const git_apply_options *VAR_6)
{
 git_strmap *VAR_7;
 size_t VAR_8;
 int VAR_9 = 0;

 if (FUNC_3(&VAR_7) < 0)
  return -1;

 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_5); VAR_8++) {
  if ((VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, VAR_6)) < 0)
   goto done;
 }

done:
 FUNC_2(VAR_7);
 return VAR_9;
}
