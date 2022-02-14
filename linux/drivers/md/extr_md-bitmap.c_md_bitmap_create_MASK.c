
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ daemon_sleep; int chunksize; int external; scalar_t__ offset; struct file* file; } ;
struct TYPE_5__ {struct kernfs_node* sd; } ;
struct mddev {TYPE_3__ bitmap_info; int flags; TYPE_1__ kobj; int resync_max_sectors; } ;
struct kernfs_node {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int pages; int lock; } ;
struct TYPE_6__ {struct file* file; } ;
struct bitmap {int cluster_slot; int flags; TYPE_4__ counts; int daemon_lastrun; TYPE_2__ storage; int * sysfs_can_clear; struct mddev* mddev; int behind_wait; int overflow_wait; int write_wait; int pending_writes; } ;
typedef int sector_t ;
typedef int bitmap_super_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bitmap* FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct bitmap*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 struct bitmap* FUNC_7 (int,int ) ;
 int FUNC_8 (struct bitmap*) ;
 int FUNC_9 (struct bitmap*) ;
 int FUNC_10 (struct bitmap*) ;
 int FUNC_11 (struct bitmap*,int ,int ,int) ;
 int FUNC_12 (struct mddev*) ;
 int FUNC_13 (char*,int ,int ) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int *) ;
 void* FUNC_16 (struct kernfs_node*,char*) ;
 int FUNC_17 (struct kernfs_node*) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 int FUNC_20 (struct file*,int) ;

struct bitmap *FUNC_21(struct mddev *VAR_9, int VAR_10)
{
 struct bitmap *VAR_11;
 sector_t VAR_12 = VAR_9->resync_max_sectors;
 struct file *VAR_13 = VAR_9->bitmap_info.file;
 int VAR_14;
 struct kernfs_node *VAR_15 = ((void*)0);

 FUNC_1(sizeof(bitmap_super_t) != 256);

 FUNC_0(VAR_13 && VAR_9->bitmap_info.offset);

 if (FUNC_19(VAR_7, &VAR_9->flags)) {
  FUNC_14("md/raid:%s: array with journal cannot have bitmap\n",
     FUNC_12(VAR_9));
  return FUNC_2(-VAR_1);
 }

 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_5);
 if (!VAR_11)
  return FUNC_2(-VAR_4);

 FUNC_15(&VAR_11->counts.lock);
 FUNC_3(&VAR_11->pending_writes, 0);
 FUNC_6(&VAR_11->write_wait);
 FUNC_6(&VAR_11->overflow_wait);
 FUNC_6(&VAR_11->behind_wait);

 VAR_11->mddev = VAR_9;
 VAR_11->cluster_slot = VAR_10;

 if (VAR_9->kobj.sd)
  VAR_15 = FUNC_16(VAR_9->kobj.sd, "bitmap");
 if (VAR_15) {
  VAR_11->sysfs_can_clear = FUNC_16(VAR_15, "can_clear");
  FUNC_17(VAR_15);
 } else
  VAR_11->sysfs_can_clear = ((void*)0);

 VAR_11->storage.file = VAR_13;
 if (VAR_13) {
  FUNC_5(VAR_13);




  FUNC_20(VAR_13, 1);
 }

 if (!VAR_9->bitmap_info.external) {




  if (FUNC_18(VAR_6, &VAR_9->flags))
   VAR_14 = FUNC_9(VAR_11);
  else
   VAR_14 = FUNC_10(VAR_11);
 } else {
  VAR_14 = 0;
  if (VAR_9->bitmap_info.chunksize == 0 ||
      VAR_9->bitmap_info.daemon_sleep == 0)


   VAR_14 = -VAR_2;
 }
 if (VAR_14)
  goto error;

 VAR_11->daemon_lastrun = VAR_8;
 VAR_14 = FUNC_11(VAR_11, VAR_12, VAR_9->bitmap_info.chunksize, 1);
 if (VAR_14)
  goto error;

 FUNC_13("created bitmap (%lu pages) for device %s\n",
   VAR_11->counts.pages, FUNC_4(VAR_11));

 VAR_14 = FUNC_19(VAR_0, &VAR_11->flags) ? -VAR_3 : 0;
 if (VAR_14)
  goto error;

 return VAR_11;
 error:
 FUNC_8(VAR_11);
 return FUNC_2(VAR_14);
}
