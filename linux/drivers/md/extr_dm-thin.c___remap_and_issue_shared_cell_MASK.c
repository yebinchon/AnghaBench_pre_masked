
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct remap_info {int issue_bios; TYPE_1__* tc; int defer_bios; } ;
struct dm_thin_endio_hook {int shared_read_entry; } ;
struct dm_bio_prison_cell {int bios; } ;
struct bio {int bi_opf; } ;
struct TYPE_4__ {int shared_read_ds; } ;
struct TYPE_3__ {TYPE_2__* pool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,struct bio*) ;
 struct bio* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (int ) ;
 struct dm_thin_endio_hook* FUNC_5 (struct bio*,int) ;
 int FUNC_6 (TYPE_2__*,struct bio*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_2,
       struct dm_bio_prison_cell *VAR_3)
{
 struct remap_info *VAR_4 = VAR_2;
 struct bio *VAR_5;

 while ((VAR_5 = FUNC_2(&VAR_3->bios))) {
  if (FUNC_0(VAR_5) == VAR_1 || FUNC_7(VAR_5->bi_opf) ||
      FUNC_3(VAR_5) == VAR_0)
   FUNC_1(&VAR_4->defer_bios, VAR_5);
  else {
   struct dm_thin_endio_hook *VAR_6 = FUNC_5(VAR_5, sizeof(struct dm_thin_endio_hook));

   VAR_6->shared_read_entry = FUNC_4(VAR_4->tc->pool->shared_read_ds);
   FUNC_6(VAR_4->tc->pool, VAR_5);
   FUNC_1(&VAR_4->issue_bios, VAR_5);
  }
 }
}
