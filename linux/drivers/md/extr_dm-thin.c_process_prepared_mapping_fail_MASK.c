
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_thin_new_mapping {TYPE_1__* tc; int list; int cell; } ;
struct TYPE_4__ {int mapping_pool; } ;
struct TYPE_3__ {TYPE_2__* pool; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_thin_new_mapping*,int *) ;

__attribute__((used)) static void FUNC_3(struct dm_thin_new_mapping *VAR_0)
{
 FUNC_0(VAR_0->tc->pool, VAR_0->cell);
 FUNC_1(&VAR_0->list);
 FUNC_2(VAR_0, &VAR_0->tc->pool->mapping_pool);
}
