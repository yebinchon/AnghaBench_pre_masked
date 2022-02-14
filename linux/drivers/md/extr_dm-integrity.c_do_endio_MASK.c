
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct dm_integrity_c {int synchronous_mode; TYPE_1__ endio_wait; int bitmap_flush_work; int commit_wq; int synchronous_bios; } ;
struct bio {scalar_t__ bi_status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct dm_integrity_c*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct dm_integrity_c *VAR_1, struct bio *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_1);
 if (FUNC_8(VAR_3) && !VAR_2->bi_status)
  VAR_2->bi_status = FUNC_4(VAR_3);
 if (FUNC_8(VAR_1->synchronous_mode) && FUNC_2(VAR_2) == VAR_0) {
  unsigned long VAR_4;
  FUNC_6(&VAR_1->endio_wait.lock, VAR_4);
  FUNC_1(&VAR_1->synchronous_bios, VAR_2);
  FUNC_5(VAR_1->commit_wq, &VAR_1->bitmap_flush_work, 0);
  FUNC_7(&VAR_1->endio_wait.lock, VAR_4);
  return;
 }
 FUNC_0(VAR_2);
}
