
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_subtransport ;
typedef int git_smart_subtransport_stream ;
typedef int git_smart_subtransport ;
typedef int git_smart_service_t ;






 int FUNC_0 (int *,char const*,int **) ;
 int FUNC_1 (int *,char const*,int **) ;
 int FUNC_2 (int *,char const*,int **) ;
 int FUNC_3 (int *,char const*,int **) ;

__attribute__((used)) static int FUNC_4(
 git_smart_subtransport_stream **VAR_0,
 git_smart_subtransport *VAR_1,
 const char *VAR_2,
 git_smart_service_t VAR_3)
{
 git_subtransport *VAR_4 = (git_subtransport *) VAR_1;

 switch (VAR_3) {
  case 128:
   return FUNC_3(VAR_4, VAR_2, VAR_0);

  case 129:
   return FUNC_2(VAR_4, VAR_2, VAR_0);

  case 130:
   return FUNC_1(VAR_4, VAR_2, VAR_0);

  case 131:
   return FUNC_0(VAR_4, VAR_2, VAR_0);
 }

 *VAR_0 = ((void*)0);
 return -1;
}
