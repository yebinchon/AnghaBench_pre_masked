
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


struct TYPE_13__ {int chunk_mask; } ;
struct r10conf {void* reshape_progress; int reshape_safe; int offset_diff; int cluster_sync_high; int cluster_sync_low; int copies; TYPE_1__* mirrors; TYPE_5__ geo; int r10buf_pool; scalar_t__ reshape_checkpoint; TYPE_5__ prev; } ;
struct r10bio {scalar_t__ state; int sector; int sectors; size_t read_slot; int remaining; TYPE_3__* devs; struct bio* master_bio; struct mddev* mddev; } ;
struct page {int dummy; } ;
struct mdp_superblock_1 {int reshape_position; } ;
struct mddev {int curr_resync_completed; int reshape_position; scalar_t__ sb_flags; scalar_t__ recovery; scalar_t__ reshape_backwards; int sb_wait; int thread; int kobj; struct r10conf* private; } ;
struct md_rdev {scalar_t__ flags; scalar_t__ new_data_offset; int bdev; int sb_page; scalar_t__ data_offset; } ;
struct TYPE_10__ {scalar_t__ bi_sector; scalar_t__ bi_size; } ;
struct bio {unsigned long bi_flags; struct bio* bi_next; int bi_end_io; TYPE_2__ bi_iter; scalar_t__ bi_vcnt; scalar_t__ bi_status; struct r10bio* bi_private; } ;
typedef int sector_t ;
struct TYPE_14__ {struct page** pages; } ;
struct TYPE_12__ {int (* resync_info_update ) (struct mddev*,int,int) ;} ;
struct TYPE_11__ {size_t devnum; struct bio* bio; scalar_t__ addr; struct bio* repl_bio; } ;
struct TYPE_9__ {int rdev; int replacement; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_5__*,struct r10bio*) ;
 int FUNC_2 (struct r10conf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct bio*,struct page*,int,int ) ;
 struct bio* FUNC_6 (int ,int ,struct mddev*) ;
 int FUNC_7 (struct bio*,int ) ;
 int FUNC_8 (struct bio*,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int,TYPE_5__*) ;
 int FUNC_10 (struct bio*) ;
 TYPE_6__* FUNC_11 (struct bio*) ;
 scalar_t__ VAR_16 ;
 int FUNC_12 (int,TYPE_5__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct r10conf*) ;
 TYPE_4__* VAR_17 ;
 int FUNC_15 (struct bio*,int) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct mddev*) ;
 int FUNC_18 (struct r10bio*,int *) ;
 struct mdp_superblock_1* FUNC_19 (int ) ;
 struct r10bio* FUNC_20 (struct r10conf*) ;
 void* FUNC_21 (struct mddev*,int ,int ) ;
 int FUNC_22 (struct r10conf*,int) ;
 struct md_rdev* FUNC_23 (int ) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 struct md_rdev* FUNC_26 (struct r10conf*,struct r10bio*,int*) ;
 int FUNC_27 (int ,scalar_t__*) ;
 int FUNC_28 (struct mddev*,int,int) ;
 int FUNC_29 (int *,int *,char*) ;
 scalar_t__ FUNC_30 (int ,scalar_t__*) ;
 scalar_t__ FUNC_31 (scalar_t__,scalar_t__) ;
 int FUNC_32 (struct r10conf*) ;
 int FUNC_33 (int ,int) ;

