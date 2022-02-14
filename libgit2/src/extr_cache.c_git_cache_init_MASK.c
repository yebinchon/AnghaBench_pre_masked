
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int map; } ;
typedef TYPE_1__ git_cache ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

int FUNC_4(git_cache *VAR_1)
{
 FUNC_3(VAR_1, 0, sizeof(*VAR_1));

 if ((FUNC_1(&VAR_1->map)) < 0)
  return -1;

 if (FUNC_2(&VAR_1->lock)) {
  FUNC_0(VAR_0, "failed to initialize cache rwlock");
  return -1;
 }

 return 0;
}
