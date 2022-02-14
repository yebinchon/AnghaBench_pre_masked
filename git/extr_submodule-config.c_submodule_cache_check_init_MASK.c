
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct repository {TYPE_1__* submodule_cache; } ;
struct TYPE_3__ {scalar_t__ initialized; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct repository *VAR_0)
{
 if (VAR_0->submodule_cache && VAR_0->submodule_cache->initialized)
  return;

 if (!VAR_0->submodule_cache)
  VAR_0->submodule_cache = FUNC_0();

 FUNC_1(VAR_0->submodule_cache);
}
