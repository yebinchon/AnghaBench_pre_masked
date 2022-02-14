
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filter_source ;
typedef void* git_filter ;
typedef int git_buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int *,int const*,int const*) ;
 int FUNC_4 (int *,int const*) ;

__attribute__((used)) static int FUNC_5(
 git_filter *VAR_2,
 void **VAR_3,
 git_buf *VAR_4,
 const git_buf *VAR_5,
 const git_filter_source *VAR_6)
{
 FUNC_0(VAR_2); FUNC_0(VAR_3);


 if (FUNC_1(VAR_5))
  return VAR_1;

 if (FUNC_2(VAR_6) == VAR_0)
  return FUNC_3(VAR_4, VAR_5, VAR_6);
 else
  return FUNC_4(VAR_4, VAR_5);
}
