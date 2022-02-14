
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_treewalk_mode ;
typedef int git_treewalk_cb ;
typedef int git_tree ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int const*,int ,int *,void*,int) ;

int FUNC_3(
 const git_tree *VAR_4,
 git_treewalk_mode VAR_5,
 git_treewalk_cb VAR_6,
 void *VAR_7)
{
 int VAR_8 = 0;
 git_buf VAR_9 = VAR_0;

 if (VAR_5 != VAR_2 && VAR_5 != VAR_3) {
  FUNC_1(VAR_1, "invalid walking mode for tree walk");
  return -1;
 }

 VAR_8 = FUNC_2(
  VAR_4, VAR_6, &VAR_9, VAR_7, (VAR_5 == VAR_3));

 FUNC_0(&VAR_9);

 return VAR_8;
}
