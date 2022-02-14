
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filter_source ;
typedef int git_filter ;
typedef int git_buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int *,int const*,int const*) ;
 int FUNC_1 (void*,int *,int const*) ;
 int FUNC_2 (int *,void**,int const*,int *) ;
 scalar_t__ FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(
 git_filter *VAR_1,
 void **VAR_2,
 git_buf *VAR_3,
 const git_buf *VAR_4,
 const git_filter_source *VAR_5)
{

 if (!*VAR_2) {
  int VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_5, ((void*)0));

  if (VAR_6 < 0)
   return VAR_6;
 }

 if (FUNC_3(VAR_5) == VAR_0)
  return FUNC_1(*VAR_2, VAR_3, VAR_4);
 else
  return FUNC_0(*VAR_2, VAR_3, VAR_4, VAR_5);
}
