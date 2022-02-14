
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filter_source ;
typedef int git_filter ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,void**,int *,int const*,int const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,void**,int *,int const*,int const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(
 git_filter *VAR_1,
 void **VAR_2,
 git_buf *VAR_3,
 const git_buf *VAR_4,
 const git_filter_source *VAR_5)
{
 const char *VAR_6 = *VAR_2;

 if (VAR_6 && FUNC_3(VAR_6, "wcflip") == 0)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else if (VAR_6 && FUNC_3(VAR_6, "wcreverse") == 0)
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_1("Unexpected attribute");
 return VAR_0;
}
