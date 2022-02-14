
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stripe_head {size_t pd_idx; int lru; TYPE_2__* dev; int state; } ;
struct r5l_recovery_ctx {int pos; int meta_page; } ;
struct r5l_payload_flush {int size; int * flush_stripes; } ;
struct TYPE_6__ {int type; } ;
struct r5l_payload_data_parity {int size; TYPE_3__ header; int location; } ;
struct r5l_meta_block {int meta_size; } ;
struct r5l_log {TYPE_1__* rdev; } ;
struct r5conf {int min_nr_stripes; int max_nr_stripes; } ;
struct mddev {struct r5conf* private; } ;
struct list_head {int dummy; } ;
typedef int sector_t ;
typedef int __le64 ;
typedef int __le32 ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {struct mddev* mddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct list_head*) ;
 int FUNC_7 (struct mddev*) ;
 struct r5l_meta_block* FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*,int ,...) ;
 struct stripe_head* FUNC_11 (struct r5conf*,int ,int) ;
 struct stripe_head* FUNC_12 (struct list_head*,int ) ;
 int FUNC_13 (struct list_head*,struct r5l_recovery_ctx*) ;
 int FUNC_14 (struct r5l_log*,struct stripe_head*,struct r5l_recovery_ctx*,struct r5l_payload_data_parity*,int ) ;
 int FUNC_15 (struct r5l_log*,struct stripe_head*,struct r5l_recovery_ctx*,struct r5l_payload_data_parity*,int ) ;
 int FUNC_16 (struct r5conf*,struct stripe_head*,struct r5l_recovery_ctx*) ;
 int FUNC_17 (struct stripe_head*) ;
 int FUNC_18 (struct r5l_log*,struct r5l_recovery_ctx*) ;
 int FUNC_19 (struct r5l_log*,int ,int) ;
 int FUNC_20 (struct r5conf*,int ,int ,int*,int *) ;
 int FUNC_21 (struct stripe_head*) ;
 int FUNC_22 (struct mddev*,int) ;
 scalar_t__ FUNC_23 (int ,int *) ;

__attribute__((used)) static int
FUNC_24(struct r5l_log *VAR_10,
    struct r5l_recovery_ctx *VAR_11,
    struct list_head *VAR_12)
{
 struct mddev *VAR_13 = VAR_10->rdev->mddev;
 struct r5conf *VAR_14 = VAR_13->private;
 struct r5l_meta_block *VAR_15;
 struct r5l_payload_data_parity *VAR_16;
 struct r5l_payload_flush *VAR_17;
 int VAR_18;
 sector_t VAR_19;
 sector_t VAR_20;
 struct stripe_head *VAR_21;
 int VAR_22;






 VAR_22 = FUNC_18(VAR_10, VAR_11);
 if (VAR_22 == -VAR_2)
  return -VAR_1;
 else if (VAR_22)
  return VAR_22;

 VAR_15 = FUNC_8(VAR_11->meta_page);
 VAR_18 = sizeof(struct r5l_meta_block);
 VAR_19 = FUNC_19(VAR_10, VAR_11->pos, VAR_0);

 while (VAR_18 < FUNC_2(VAR_15->meta_size)) {
  int VAR_23;

  VAR_16 = (void *)VAR_15 + VAR_18;
  VAR_17 = (void *)VAR_15 + VAR_18;

  if (FUNC_1(VAR_16->header.type) == VAR_6) {
   int VAR_24, VAR_25;

   VAR_25 = FUNC_2(VAR_17->size) / sizeof(__le64);
   for (VAR_24 = 0; VAR_24 < VAR_25; ++VAR_24) {
    VAR_20 = FUNC_3(VAR_17->flush_stripes[VAR_24]);
    VAR_21 = FUNC_12(VAR_12,
        VAR_20);
    if (VAR_21) {
     FUNC_0(FUNC_23(VAR_9, &VAR_21->state));
     FUNC_17(VAR_21);
     FUNC_5(&VAR_21->lru);
     FUNC_21(VAR_21);
    }
   }

   VAR_18 += sizeof(struct r5l_payload_flush) +
    FUNC_2(VAR_17->size);
   continue;
  }


  VAR_20 = (FUNC_1(VAR_16->header.type) == VAR_5) ?
   FUNC_20(
    VAR_14, FUNC_3(VAR_16->location), 0, &VAR_23,
    ((void*)0))
   : FUNC_3(VAR_16->location);

  VAR_21 = FUNC_12(VAR_12,
      VAR_20);

  if (!VAR_21) {
   VAR_21 = FUNC_11(VAR_14, VAR_20, 1);




   if (!VAR_21) {
    FUNC_13(
     VAR_12, VAR_11);
    VAR_21 = FUNC_11(
     VAR_14, VAR_20, 1);
   }
   if (!VAR_21) {
    int VAR_26 = VAR_14->min_nr_stripes * 2;
    FUNC_9("md/raid:%s: Increasing stripe cache size to %d to recovery data on journal.\n",
     FUNC_7(VAR_13),
     VAR_26);
    VAR_22 = FUNC_22(VAR_13, VAR_26);
    if (VAR_14->min_nr_stripes <= VAR_26 / 2) {
     FUNC_10("md/raid:%s: Cannot increase cache size, ret=%d, new_size=%d, min_nr_stripes=%d, max_nr_stripes=%d\n",
      FUNC_7(VAR_13),
      VAR_22,
      VAR_26,
      VAR_14->min_nr_stripes,
      VAR_14->max_nr_stripes);
     return -VAR_3;
    }
    VAR_21 = FUNC_11(
     VAR_14, VAR_20, 0);
   }
   if (!VAR_21) {
    FUNC_10("md/raid:%s: Cannot get enough stripes due to memory pressure. Recovery failed.\n",
     FUNC_7(VAR_13));
    return -VAR_3;
   }
   FUNC_4(&VAR_21->lru, VAR_12);
  }

  if (FUNC_1(VAR_16->header.type) == VAR_5) {
   if (!FUNC_23(VAR_9, &VAR_21->state) &&
       FUNC_23(VAR_8, &VAR_21->dev[VAR_21->pd_idx].flags)) {
    FUNC_16(VAR_14, VAR_21, VAR_11);
    FUNC_6(&VAR_21->lru, VAR_12);
   }
   FUNC_14(VAR_10, VAR_21, VAR_11, VAR_16,
            VAR_19);
  } else if (FUNC_1(VAR_16->header.type) == VAR_7)
   FUNC_15(VAR_10, VAR_21, VAR_11, VAR_16,
       VAR_19);
  else
   return -VAR_2;

  VAR_19 = FUNC_19(VAR_10, VAR_19,
       FUNC_2(VAR_16->size));

  VAR_18 += sizeof(struct r5l_payload_data_parity) +
   sizeof(__le32) *
   (FUNC_2(VAR_16->size) >> (VAR_4 - 9));
 }

 return 0;
}
