
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int cache_dirty; int no_sync_defaults; int lock_arg; int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct regmap *VAR_0)
{
 VAR_0->lock(VAR_0->lock_arg);
 VAR_0->cache_dirty = 1;
 VAR_0->no_sync_defaults = 1;
 VAR_0->unlock(VAR_0->lock_arg);
}