__attribute__((used)) static sector_t FUNC_34(struct mddev *VAR_18, sector_t VAR_19,
    int *VAR_20)
{
 struct r10conf *VAR_21 = VAR_18->private;
 struct r10bio *VAR_22;
 sector_t VAR_23, VAR_24, VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 struct md_rdev *VAR_29;
 int VAR_30 = 0;
 struct bio *VAR_31;
 struct bio *VAR_32, *VAR_33;
 int VAR_34 = 0;
 struct page **VAR_35;

 if (VAR_19 == 0) {

  if (VAR_18->reshape_backwards &&
      VAR_21->reshape_progress < FUNC_21(VAR_18, 0, 0)) {
   VAR_19 = (FUNC_21(VAR_18, 0, 0)
         - VAR_21->reshape_progress);
  } else if (!VAR_18->reshape_backwards &&
      VAR_21->reshape_progress > 0)
   VAR_19 = VAR_21->reshape_progress;
  if (VAR_19) {
   VAR_18->curr_resync_completed = VAR_19;
   FUNC_29(&VAR_18->kobj, ((void*)0), "sync_completed");
   *VAR_20 = 1;
   return VAR_19;
  }
 }





 if (VAR_18->reshape_backwards) {



  VAR_23 = FUNC_9(VAR_21->reshape_progress - 1,
      &VAR_21->geo);




  VAR_24 = FUNC_12(VAR_21->reshape_safe - 1,
     &VAR_21->prev);

  if (VAR_23 + VAR_21->offset_diff < VAR_24)
   VAR_30 = 1;

  VAR_25 = VAR_21->reshape_progress - 1;
  VAR_19 = VAR_25 & ~(sector_t)(VAR_21->geo.chunk_mask
            & VAR_21->prev.chunk_mask);
  if (VAR_19 + VAR_12/512 < VAR_25)
   VAR_19 = VAR_25 + 1 - VAR_12/512;
 } else {



  VAR_23 = FUNC_12(VAR_21->reshape_progress, &VAR_21->geo);




  VAR_24 = FUNC_9(VAR_21->reshape_safe, &VAR_21->prev);




  if (VAR_23 > VAR_24 + VAR_21->offset_diff)
   VAR_30 = 1;

  VAR_19 = VAR_21->reshape_progress;
  VAR_25 = VAR_19 | (VAR_21->geo.chunk_mask
         & VAR_21->prev.chunk_mask);

  if (VAR_19 + VAR_12/512 <= VAR_25)
   VAR_25 = VAR_19 + VAR_12/512 - 1;
 }

 if (VAR_30 ||
     FUNC_31(VAR_16, VAR_21->reshape_checkpoint + 10*VAR_4)) {

  FUNC_32(VAR_21);
  VAR_18->reshape_position = VAR_21->reshape_progress;
  if (VAR_18->reshape_backwards)
   VAR_18->curr_resync_completed = FUNC_21(VAR_18, 0, 0)
    - VAR_21->reshape_progress;
  else
   VAR_18->curr_resync_completed = VAR_21->reshape_progress;
  VAR_21->reshape_checkpoint = VAR_16;
  FUNC_27(VAR_6, &VAR_18->sb_flags);
  FUNC_16(VAR_18->thread);
  FUNC_33(VAR_18->sb_wait, VAR_18->sb_flags == 0 ||
      FUNC_30(VAR_5, &VAR_18->recovery));
  if (FUNC_30(VAR_5, &VAR_18->recovery)) {
   FUNC_2(VAR_21);
   return VAR_34;
  }
  VAR_21->reshape_safe = VAR_18->reshape_position;
  FUNC_2(VAR_21);
 }

 FUNC_22(VAR_21, 0);
read_more:

 VAR_22 = FUNC_20(VAR_21);
 VAR_22->state = 0;
 FUNC_22(VAR_21, 1);
 FUNC_4(&VAR_22->remaining, 0);
 VAR_22->mddev = VAR_18;
 VAR_22->sector = VAR_19;
 FUNC_27(VAR_8, &VAR_22->state);
 VAR_22->sectors = VAR_25 - VAR_19 + 1;
 VAR_29 = FUNC_26(VAR_21, VAR_22, &VAR_26);
 FUNC_0(!FUNC_30(VAR_9, &VAR_22->state));

 if (!VAR_29) {




  FUNC_18(VAR_22, &VAR_21->r10buf_pool);
  FUNC_27(VAR_5, &VAR_18->recovery);
  return VAR_34;
 }

 VAR_33 = FUNC_6(VAR_3, VAR_13, VAR_18);

 FUNC_7(VAR_33, VAR_29->bdev);
 VAR_33->bi_iter.bi_sector = (VAR_22->devs[VAR_22->read_slot].addr
          + VAR_29->data_offset);
 VAR_33->bi_private = VAR_22;
 VAR_33->bi_end_io = VAR_14;
 FUNC_8(VAR_33, VAR_10, 0);
 VAR_33->bi_flags &= (~0UL << VAR_0);
 VAR_33->bi_status = 0;
 VAR_33->bi_vcnt = 0;
 VAR_33->bi_iter.bi_size = 0;
 VAR_22->master_bio = VAR_33;
 VAR_22->read_slot = VAR_22->devs[VAR_22->read_slot].devnum;





 if (FUNC_17(VAR_18) && VAR_21->cluster_sync_high <= VAR_19) {
  struct mdp_superblock_1 *VAR_36 = ((void*)0);
  int VAR_37 = 0;

  VAR_21->cluster_sync_low = VAR_19;
  VAR_21->cluster_sync_high = VAR_19 + VAR_1;
  VAR_36 = FUNC_19(VAR_29->sb_page);
  if (VAR_36) {
   VAR_37 = FUNC_13(VAR_36->reshape_position);





   if (VAR_37 < VAR_21->cluster_sync_low)
    VAR_21->cluster_sync_low = VAR_37;
  }

  VAR_17->resync_info_update(VAR_18, VAR_21->cluster_sync_low,
         VAR_21->cluster_sync_high);
 }


 FUNC_1(&VAR_21->geo, VAR_22);

 VAR_31 = VAR_33;
 VAR_33->bi_next = ((void*)0);

 FUNC_24();
 for (VAR_28 = 0; VAR_28 < VAR_21->copies*2; VAR_28++) {
  struct bio *VAR_38;
  int VAR_39 = VAR_22->devs[VAR_28/2].devnum;
  struct md_rdev *VAR_40;
  if (VAR_28&1) {
   VAR_40 = FUNC_23(VAR_21->mirrors[VAR_39].replacement);
   VAR_38 = VAR_22->devs[VAR_28/2].repl_bio;
  } else {
   VAR_40 = FUNC_23(VAR_21->mirrors[VAR_39].rdev);
   VAR_38 = VAR_22->devs[VAR_28/2].bio;
  }
  if (!VAR_40 || FUNC_30(VAR_2, &VAR_40->flags))
   continue;

  FUNC_7(VAR_38, VAR_40->bdev);
  VAR_38->bi_iter.bi_sector = VAR_22->devs[VAR_28/2].addr +
   VAR_40->new_data_offset;
  VAR_38->bi_end_io = VAR_15;
  FUNC_8(VAR_38, VAR_11, 0);
  VAR_38->bi_next = VAR_31;
  VAR_31 = VAR_38;
 }



 VAR_27 = 0;
 VAR_35 = FUNC_11(VAR_22->devs[0].bio)->pages;
 for (VAR_28 = 0 ; VAR_28 < VAR_26; VAR_28 += VAR_7 >> 9) {
  struct page *VAR_41 = VAR_35[VAR_28 / (VAR_7 >> 9)];
  int VAR_42 = (VAR_26 - VAR_28) << 9;
  if (VAR_42 > VAR_7)
   VAR_42 = VAR_7;
  for (VAR_32 = VAR_31; VAR_32 ; VAR_32 = VAR_32->bi_next) {




   FUNC_5(VAR_32, VAR_41, VAR_42, 0);
  }
  VAR_19 += VAR_42 >> 9;
  VAR_27 += VAR_42 >> 9;
 }
 FUNC_25();
 VAR_22->sectors = VAR_27;


 FUNC_15(VAR_33, VAR_22->sectors);
 FUNC_3(&VAR_22->remaining);
 VAR_33->bi_next = ((void*)0);
 FUNC_10(VAR_33);
 VAR_34 += VAR_27;
 if (VAR_19 <= VAR_25)
  goto read_more;

 FUNC_14(VAR_21);




 if (VAR_18->reshape_backwards)
  VAR_21->reshape_progress -= VAR_34;
 else
  VAR_21->reshape_progress += VAR_34;

 return VAR_34;
}
