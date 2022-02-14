
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* set ) (TYPE_1__*,char const*,char const*) ;} ;
typedef TYPE_1__ git_config_backend ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__**,int *,char const*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char const*,char const*) ;

int FUNC_5(git_config *VAR_3, const char *VAR_4, const char *VAR_5)
{
 int VAR_6;
 git_config_backend *VAR_7;

 if (!VAR_5) {
  FUNC_2(VAR_2, "the value to set cannot be NULL");
  return -1;
 }

 if (FUNC_1(&VAR_7, VAR_3, VAR_4, VAR_0) < 0)
  return VAR_1;

 VAR_6 = VAR_7->set(VAR_7, VAR_4, VAR_5);

 if (!VAR_6 && FUNC_0(VAR_3) != ((void*)0))
  FUNC_3(FUNC_0(VAR_3));

 return VAR_6;
}
