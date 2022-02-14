
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filter_source ;
typedef int const git_filter ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(
 git_filter *VAR_1,
 void **VAR_2,
 const git_filter_source *VAR_3,
 const char **VAR_4)
{
 FUNC_1(VAR_1);
 FUNC_1(VAR_3);

 if (FUNC_3(VAR_4[0], "wcflip") == 0 ||
  FUNC_3(VAR_4[0], "wcreverse") == 0) {
  *VAR_2 = FUNC_2(VAR_4[0]);
  FUNC_0(*VAR_2);
  return 0;
 }

 return VAR_0;
}
