
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int git_repository ;
typedef int git_config_level_t ;
struct TYPE_5__ {int (* free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_config_backend ;
typedef int git_config ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int const*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__**,char const*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(
 git_config *VAR_4,
 const char *VAR_5,
 git_config_level_t VAR_6,
 const git_repository *VAR_7,
 int VAR_8)
{
 git_config_backend *VAR_9 = ((void*)0);
 struct stat VAR_10;
 int VAR_11;

 FUNC_0(VAR_4 && VAR_5);

 VAR_11 = FUNC_4(VAR_5, &VAR_10);
 if (VAR_11 < 0 && VAR_3 != VAR_0 && VAR_3 != VAR_1) {
  FUNC_3(VAR_2, "failed to stat '%s'", VAR_5);
  return -1;
 }

 if (FUNC_2(&VAR_9, VAR_5) < 0)
  return -1;

 if ((VAR_11 = FUNC_1(VAR_4, VAR_9, VAR_6, VAR_7, VAR_8)) < 0) {




  VAR_9->free(VAR_9);
  return VAR_11;
 }

 return 0;
}
