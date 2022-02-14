
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int root_lock; scalar_t__ fail_io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct dm_cache_metadata *VAR_0)
{
 FUNC_0(&VAR_0->root_lock);
 if (VAR_0->fail_io) {
  FUNC_1(&VAR_0->root_lock);
  return 0;
 }
 return 1;
}
