
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;
typedef int git_remote_head ;
typedef int git_remote ;


 scalar_t__ FUNC_0 (int const***,size_t*,int *) ;
 scalar_t__ FUNC_1 (int *,size_t,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(git_vector *VAR_1, git_remote *VAR_2)
{
 git_remote_head **VAR_3;
 size_t VAR_4, VAR_5;

 if (FUNC_0((const git_remote_head ***)&VAR_3, &VAR_4, VAR_2) < 0)
  return -1;

 if (FUNC_1(VAR_1, VAR_4, VAR_0) < 0)
  return -1;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (FUNC_2(VAR_1, VAR_3[VAR_5]) < 0)
   return -1;
 }

 return 0;
}
