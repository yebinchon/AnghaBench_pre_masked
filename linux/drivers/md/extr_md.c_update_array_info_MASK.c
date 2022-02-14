
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ offset; scalar_t__ default_offset; scalar_t__ nodes; int default_space; int space; } ;
struct mddev {scalar_t__ major_version; scalar_t__ minor_version; scalar_t__ ctime; scalar_t__ level; int persistent; scalar_t__ chunk_sectors; int dev_sectors; scalar_t__ raid_disks; scalar_t__ layout; scalar_t__ new_layout; TYPE_3__ bitmap_info; struct bitmap* bitmap; scalar_t__ sync_thread; scalar_t__ recovery; int * thread; TYPE_1__* pers; } ;
struct TYPE_8__ {scalar_t__ file; } ;
struct bitmap {TYPE_2__ storage; } ;
typedef int sector_t ;
struct TYPE_10__ {scalar_t__ major_version; scalar_t__ minor_version; scalar_t__ ctime; scalar_t__ level; scalar_t__ chunk_size; int state; int size; scalar_t__ raid_disks; scalar_t__ layout; int not_persistent; } ;
typedef TYPE_4__ mdu_array_info_t ;
struct TYPE_11__ {scalar_t__ (* lock_all_bitmaps ) (struct mddev*) ;int (* leave ) (struct mddev*) ;int (* unlock_all_bitmaps ) (struct mddev*) ;} ;
struct TYPE_7__ {int (* check_reshape ) (struct mddev*) ;int * quiesce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bitmap*) ;
 int VAR_5 ;
 int FUNC_1 (struct bitmap*) ;
 struct bitmap* FUNC_2 (struct mddev*,int) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;
 TYPE_6__* VAR_6 ;
 int FUNC_5 (struct mddev*,int) ;
 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (struct mddev*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct mddev*) ;
 scalar_t__ FUNC_10 (struct mddev*) ;
 int FUNC_11 (struct mddev*) ;
 int FUNC_12 (struct mddev*) ;
 int FUNC_13 (struct mddev*,scalar_t__) ;
 int FUNC_14 (struct mddev*,int) ;

__attribute__((used)) static int FUNC_15(struct mddev *VAR_7, mdu_array_info_t *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;


 if (VAR_7->bitmap && VAR_7->bitmap_info.offset)
  VAR_11 |= (1 << VAR_5);

 if (VAR_7->major_version != VAR_8->major_version ||
     VAR_7->minor_version != VAR_8->minor_version ||

     VAR_7->ctime != VAR_8->ctime ||
     VAR_7->level != VAR_8->level ||

     VAR_7->persistent != !VAR_8->not_persistent ||
     VAR_7->chunk_sectors != VAR_8->chunk_size >> 9 ||

     ((VAR_11^VAR_8->state) & 0xfffffe00)
  )
  return -VAR_2;

 if (VAR_8->size >= 0 && VAR_7->dev_sectors / 2 != VAR_8->size)
  VAR_10++;
 if (VAR_7->raid_disks != VAR_8->raid_disks)
  VAR_10++;
 if (VAR_7->layout != VAR_8->layout)
  VAR_10++;
 if ((VAR_11 ^ VAR_8->state) & (1<<VAR_5))
  VAR_10++;
 if (VAR_10 == 0)
  return 0;
 if (VAR_10 > 1)
  return -VAR_2;

 if (VAR_7->layout != VAR_8->layout) {




  if (VAR_7->pers->check_reshape == ((void*)0))
   return -VAR_2;
  else {
   VAR_7->new_layout = VAR_8->layout;
   VAR_9 = VAR_7->pers->check_reshape(VAR_7);
   if (VAR_9)
    VAR_7->new_layout = VAR_7->layout;
   return VAR_9;
  }
 }
 if (VAR_8->size >= 0 && VAR_7->dev_sectors / 2 != VAR_8->size)
  VAR_9 = FUNC_14(VAR_7, (sector_t)VAR_8->size * 2);

 if (VAR_7->raid_disks != VAR_8->raid_disks)
  VAR_9 = FUNC_13(VAR_7, VAR_8->raid_disks);

 if ((VAR_11 ^ VAR_8->state) & (1<<VAR_5)) {
  if (VAR_7->pers->quiesce == ((void*)0) || VAR_7->thread == ((void*)0)) {
   VAR_9 = -VAR_2;
   goto err;
  }
  if (VAR_7->recovery || VAR_7->sync_thread) {
   VAR_9 = -VAR_0;
   goto err;
  }
  if (VAR_8->state & (1<<VAR_5)) {
   struct bitmap *VAR_12;

   if (VAR_7->bitmap) {
    VAR_9 = -VAR_1;
    goto err;
   }
   if (VAR_7->bitmap_info.default_offset == 0) {
    VAR_9 = -VAR_2;
    goto err;
   }
   VAR_7->bitmap_info.offset =
    VAR_7->bitmap_info.default_offset;
   VAR_7->bitmap_info.space =
    VAR_7->bitmap_info.default_space;
   VAR_12 = FUNC_2(VAR_7, -1);
   FUNC_7(VAR_7);
   if (!FUNC_0(VAR_12)) {
    VAR_7->bitmap = VAR_12;
    VAR_9 = FUNC_4(VAR_7);
   } else
    VAR_9 = FUNC_1(VAR_12);
   if (VAR_9)
    FUNC_3(VAR_7);
   FUNC_6(VAR_7);
  } else {

   if (!VAR_7->bitmap) {
    VAR_9 = -VAR_3;
    goto err;
   }
   if (VAR_7->bitmap->storage.file) {
    VAR_9 = -VAR_2;
    goto err;
   }
   if (VAR_7->bitmap_info.nodes) {

    if (VAR_6->lock_all_bitmaps(VAR_7) <= 0) {
     FUNC_8("md: can't change bitmap to none since the array is in use by more than one node\n");
     VAR_9 = -VAR_4;
     VAR_6->unlock_all_bitmaps(VAR_7);
     goto err;
    }

    VAR_7->bitmap_info.nodes = 0;
    VAR_6->leave(VAR_7);
   }
   FUNC_7(VAR_7);
   FUNC_3(VAR_7);
   FUNC_6(VAR_7);
   VAR_7->bitmap_info.offset = 0;
  }
 }
 FUNC_5(VAR_7, 1);
 return VAR_9;
err:
 return VAR_9;
}
