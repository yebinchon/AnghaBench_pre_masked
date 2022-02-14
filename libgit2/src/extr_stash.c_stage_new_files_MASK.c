
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(
 git_index **VAR_2,
 git_tree *VAR_3,
 git_tree *VAR_4)
{
 git_iterator *VAR_5[2] = { ((void*)0), ((void*)0) };
 git_iterator_options VAR_6 = VAR_0;
 git_index *VAR_7 = ((void*)0);
 int VAR_8;

 if ((VAR_8 = FUNC_1(&VAR_7)) < 0 ||
  (VAR_8 = FUNC_2(
   &VAR_5[0], VAR_3, &VAR_6)) < 0 ||
  (VAR_8 = FUNC_2(
   &VAR_5[1], VAR_4, &VAR_6)) < 0)
  goto done;

 VAR_8 = FUNC_4(VAR_5, 2, VAR_1, VAR_7);

done:
 if (VAR_8 < 0)
  FUNC_0(VAR_7);
 else
  *VAR_2 = VAR_7;

 FUNC_3(VAR_5[0]);
 FUNC_3(VAR_5[1]);

 return VAR_8;
}
