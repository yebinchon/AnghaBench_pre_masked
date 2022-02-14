
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int FUNC_0 (int **,int *,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int const*) ;

__attribute__((used)) static int FUNC_4(
 git_annotated_commit **VAR_0,
 git_repository *VAR_1,
 const git_oid *VAR_2,
 const char *VAR_3)
{
 git_commit *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 FUNC_1(VAR_0 && VAR_1 && VAR_2);

 *VAR_0 = ((void*)0);

 if ((VAR_5 = FUNC_3(&VAR_4, VAR_1, VAR_2)) < 0)
  goto done;

 VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_3);

done:
 FUNC_2(VAR_4);
 return VAR_5;
}
