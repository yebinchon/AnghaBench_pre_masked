
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *,int *,int const*) ;

int FUNC_3(git_oid *VAR_1, git_repository *VAR_2, size_t VAR_3, const git_oid VAR_4[])
{
 git_oid VAR_5;
 unsigned int VAR_6;
 int VAR_7 = -1;

 FUNC_0(VAR_1 && VAR_2 && VAR_4);

 if (VAR_3 < 2) {
  FUNC_1(VAR_0, "at least two commits are required to find an ancestor");
  return -1;
 }

 VAR_5 = VAR_4[0];
 for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++) {
  VAR_7 = FUNC_2(&VAR_5, VAR_2, &VAR_5, &VAR_4[VAR_6]);
  if (VAR_7 < 0)
   return VAR_7;
 }

 *VAR_1 = VAR_5;

 return 0;
}
