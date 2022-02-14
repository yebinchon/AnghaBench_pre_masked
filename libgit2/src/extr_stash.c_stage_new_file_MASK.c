
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int *,int const*) ;

__attribute__((used)) static int FUNC_1(const git_index_entry **VAR_0, void *VAR_1)
{
 git_index *VAR_2 = VAR_1;

 if(VAR_0[0] == ((void*)0))
  return FUNC_0(VAR_2, VAR_0[1]);
 else
  return FUNC_0(VAR_2, VAR_0[0]);
}
