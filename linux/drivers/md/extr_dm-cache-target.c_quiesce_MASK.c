
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ws; } ;
struct dm_cache_migration {TYPE_2__ k; int cell; TYPE_1__* cache; } ;
struct TYPE_3__ {int prison; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (TYPE_2__*,void (*) (struct work_struct*)) ;

__attribute__((used)) static void FUNC_2(struct dm_cache_migration *VAR_0,
      void (*VAR_1)(struct work_struct *))
{
 FUNC_1(&VAR_0->k, VAR_1);
 FUNC_0(VAR_0->cache->prison, VAR_0->cell, &VAR_0->k.ws);
}
