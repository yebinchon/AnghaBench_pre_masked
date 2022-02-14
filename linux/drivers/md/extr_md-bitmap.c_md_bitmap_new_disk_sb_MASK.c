
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_7__* sb_page; } ;
struct bitmap {unsigned long flags; TYPE_3__* mddev; int events_cleared; TYPE_1__ storage; } ;
struct TYPE_12__ {void* events_cleared; void* state; int uuid; void* sync_size; void* write_behind; void* daemon_sleep; void* chunksize; void* version; void* magic; } ;
typedef TYPE_4__ bitmap_super_t ;
struct TYPE_13__ {scalar_t__ index; } ;
struct TYPE_10__ {unsigned long chunksize; unsigned long daemon_sleep; unsigned long max_write_behind; scalar_t__ nodes; } ;
struct TYPE_11__ {TYPE_2__ bitmap_info; int events; int uuid; int resync_max_sectors; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 TYPE_7__* FUNC_1 (int) ;
 void* FUNC_2 (unsigned long) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 TYPE_4__* FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_11(struct bitmap *VAR_10)
{
 bitmap_super_t *VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14;

 VAR_10->storage.sb_page = FUNC_1(VAR_6 | VAR_9);
 if (VAR_10->storage.sb_page == ((void*)0))
  return -VAR_5;
 VAR_10->storage.sb_page->index = 0;

 VAR_11 = FUNC_5(VAR_10->storage.sb_page);

 VAR_11->magic = FUNC_2(VAR_0);
 VAR_11->version = FUNC_2(VAR_1);

 VAR_12 = VAR_10->mddev->bitmap_info.chunksize;
 FUNC_0(!VAR_12);
 if (!FUNC_4(VAR_12)) {
  FUNC_6(VAR_11);
  FUNC_9("bitmap chunksize not a power of 2\n");
  return -VAR_4;
 }
 VAR_11->chunksize = FUNC_2(VAR_12);

 VAR_13 = VAR_10->mddev->bitmap_info.daemon_sleep;
 if (!VAR_13 || (VAR_13 > VAR_8)) {
  FUNC_8("Choosing daemon_sleep default (5 sec)\n");
  VAR_13 = 5 * VAR_7;
 }
 VAR_11->daemon_sleep = FUNC_2(VAR_13);
 VAR_10->mddev->bitmap_info.daemon_sleep = VAR_13;





 VAR_14 = VAR_10->mddev->bitmap_info.max_write_behind;
 if (VAR_14 > VAR_3)
  VAR_14 = VAR_3 / 2;
 VAR_11->write_behind = FUNC_2(VAR_14);
 VAR_10->mddev->bitmap_info.max_write_behind = VAR_14;


 VAR_11->sync_size = FUNC_3(VAR_10->mddev->resync_max_sectors);

 FUNC_7(VAR_11->uuid, VAR_10->mddev->uuid, 16);

 FUNC_10(VAR_2, &VAR_10->flags);
 VAR_11->state = FUNC_2(VAR_10->flags);
 VAR_10->events_cleared = VAR_10->mddev->events;
 VAR_11->events_cleared = FUNC_3(VAR_10->mddev->events);
 VAR_10->mddev->bitmap_info.nodes = 0;

 FUNC_6(VAR_11);

 return 0;
}
