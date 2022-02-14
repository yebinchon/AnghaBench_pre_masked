
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {struct pool* pool; } ;
struct pool {int (* process_prepared_discard ) (struct dm_thin_new_mapping*) ;int all_io_ds; } ;
struct dm_thin_new_mapping {int list; int bio; struct dm_bio_prison_cell* cell; int virt_end; int virt_begin; struct thin_c* tc; } ;
struct TYPE_2__ {int block_end; int block_begin; } ;
struct dm_bio_prison_cell {int holder; TYPE_1__ key; } ;


 int FUNC_0 (int ,int *) ;
 struct dm_thin_new_mapping* FUNC_1 (struct pool*) ;
 int FUNC_2 (struct dm_thin_new_mapping*) ;

__attribute__((used)) static void FUNC_3(struct thin_c *VAR_0,
          struct dm_bio_prison_cell *VAR_1)
{
 struct pool *VAR_2 = VAR_0->pool;
 struct dm_thin_new_mapping *VAR_3 = FUNC_1(VAR_2);





 VAR_3->tc = VAR_0;
 VAR_3->virt_begin = VAR_1->key.block_begin;
 VAR_3->virt_end = VAR_1->key.block_end;
 VAR_3->cell = VAR_1;
 VAR_3->bio = VAR_1->holder;

 if (!FUNC_0(VAR_2->all_io_ds, &VAR_3->list))
  VAR_2->process_prepared_discard(VAR_3);
}
