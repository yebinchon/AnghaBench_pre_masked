
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int submodule_cache; } ;
typedef TYPE_1__ git_repository ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int FUNC_3(git_repository *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);

 if ((VAR_1 = FUNC_1(&VAR_0->submodule_cache)))
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0, VAR_0->submodule_cache);
 return VAR_1;
}
