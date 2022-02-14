
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
struct bitmap {scalar_t__ events_cleared; int need_sync; TYPE_3__ counts; scalar_t__ allclean; int overflow_wait; int sysfs_can_clear; TYPE_2__* mddev; int behind_writes; int behind_wait; } ;
typedef unsigned long sector_t ;
typedef int bitmap_counter_t ;
struct TYPE_5__ {int max_write_behind; } ;
struct TYPE_6__ {scalar_t__ events; int degraded; TYPE_1__ bitmap_info; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int* FUNC_4 (TYPE_3__*,unsigned long,unsigned long*,int ) ;
 int FUNC_5 (TYPE_3__*,unsigned long) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct bitmap *VAR_2, sector_t VAR_3,
   unsigned long VAR_4, int VAR_5, int VAR_6)
{
 if (!VAR_2)
  return;
 if (VAR_6) {
  if (FUNC_2(&VAR_2->behind_writes))
   FUNC_10(&VAR_2->behind_wait);
  FUNC_6("dec write-behind count %d/%lu\n",
    FUNC_3(&VAR_2->behind_writes),
    VAR_2->mddev->bitmap_info.max_write_behind);
 }

 while (VAR_4) {
  sector_t VAR_7;
  unsigned long VAR_8;
  bitmap_counter_t *VAR_9;

  FUNC_7(&VAR_2->counts.lock, VAR_8);
  VAR_9 = FUNC_4(&VAR_2->counts, VAR_3, &VAR_7, 0);
  if (!VAR_9) {
   FUNC_8(&VAR_2->counts.lock, VAR_8);
   return;
  }

  if (VAR_5 && !VAR_2->mddev->degraded &&
      VAR_2->events_cleared < VAR_2->mddev->events) {
   VAR_2->events_cleared = VAR_2->mddev->events;
   VAR_2->need_sync = 1;
   FUNC_9(VAR_2->sysfs_can_clear);
  }

  if (!VAR_5 && !FUNC_1(*VAR_9))
   *VAR_9 |= VAR_1;

  if (FUNC_0(*VAR_9) == VAR_0)
   FUNC_10(&VAR_2->overflow_wait);

  (*VAR_9)--;
  if (*VAR_9 <= 2) {
   FUNC_5(&VAR_2->counts, VAR_3);
   VAR_2->allclean = 0;
  }
  FUNC_8(&VAR_2->counts.lock, VAR_8);
  VAR_3 += VAR_7;
  if (VAR_4 > VAR_7)
   VAR_4 -= VAR_7;
  else
   VAR_4 = 0;
 }
}
