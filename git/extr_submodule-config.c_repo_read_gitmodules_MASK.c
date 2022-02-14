
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* submodule_cache; int index; } ;
struct TYPE_2__ {int gitmodules_read; } ;


 int FUNC_0 (int ,struct repository*,struct repository*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct repository*) ;
 int FUNC_3 (struct repository*) ;

void FUNC_4(struct repository *VAR_1)
{
 FUNC_3(VAR_1);

 if (FUNC_2(VAR_1) < 0)
  return;

 if (!FUNC_1(VAR_1->index))
  FUNC_0(VAR_0, VAR_1, VAR_1);

 VAR_1->submodule_cache->gitmodules_read = 1;
}
