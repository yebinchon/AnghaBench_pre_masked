
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thin_c {struct pool* pool; int td; } ;
struct pool {int mapping_pool; } ;
struct dm_thin_new_mapping {int list; int data_block; TYPE_1__* cell; int virt_begin; scalar_t__ status; struct bio* bio; struct thin_c* tc; } ;
struct bio {int dummy; } ;
struct TYPE_3__ {int holder; } ;


 int FUNC_0 (struct pool*,TYPE_1__*) ;
 int FUNC_1 (struct thin_c*,struct bio*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct pool*,int ) ;
 int FUNC_4 (struct thin_c*,TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dm_thin_new_mapping*,int *) ;
 int FUNC_7 (struct pool*,char*,int) ;
 int FUNC_8 (struct thin_c*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct dm_thin_new_mapping *VAR_0)
{
 struct thin_c *VAR_1 = VAR_0->tc;
 struct pool *VAR_2 = VAR_1->pool;
 struct bio *VAR_3 = VAR_0->bio;
 int VAR_4;

 if (VAR_0->status) {
  FUNC_0(VAR_2, VAR_0->cell);
  goto out;
 }






 VAR_4 = FUNC_2(VAR_1->td, VAR_0->virt_begin, VAR_0->data_block);
 if (VAR_4) {
  FUNC_7(VAR_2, "dm_thin_insert_block", VAR_4);
  FUNC_0(VAR_2, VAR_0->cell);
  goto out;
 }







 if (VAR_3) {
  FUNC_4(VAR_1, VAR_0->cell, VAR_0->data_block);
  FUNC_1(VAR_1, VAR_3);
 } else {
  FUNC_3(VAR_1->pool, VAR_0->cell->holder);
  FUNC_8(VAR_1, VAR_0->cell->holder, VAR_0->data_block);
  FUNC_4(VAR_1, VAR_0->cell, VAR_0->data_block);
 }

out:
 FUNC_5(&VAR_0->list);
 FUNC_6(VAR_0, &VAR_2->mapping_pool);
}
