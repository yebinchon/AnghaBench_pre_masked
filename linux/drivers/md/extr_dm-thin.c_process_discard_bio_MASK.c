
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {TYPE_1__* pool; int td; } ;
struct dm_cell_key {int dummy; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;
typedef scalar_t__ dm_block_t ;
struct TYPE_2__ {int (* process_discard_cell ) (struct thin_c*,struct dm_bio_prison_cell*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct dm_cell_key*,struct bio*,struct dm_bio_prison_cell**) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,struct dm_cell_key*) ;
 int FUNC_3 (struct thin_c*,struct bio*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct thin_c*,struct dm_bio_prison_cell*) ;

__attribute__((used)) static void FUNC_5(struct thin_c *VAR_1, struct bio *VAR_2)
{
 dm_block_t VAR_3, VAR_4;
 struct dm_cell_key VAR_5;
 struct dm_bio_prison_cell *VAR_6;

 FUNC_3(VAR_1, VAR_2, &VAR_3, &VAR_4);
 if (VAR_3 == VAR_4) {



  FUNC_1(VAR_2);
  return;
 }

 FUNC_2(VAR_1->td, VAR_0, VAR_3, VAR_4, &VAR_5);
 if (FUNC_0(VAR_1->pool, &VAR_5, VAR_2, &VAR_6))







  return;

 VAR_1->pool->process_discard_cell(VAR_1, VAR_6);
}
