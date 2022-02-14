
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_iterator ;
typedef int git_index ;
typedef int git_checkout_options ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *) ;

int FUNC_9(
 git_repository *VAR_1,
 git_index *VAR_2,
 const git_checkout_options *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 git_iterator *VAR_6;

 if (!VAR_2 && !VAR_1) {
  FUNC_3(VAR_0,
   "must provide either repository or index to checkout");
  return -1;
 }

 if (VAR_2 && VAR_1 &&
  FUNC_5(VAR_2) &&
  FUNC_5(VAR_2) != VAR_1) {
  FUNC_3(VAR_0,
   "index to checkout does not match repository");
  return -1;
 } else if(VAR_2 && VAR_1 && !FUNC_5(VAR_2)) {
  FUNC_1(VAR_2, VAR_1);
  VAR_5 = 1;
 }

 if (!VAR_1)
  VAR_1 = FUNC_5(VAR_2);

 if (!VAR_2 && (VAR_4 = FUNC_8(&VAR_2, VAR_1)) < 0)
  return VAR_4;
 FUNC_0(VAR_2);

 if (!(VAR_4 = FUNC_6(&VAR_6, VAR_1, VAR_2, ((void*)0))))
  VAR_4 = FUNC_2(VAR_6, VAR_2, VAR_3);

 if (VAR_5)
  FUNC_1(VAR_2, ((void*)0));

 FUNC_7(VAR_6);
 FUNC_4(VAR_2);

 return VAR_4;
}
