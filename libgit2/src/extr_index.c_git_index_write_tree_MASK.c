
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_index ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int *,int *) ;

int FUNC_4(git_oid *VAR_0, git_index *VAR_1)
{
 git_repository *VAR_2;

 FUNC_1(VAR_0 && VAR_1);

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0))
  return FUNC_2(-1, "Failed to write tree. "
    "the index file is not backed up by an existing repository");

 return FUNC_3(VAR_0, VAR_1, VAR_2);
}
