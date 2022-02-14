
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ external; int mutex; scalar_t__ daemon_sleep; } ;
struct mddev {TYPE_5__ bitmap_info; TYPE_4__* thread; struct bitmap* bitmap; } ;
struct bitmap_counts {unsigned long chunks; int chunkshift; int lock; TYPE_2__* bp; } ;
struct TYPE_11__ {unsigned long file_pages; int * filemap; int sb_page; } ;
struct bitmap {int allclean; TYPE_3__ storage; int flags; scalar_t__ need_sync; struct bitmap_counts counts; int events_cleared; TYPE_1__* mddev; scalar_t__ daemon_lastrun; } ;
typedef int sector_t ;
struct TYPE_14__ {int events_cleared; } ;
typedef TYPE_6__ bitmap_super_t ;
typedef int bitmap_counter_t ;
struct TYPE_12__ {scalar_t__ timeout; } ;
struct TYPE_10__ {scalar_t__ pending; } ;
struct TYPE_9__ {scalar_t__ queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 TYPE_6__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (struct bitmap_counts*,int,int) ;
 int FUNC_5 (struct bitmap*,int) ;
 int* FUNC_6 (struct bitmap_counts*,int,int*,int ) ;
 int FUNC_7 (struct bitmap_counts*,int) ;
 int FUNC_8 (struct bitmap*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct bitmap*,unsigned long,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct bitmap*,unsigned long,int ) ;
 int FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (struct bitmap*,unsigned long,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (struct bitmap*,int ,int ) ;

void FUNC_19(struct mddev *VAR_9)
{
 struct bitmap *VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 sector_t VAR_13;
 struct bitmap_counts *VAR_14;




 FUNC_9(&VAR_9->bitmap_info.mutex);
 VAR_10 = VAR_9->bitmap;
 if (VAR_10 == ((void*)0)) {
  FUNC_10(&VAR_9->bitmap_info.mutex);
  return;
 }
 if (FUNC_17(VAR_8, VAR_10->daemon_lastrun
   + VAR_9->bitmap_info.daemon_sleep))
  goto done;

 VAR_10->daemon_lastrun = VAR_8;
 if (VAR_10->allclean) {
  VAR_9->thread->timeout = VAR_4;
  goto done;
 }
 VAR_10->allclean = 1;

 if (VAR_10->mddev->queue)
  FUNC_0(VAR_10->mddev->queue,
      "md bitmap_daemon_work");





 for (VAR_11 = 0; VAR_11 < VAR_10->storage.file_pages; VAR_11++)
  if (FUNC_14(VAR_10, VAR_11,
          VAR_2))
   FUNC_11(VAR_10, VAR_11,
          VAR_1);

 if (VAR_10->need_sync &&
     VAR_9->bitmap_info.external == 0) {


  bitmap_super_t *VAR_15;
  VAR_10->need_sync = 0;
  if (VAR_10->storage.filemap) {
   VAR_15 = FUNC_2(VAR_10->storage.sb_page);
   VAR_15->events_cleared =
    FUNC_1(VAR_10->events_cleared);
   FUNC_3(VAR_15);
   FUNC_11(VAR_10, 0,
          VAR_1);
  }
 }



 VAR_14 = &VAR_10->counts;
 FUNC_12(&VAR_14->lock);
 VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_14->chunks; VAR_11++) {
  bitmap_counter_t *VAR_16;
  sector_t VAR_17 = (sector_t)VAR_11 << VAR_14->chunkshift;

  if (VAR_11 == VAR_12) {
   VAR_12 += VAR_6;
   if (!VAR_14->bp[VAR_11 >> VAR_7].pending) {
    VAR_11 |= VAR_5;
    continue;
   }
   VAR_14->bp[VAR_11 >> VAR_7].pending = 0;
  }

  VAR_16 = FUNC_6(VAR_14, VAR_17, &VAR_13, 0);
  if (!VAR_16) {
   VAR_11 |= VAR_5;
   continue;
  }
  if (*VAR_16 == 1 && !VAR_10->need_sync) {

   *VAR_16 = 0;
   FUNC_4(VAR_14, VAR_17, -1);
   FUNC_5(VAR_10, VAR_17);
  } else if (*VAR_16 && *VAR_16 <= 2) {
   *VAR_16 = 1;
   FUNC_7(VAR_14, VAR_17);
   VAR_10->allclean = 0;
  }
 }
 FUNC_13(&VAR_14->lock);

 FUNC_8(VAR_10);
 for (VAR_11 = 0;
      VAR_11 < VAR_10->storage.file_pages
       && !FUNC_15(VAR_3, &VAR_10->flags);
      VAR_11++) {
  if (FUNC_16(VAR_10, VAR_11,
       VAR_0))

   break;
  if (FUNC_14(VAR_10, VAR_11,
          VAR_1)) {
   FUNC_18(VAR_10, VAR_10->storage.filemap[VAR_11], 0);
  }
 }

 done:
 if (VAR_10->allclean == 0)
  VAR_9->thread->timeout =
   VAR_9->bitmap_info.daemon_sleep;
 FUNC_10(&VAR_9->bitmap_info.mutex);
}
