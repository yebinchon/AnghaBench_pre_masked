
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thin_c {TYPE_2__* pool; int td; } ;
struct dm_thin_new_mapping {TYPE_3__* cell; int bio; struct thin_c* tc; } ;
struct TYPE_4__ {int block_end; int block_begin; } ;
struct TYPE_6__ {TYPE_1__ key; } ;
struct TYPE_5__ {int mapping_pool; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct thin_c*,TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct dm_thin_new_mapping*,int *) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;

__attribute__((used)) static void FUNC_6(struct dm_thin_new_mapping *VAR_0)
{
 int VAR_1;
 struct thin_c *VAR_2 = VAR_0->tc;

 VAR_1 = FUNC_3(VAR_2->td, VAR_0->cell->key.block_begin, VAR_0->cell->key.block_end);
 if (VAR_1) {
  FUNC_5(VAR_2->pool, "dm_thin_remove_range", VAR_1);
  FUNC_1(VAR_0->bio);
 } else
  FUNC_0(VAR_0->bio);

 FUNC_2(VAR_2, VAR_0->cell);
 FUNC_4(VAR_0, &VAR_2->pool->mapping_pool);
}
