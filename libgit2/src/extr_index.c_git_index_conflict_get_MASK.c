
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t*,int *,char const*) ;
 int FUNC_2 (int const**,int const**,int const**,int *,size_t) ;

int FUNC_3(
 const git_index_entry **VAR_1,
 const git_index_entry **VAR_2,
 const git_index_entry **VAR_3,
 git_index *VAR_4,
 const char *VAR_5)
{
 size_t VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_1 && VAR_2 && VAR_3 && VAR_4 && VAR_5);

 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);
 *VAR_3 = ((void*)0);

 if (FUNC_1(&VAR_6, VAR_4, VAR_5) < 0)
  return VAR_0;

 if ((VAR_7 = FUNC_2(
  VAR_1, VAR_2, VAR_3, VAR_4, VAR_6)) < 0)
  return VAR_7;
 else if (VAR_7 == 0)
  return VAR_0;

 return 0;
}
