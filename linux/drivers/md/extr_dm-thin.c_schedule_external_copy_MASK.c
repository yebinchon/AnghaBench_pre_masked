
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {scalar_t__ origin_size; int origin_dev; struct pool* pool; } ;
struct pool {int sectors_per_block; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef int dm_block_t ;


 int FUNC_0 (struct thin_c*,int,int ,int,int,struct dm_bio_prison_cell*,struct bio*,scalar_t__) ;
 int FUNC_1 (struct thin_c*,int,int,struct dm_bio_prison_cell*,struct bio*) ;

__attribute__((used)) static void FUNC_2(struct thin_c *VAR_0, dm_block_t VAR_1,
       dm_block_t VAR_2,
       struct dm_bio_prison_cell *VAR_3, struct bio *VAR_4)
{
 struct pool *VAR_5 = VAR_0->pool;
 sector_t VAR_6 = VAR_1 * VAR_5->sectors_per_block;
 sector_t VAR_7 = (VAR_1 + 1) * VAR_5->sectors_per_block;

 if (VAR_7 <= VAR_0->origin_size)
  FUNC_0(VAR_0, VAR_1, VAR_0->origin_dev,
         VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5->sectors_per_block);

 else if (VAR_6 < VAR_0->origin_size)
  FUNC_0(VAR_0, VAR_1, VAR_0->origin_dev,
         VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_0->origin_size - VAR_6);

 else
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
