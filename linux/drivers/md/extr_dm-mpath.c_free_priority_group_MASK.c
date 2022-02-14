
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path_selector {TYPE_1__* type; } ;
struct priority_group {int pgpaths; struct path_selector ps; } ;
struct dm_target {int dummy; } ;
struct TYPE_2__ {int (* destroy ) (struct path_selector*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,struct dm_target*) ;
 int FUNC_2 (struct priority_group*) ;
 int FUNC_3 (struct path_selector*) ;

__attribute__((used)) static void FUNC_4(struct priority_group *VAR_0,
    struct dm_target *VAR_1)
{
 struct path_selector *VAR_2 = &VAR_0->ps;

 if (VAR_2->type) {
  VAR_2->type->destroy(VAR_2);
  FUNC_0(VAR_2->type);
 }

 FUNC_1(&VAR_0->pgpaths, VAR_1);
 FUNC_2(VAR_0);
}
