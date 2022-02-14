
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config_level_t ;
struct TYPE_11__ {int (* open ) (TYPE_1__*,int ,int const*) ;} ;
typedef TYPE_1__ git_config_backend ;
typedef int git_config ;
struct TYPE_12__ {int level; TYPE_1__* backend; } ;
typedef TYPE_2__ backend_internal ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int const*) ;

int FUNC_8(
 git_config *VAR_1,
 git_config_backend *VAR_2,
 git_config_level_t VAR_3,
 const git_repository *VAR_4,
 int VAR_5)
{
 backend_internal *VAR_6;
 int VAR_7;

 FUNC_2(VAR_1 && VAR_2);

 FUNC_1(VAR_2, VAR_0, "git_config_backend");

 if ((VAR_7 = VAR_2->open(VAR_2, VAR_3, VAR_4)) < 0)
  return VAR_7;

 VAR_6 = FUNC_4(sizeof(backend_internal));
 FUNC_0(VAR_6);

 FUNC_6(VAR_6, 0x0, sizeof(backend_internal));

 VAR_6->backend = VAR_2;
 VAR_6->level = VAR_3;

 if ((VAR_7 = FUNC_5(VAR_1, VAR_6, VAR_3, VAR_5)) < 0) {
  FUNC_3(VAR_6);
  return VAR_7;
 }

 return 0;
}
