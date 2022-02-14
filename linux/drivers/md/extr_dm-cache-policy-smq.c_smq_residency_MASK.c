
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_allocated; } ;
struct smq_policy {int lock; TYPE_1__ cache_alloc; } ;
struct dm_cache_policy {int dummy; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 struct smq_policy* FUNC_3 (struct dm_cache_policy*) ;

__attribute__((used)) static dm_cblock_t FUNC_4(struct dm_cache_policy *VAR_0)
{
 dm_cblock_t VAR_1;
 unsigned long VAR_2;
 struct smq_policy *VAR_3 = FUNC_3(VAR_0);

 FUNC_0(&VAR_3->lock, VAR_2);
 VAR_1 = FUNC_2(VAR_3->cache_alloc.nr_allocated);
 FUNC_1(&VAR_3->lock, VAR_2);

 return VAR_1;
}
