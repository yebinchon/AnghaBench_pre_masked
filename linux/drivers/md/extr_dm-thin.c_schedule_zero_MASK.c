
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {struct pool* pool; } ;
struct TYPE_2__ {scalar_t__ zero_new_blocks; } ;
struct pool {int sectors_per_block; TYPE_1__ pf; } ;
struct dm_thin_new_mapping {int virt_begin; int virt_end; int data_block; struct dm_bio_prison_cell* cell; struct thin_c* tc; int prepare_actions; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (int *,int) ;
 struct dm_thin_new_mapping* FUNC_1 (struct pool*) ;
 scalar_t__ FUNC_2 (struct pool*,struct bio*) ;
 int FUNC_3 (struct thin_c*,struct dm_thin_new_mapping*,int,int) ;
 int FUNC_4 (struct dm_thin_new_mapping*) ;
 int FUNC_5 (struct thin_c*,struct bio*,int,struct dm_thin_new_mapping*) ;

__attribute__((used)) static void FUNC_6(struct thin_c *VAR_0, dm_block_t VAR_1,
     dm_block_t VAR_2, struct dm_bio_prison_cell *VAR_3,
     struct bio *VAR_4)
{
 struct pool *VAR_5 = VAR_0->pool;
 struct dm_thin_new_mapping *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(&VAR_6->prepare_actions, 1);
 VAR_6->tc = VAR_0;
 VAR_6->virt_begin = VAR_1;
 VAR_6->virt_end = VAR_1 + 1u;
 VAR_6->data_block = VAR_2;
 VAR_6->cell = VAR_3;






 if (VAR_5->pf.zero_new_blocks) {
  if (FUNC_2(VAR_5, VAR_4))
   FUNC_5(VAR_0, VAR_4, VAR_2, VAR_6);
  else
   FUNC_3(VAR_0, VAR_6, VAR_2 * VAR_5->sectors_per_block,
    (VAR_2 + 1) * VAR_5->sectors_per_block);
 } else
  FUNC_4(VAR_6);
}
