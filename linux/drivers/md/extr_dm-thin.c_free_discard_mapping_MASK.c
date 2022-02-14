
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {TYPE_1__* pool; } ;
struct dm_thin_new_mapping {int cell; struct thin_c* tc; } ;
struct TYPE_2__ {int mapping_pool; } ;


 int FUNC_0 (struct thin_c*,int ) ;
 int FUNC_1 (struct dm_thin_new_mapping*,int *) ;

__attribute__((used)) static void FUNC_2(struct dm_thin_new_mapping *VAR_0)
{
 struct thin_c *VAR_1 = VAR_0->tc;
 if (VAR_0->cell)
  FUNC_0(VAR_1, VAR_0->cell);
 FUNC_1(VAR_0, &VAR_1->pool->mapping_pool);
}
