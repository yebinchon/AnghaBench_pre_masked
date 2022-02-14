
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * entries; int lock; int memory_limit; } ;
typedef TYPE_1__ git_pack_cache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **) ;

__attribute__((used)) static int FUNC_4(git_pack_cache *VAR_2)
{
 if (FUNC_3(&VAR_2->entries) < 0)
  return -1;

 VAR_2->memory_limit = VAR_1;

 if (FUNC_2(&VAR_2->lock)) {
  FUNC_1(VAR_0, "failed to initialize pack cache mutex");

  FUNC_0(VAR_2->entries);
  VAR_2->entries = ((void*)0);

  return -1;
 }

 return 0;
}
