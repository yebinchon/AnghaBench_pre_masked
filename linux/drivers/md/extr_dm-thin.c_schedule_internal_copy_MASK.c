
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {TYPE_1__* pool; int pool_dev; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;
typedef int dm_block_t ;
struct TYPE_2__ {int sectors_per_block; } ;


 int FUNC_0 (struct thin_c*,int ,int ,int ,int ,struct dm_bio_prison_cell*,struct bio*,int ) ;

__attribute__((used)) static void FUNC_1(struct thin_c *VAR_0, dm_block_t VAR_1,
       dm_block_t VAR_2, dm_block_t VAR_3,
       struct dm_bio_prison_cell *VAR_4, struct bio *VAR_5)
{
 FUNC_0(VAR_0, VAR_1, VAR_0->pool_dev,
        VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_0->pool->sectors_per_block);
}
