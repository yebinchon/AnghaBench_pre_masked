
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef scalar_t__ git_configmap_t ;
typedef int git_configmap ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,char const**,int *,size_t,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int *,char const*,char const*,char const*) ;

__attribute__((used)) static int FUNC_3(git_repository *VAR_2, const char *VAR_3, git_configmap *VAR_4, size_t VAR_5, const char *VAR_6, int VAR_7)
{
 git_configmap_t VAR_8;
 const char *VAR_9;

 if (FUNC_0(&VAR_8, &VAR_9, VAR_4, VAR_5, VAR_7) < 0) {
  FUNC_1(VAR_1, "invalid value for %s", VAR_6);
  return -1;
 }

 if (VAR_8 == VAR_0)
  VAR_9 = "true";

 return FUNC_2(VAR_2, VAR_3, VAR_6, VAR_9);
}
