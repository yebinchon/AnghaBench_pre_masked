
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct request_queue {int backing_dev_info; } ;
struct drbd_md {int flags; int uuid_lock; scalar_t__* uuid; } ;
struct drbd_device {int ed_uuid; int flags; int local_cnt; int ap_bio_cnt; int bm_writ_cnt; int al_writ_cnt; int writ_cnt; int read_cnt; int this_bdev; TYPE_1__* ldev; } ;
struct device_statistics {int dev_upper_blocked; int history_uuids_len; int dev_exposed_data_uuid; int dev_al_suspended; void* dev_lower_pending; void* dev_upper_pending; int dev_bm_writes; int dev_al_writes; int dev_write; int dev_read; int dev_size; int dev_lower_blocked; int dev_disk_flags; scalar_t__ dev_current_uuid; scalar_t__ history_uuids; } ;
struct TYPE_2__ {int backing_bdev; struct drbd_md md; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int *) ;
 struct request_queue* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct drbd_device*) ;
 int FUNC_6 (struct drbd_device*) ;
 int FUNC_7 (struct device_statistics*,int ,int) ;
 int FUNC_8 (struct drbd_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct device_statistics *VAR_7,
     struct drbd_device *VAR_8)
{
 FUNC_7(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->dev_upper_blocked = !FUNC_6(VAR_8);
 if (FUNC_5(VAR_8)) {
  struct drbd_md *VAR_9 = &VAR_8->ldev->md;
  u64 *VAR_10 = (u64 *)VAR_7->history_uuids;
  struct request_queue *VAR_11;
  int VAR_12;

  FUNC_9(&VAR_9->uuid_lock);
  VAR_7->dev_current_uuid = VAR_9->uuid[VAR_2];
  FUNC_0(sizeof(VAR_7->history_uuids) < VAR_3 - VAR_4 + 1);
  for (VAR_12 = 0; VAR_12 < VAR_3 - VAR_4 + 1; VAR_12++)
   VAR_10[VAR_12] = VAR_9->uuid[VAR_4 + VAR_12];
  for (; VAR_12 < VAR_1; VAR_12++)
   VAR_10[VAR_12] = 0;
  VAR_7->history_uuids_len = VAR_1;
  FUNC_10(&VAR_9->uuid_lock);

  VAR_7->dev_disk_flags = VAR_9->flags;
  VAR_11 = FUNC_2(VAR_8->ldev->backing_bdev);
  VAR_7->dev_lower_blocked =
   FUNC_3(VAR_11->backing_dev_info,
          (1 << VAR_5) |
          (1 << VAR_6));
  FUNC_8(VAR_8);
 }
 VAR_7->dev_size = FUNC_4(VAR_8->this_bdev);
 VAR_7->dev_read = VAR_8->read_cnt;
 VAR_7->dev_write = VAR_8->writ_cnt;
 VAR_7->dev_al_writes = VAR_8->al_writ_cnt;
 VAR_7->dev_bm_writes = VAR_8->bm_writ_cnt;
 VAR_7->dev_upper_pending = FUNC_1(&VAR_8->ap_bio_cnt);
 VAR_7->dev_lower_pending = FUNC_1(&VAR_8->local_cnt);
 VAR_7->dev_al_suspended = FUNC_11(VAR_0, &VAR_8->flags);
 VAR_7->dev_exposed_data_uuid = VAR_8->ed_uuid;
}
