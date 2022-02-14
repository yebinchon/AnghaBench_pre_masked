
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_index_reuc_entry ;
typedef int git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*,int,int const*,int,int const*,int,int const*) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(git_index *VAR_0, const char *VAR_1,
 int VAR_2, const git_oid *VAR_3,
 int VAR_4, const git_oid *VAR_5,
 int VAR_6, const git_oid *VAR_7)
{
 git_index_reuc_entry *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 FUNC_0(VAR_0 && VAR_1);

 if ((VAR_9 = FUNC_2(&VAR_8, VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)) < 0 ||
  (VAR_9 = FUNC_3(VAR_0, VAR_8)) < 0)
  FUNC_1(VAR_8);

 return VAR_9;
}
