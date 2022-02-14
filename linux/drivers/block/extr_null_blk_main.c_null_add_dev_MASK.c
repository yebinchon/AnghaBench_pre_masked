
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct nullb_device {scalar_t__ queue_mode; scalar_t__ cache_size; int index; scalar_t__ zoned; int blocksize; int zone_size_sects; int flags; scalar_t__ mbps; int home_node; struct nullb* nullb; } ;
struct TYPE_19__ {int timeout; } ;
struct nullb {int index; TYPE_2__* tag_set; TYPE_2__ __tag_set; TYPE_4__* q; int list; int disk_name; struct nullb_device* dev; int lock; } ;
struct TYPE_18__ {int zoned; } ;
struct TYPE_20__ {struct nullb* queuedata; TYPE_1__ limits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*,int,int) ;
 int FUNC_13 (struct nullb*) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (struct nullb*) ;
 int FUNC_16 (struct nullb*) ;
 struct nullb* FUNC_17 (int,int ,int ) ;
 int FUNC_18 (int *,int *) ;
 int VAR_12 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct nullb*) ;
 int FUNC_22 (struct nullb*) ;
 int FUNC_23 (struct nullb*) ;
 int FUNC_24 (struct nullb*,TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_25 () ;
 int FUNC_26 (struct nullb_device*) ;
 int FUNC_27 (struct nullb_device*) ;
 int FUNC_28 (struct nullb_device*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_29 (struct nullb*) ;
 int FUNC_30 (int ,int *) ;
 int FUNC_31 (struct nullb*) ;
 scalar_t__ VAR_16 ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int ,char*,int) ;
 TYPE_2__ VAR_17 ;

__attribute__((used)) static int FUNC_34(struct nullb_device *VAR_18)
{
 struct nullb *VAR_19;
 int VAR_20;

 FUNC_26(VAR_18);

 VAR_19 = FUNC_17(sizeof(*VAR_19), VAR_3, VAR_18->home_node);
 if (!VAR_19) {
  VAR_20 = -VAR_2;
  goto out;
 }
 VAR_19->dev = VAR_18;
 VAR_18->nullb = VAR_19;

 FUNC_32(&VAR_19->lock);

 VAR_20 = FUNC_31(VAR_19);
 if (VAR_20)
  goto out_free_nullb;

 if (VAR_18->queue_mode == VAR_8) {
  if (VAR_16) {
   VAR_19->tag_set = &VAR_17;
   VAR_20 = 0;
  } else {
   VAR_19->tag_set = &VAR_19->__tag_set;
   VAR_20 = FUNC_24(VAR_19, VAR_19->tag_set);
  }

  if (VAR_20)
   goto out_cleanup_queues;

  if (!FUNC_25())
   goto out_cleanup_queues;

  VAR_19->tag_set->timeout = 5 * VAR_4;
  VAR_19->q = FUNC_4(VAR_19->tag_set);
  if (FUNC_0(VAR_19->q)) {
   VAR_20 = -VAR_2;
   goto out_cleanup_tags;
  }
  FUNC_23(VAR_19);
 } else if (VAR_18->queue_mode == VAR_7) {
  VAR_19->q = FUNC_1(VAR_3, VAR_18->home_node);
  if (!VAR_19->q) {
   VAR_20 = -VAR_2;
   goto out_cleanup_queues;
  }
  FUNC_9(VAR_19->q, VAR_13);
  VAR_20 = FUNC_15(VAR_19);
  if (VAR_20)
   goto out_cleanup_blk_queue;
 }

 if (VAR_18->mbps) {
  FUNC_30(VAR_6, &VAR_18->flags);
  FUNC_29(VAR_19);
 }

 if (VAR_18->cache_size > 0) {
  FUNC_30(VAR_5, &VAR_19->dev->flags);
  FUNC_12(VAR_19->q, 1, 1);
 }

 if (VAR_18->zoned) {
  VAR_20 = FUNC_28(VAR_18);
  if (VAR_20)
   goto out_cleanup_blk_queue;

  FUNC_5(VAR_19->q, VAR_18->zone_size_sects);
  VAR_19->q->limits.zoned = VAR_0;
  FUNC_7(VAR_11, VAR_19->q);
  FUNC_11(VAR_19->q,
      VAR_1);
 }

 VAR_19->q->queuedata = VAR_19;
 FUNC_7(VAR_10, VAR_19->q);
 FUNC_6(VAR_9, VAR_19->q);

 FUNC_19(&VAR_12);
 VAR_19->index = FUNC_14(&VAR_14, 0, 0, VAR_3);
 VAR_18->index = VAR_19->index;
 FUNC_20(&VAR_12);

 FUNC_8(VAR_19->q, VAR_18->blocksize);
 FUNC_10(VAR_19->q, VAR_18->blocksize);

 FUNC_21(VAR_19);

 FUNC_33(VAR_19->disk_name, "nullb%d", VAR_19->index);

 VAR_20 = FUNC_22(VAR_19);
 if (VAR_20)
  goto out_cleanup_zone;

 FUNC_19(&VAR_12);
 FUNC_18(&VAR_19->list, &VAR_15);
 FUNC_20(&VAR_12);

 return 0;
out_cleanup_zone:
 if (VAR_18->zoned)
  FUNC_27(VAR_18);
out_cleanup_blk_queue:
 FUNC_2(VAR_19->q);
out_cleanup_tags:
 if (VAR_18->queue_mode == VAR_8 && VAR_19->tag_set == &VAR_19->__tag_set)
  FUNC_3(VAR_19->tag_set);
out_cleanup_queues:
 FUNC_13(VAR_19);
out_free_nullb:
 FUNC_16(VAR_19);
out:
 return VAR_20;
}
