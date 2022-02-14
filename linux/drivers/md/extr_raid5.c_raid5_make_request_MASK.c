
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int state; struct stripe_head* batch_head; } ;
struct r5conf {scalar_t__ reshape_progress; int reshape_safe; int wait_for_overlap; int preread_active_stripes; int gen_lock; int device_lock; } ;
struct mddev {scalar_t__ degraded; scalar_t__ reshape_position; int thread; scalar_t__ reshape_backwards; struct r5conf* private; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {int bi_opf; int bi_status; int * bi_next; TYPE_1__ bi_iter; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int const VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;
 int FUNC_1 (struct stripe_head*,struct bio*,int,int const,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 scalar_t__ FUNC_6 (struct bio*) ;
 struct bio* FUNC_7 (struct mddev*,struct bio*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct r5conf*,struct bio*) ;
 int FUNC_11 (struct mddev*,struct bio*) ;
 int FUNC_12 (struct mddev*,struct bio*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct mddev*) ;
 int FUNC_15 (struct mddev*,struct bio*) ;
 int FUNC_16 (char*,unsigned long long,unsigned long long) ;
 int FUNC_17 (int *,int *,int ) ;
 int FUNC_18 (struct r5conf*,int,int,int*,int *) ;
 struct stripe_head* FUNC_19 (struct r5conf*,int,int,int,int ) ;
 int FUNC_20 (struct stripe_head*) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *,int) ;
 int FUNC_23 (struct mddev*,struct stripe_head*) ;
 int FUNC_24 () ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,int *) ;
 scalar_t__ FUNC_29 (int ,int *) ;
 scalar_t__ FUNC_30 (int) ;
 int VAR_16 ;

__attribute__((used)) static bool FUNC_31(struct mddev *VAR_17, struct bio * VAR_18)
{
 struct r5conf *VAR_19 = VAR_17->private;
 int VAR_20;
 sector_t VAR_21;
 sector_t VAR_22, VAR_23;
 struct stripe_head *VAR_24;
 const int VAR_25 = FUNC_3(VAR_18);
 FUNC_0(VAR_16);
 bool VAR_26;
 bool VAR_27 = 0;

 if (FUNC_30(VAR_18->bi_opf & VAR_5)) {
  int VAR_28 = FUNC_10(VAR_19, VAR_18);

  if (VAR_28 == 0)
   return 1;
  if (VAR_28 == -VAR_1) {
   FUNC_12(VAR_17, VAR_18);
   return 1;
  }





  VAR_27 = VAR_18->bi_opf & VAR_5;
 }

 if (!FUNC_15(VAR_17, VAR_18))
  return 0;





 if (VAR_25 == VAR_3 && VAR_17->degraded == 0 &&
     VAR_17->reshape_position == VAR_2) {
  VAR_18 = FUNC_7(VAR_17, VAR_18);
  if (!VAR_18)
   return 1;
 }

 if (FUNC_30(FUNC_6(VAR_18) == VAR_4)) {
  FUNC_11(VAR_17, VAR_18);
  FUNC_14(VAR_17);
  return 1;
 }

 VAR_22 = VAR_18->bi_iter.bi_sector & ~((sector_t)VAR_13-1);
 VAR_23 = FUNC_4(VAR_18);
 VAR_18->bi_next = ((void*)0);

 FUNC_17(&VAR_19->wait_for_overlap, &VAR_16, VAR_14);
 for (;VAR_22 < VAR_23; VAR_22 += VAR_13) {
  int VAR_29;
  int VAR_30;

  VAR_26 = 0;
 retry:
  VAR_30 = FUNC_21(&VAR_19->gen_lock);
  VAR_29 = 0;
  if (VAR_26)
   FUNC_17(&VAR_19->wait_for_overlap, &VAR_16,
    VAR_14);
  if (FUNC_30(VAR_19->reshape_progress != VAR_2)) {
   FUNC_26(&VAR_19->device_lock);
   if (VAR_17->reshape_backwards
       ? VAR_22 < VAR_19->reshape_progress
       : VAR_22 >= VAR_19->reshape_progress) {
    VAR_29 = 1;
   } else {
    if (VAR_17->reshape_backwards
        ? VAR_22 < VAR_19->reshape_safe
        : VAR_22 >= VAR_19->reshape_safe) {
     FUNC_27(&VAR_19->device_lock);
     FUNC_24();
     VAR_26 = 1;
     goto retry;
    }
   }
   FUNC_27(&VAR_19->device_lock);
  }

  VAR_21 = FUNC_18(VAR_19, VAR_22,
        VAR_29,
        &VAR_20, ((void*)0));
  FUNC_16("raid456: raid5_make_request, sector %llu logical %llu\n",
   (unsigned long long)VAR_21,
   (unsigned long long)VAR_22);

  VAR_24 = FUNC_19(VAR_19, VAR_21, VAR_29,
           (VAR_18->bi_opf & VAR_6), 0);
  if (VAR_24) {
   if (FUNC_30(VAR_29)) {
    int VAR_31 = 0;
    FUNC_26(&VAR_19->device_lock);
    if (VAR_17->reshape_backwards
        ? VAR_22 >= VAR_19->reshape_progress
        : VAR_22 < VAR_19->reshape_progress)

     VAR_31 = 1;
    FUNC_27(&VAR_19->device_lock);
    if (VAR_31) {
     FUNC_20(VAR_24);
     FUNC_24();
     VAR_26 = 1;
     goto retry;
    }
   }
   if (FUNC_22(&VAR_19->gen_lock, VAR_30)) {



    FUNC_20(VAR_24);
    goto retry;
   }

   if (FUNC_29(VAR_9, &VAR_24->state) ||
       !FUNC_1(VAR_24, VAR_18, VAR_20, VAR_25, VAR_29)) {




    FUNC_13(VAR_17->thread);
    FUNC_20(VAR_24);
    FUNC_24();
    VAR_26 = 1;
    goto retry;
   }
   if (VAR_27) {
    FUNC_25(VAR_12, &VAR_24->state);

    VAR_27 = 0;
   }

   if (!VAR_24->batch_head)
    FUNC_25(VAR_10, &VAR_24->state);
   FUNC_8(VAR_8, &VAR_24->state);
   if ((!VAR_24->batch_head || VAR_24 == VAR_24->batch_head) &&
       (VAR_18->bi_opf & VAR_7) &&
       !FUNC_28(VAR_11, &VAR_24->state))
    FUNC_2(&VAR_19->preread_active_stripes);
   FUNC_23(VAR_17, VAR_24);
  } else {

   VAR_18->bi_status = VAR_0;
   break;
  }
 }
 FUNC_9(&VAR_19->wait_for_overlap, &VAR_16);

 if (VAR_25 == VAR_15)
  FUNC_14(VAR_17);
 FUNC_5(VAR_18);
 return 1;
}
