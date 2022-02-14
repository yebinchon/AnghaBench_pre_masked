
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int td; struct pool* pool; } ;
struct pool {int dummy; } ;
struct dm_cell_key {int dummy; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;
typedef int dm_block_t ;


 scalar_t__ FUNC_0 (struct pool*,struct dm_cell_key*,struct bio*,struct dm_bio_prison_cell**) ;
 int FUNC_1 (int ,int ,struct dm_cell_key*) ;
 int FUNC_2 (struct thin_c*,struct bio*) ;
 int FUNC_3 (struct thin_c*,struct dm_bio_prison_cell*) ;

__attribute__((used)) static void FUNC_4(struct thin_c *VAR_0, struct bio *VAR_1)
{
 struct pool *VAR_2 = VAR_0->pool;
 dm_block_t VAR_3 = FUNC_2(VAR_0, VAR_1);
 struct dm_bio_prison_cell *VAR_4;
 struct dm_cell_key VAR_5;





 FUNC_1(VAR_0->td, VAR_3, &VAR_5);
 if (FUNC_0(VAR_2, &VAR_5, VAR_1, &VAR_4))
  return;

 FUNC_3(VAR_0, VAR_4);
}
