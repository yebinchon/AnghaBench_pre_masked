
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int *,int *,size_t,int ) ;
 scalar_t__ FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(git_object** VAR_2, git_repository *VAR_3, const char *VAR_4, size_t VAR_5)
{
 git_oid VAR_6;

 if (FUNC_1(&VAR_6, VAR_4, VAR_5) < 0)
  return VAR_0;

 return FUNC_0(VAR_2, VAR_3, &VAR_6, VAR_5, VAR_1);
}
