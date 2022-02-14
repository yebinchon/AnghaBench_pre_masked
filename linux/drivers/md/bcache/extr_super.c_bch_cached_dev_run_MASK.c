
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct closure {int dummy; } ;
struct bcache_device {int kobj; int disk; int c; } ;
struct TYPE_5__ {char* uuid; int label; } ;
struct cached_dev {int status_update_thread; struct bcache_device disk; int bdev; TYPE_2__ sb; int backing_dev_name; int running; scalar_t__ io_disable; } ;
struct TYPE_4__ {int kobj; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (struct cached_dev*,struct closure*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_8 ;
 int FUNC_7 (struct closure*) ;
 int FUNC_8 (struct closure*) ;
 TYPE_1__* FUNC_9 (int ) ;
 char* FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int *,int ,char**) ;
 int FUNC_14 (int ,struct cached_dev*,char*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (int *,int *,char*) ;

int FUNC_19(struct cached_dev *VAR_9)
{
 struct bcache_device *VAR_10 = &VAR_9->disk;
 char *VAR_11 = FUNC_12(VAR_9->sb.label, VAR_7, VAR_5);
 char *VAR_12[] = {
  "DRIVER=bcache",
  FUNC_10(VAR_5, "CACHED_UUID=%pU", VAR_9->sb.uuid),
  FUNC_10(VAR_5, "CACHED_LABEL=%s", VAR_11 ? : ""),
  ((void*)0),
 };

 if (VAR_9->io_disable) {
  FUNC_15("I/O disabled on cached dev %s",
         VAR_9->backing_dev_name);
  FUNC_11(VAR_12[1]);
  FUNC_11(VAR_12[2]);
  FUNC_11(VAR_11);
  return -VAR_3;
 }

 if (FUNC_4(&VAR_9->running, 1)) {
  FUNC_11(VAR_12[1]);
  FUNC_11(VAR_12[2]);
  FUNC_11(VAR_11);
  FUNC_16("cached dev %s is running already",
         VAR_9->backing_dev_name);
  return -VAR_2;
 }

 if (!VAR_10->c &&
     FUNC_0(&VAR_9->sb) != VAR_0) {
  struct closure VAR_13;

  FUNC_7(&VAR_13);

  FUNC_2(&VAR_9->sb, VAR_1);
  FUNC_5(VAR_9, &VAR_13);
  FUNC_8(&VAR_13);
 }

 FUNC_3(VAR_10->disk);
 FUNC_6(VAR_9->bdev, VAR_9->disk.disk);




 FUNC_13(&FUNC_9(VAR_10->disk)->kobj, VAR_6, VAR_12);
 FUNC_11(VAR_12[1]);
 FUNC_11(VAR_12[2]);
 FUNC_11(VAR_11);

 if (FUNC_18(&VAR_10->kobj, &FUNC_9(VAR_10->disk)->kobj, "dev") ||
     FUNC_18(&FUNC_9(VAR_10->disk)->kobj,
         &VAR_10->kobj, "bcache")) {
  FUNC_15("Couldn't create bcache dev <-> disk sysfs symlinks");
  return -VAR_4;
 }

 VAR_9->status_update_thread = FUNC_14(VAR_8,
            VAR_9, "bcache_status_update");
 if (FUNC_1(VAR_9->status_update_thread)) {
  FUNC_17("failed to create bcache_status_update kthread, "
   "continue to run without monitoring backing "
   "device status");
 }

 return 0;
}
