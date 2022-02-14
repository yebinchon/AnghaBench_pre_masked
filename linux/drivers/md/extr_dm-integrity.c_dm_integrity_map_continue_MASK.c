
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct journal_entry {int dummy; } ;
struct TYPE_12__ {unsigned int n_sectors; scalar_t__ logical_sector; } ;
struct TYPE_9__ {int bi_size; } ;
struct dm_integrity_io {int work; TYPE_5__ range; int orig_bi_end_io; int orig_bi_integrity; int orig_bi_partno; int orig_bi_disk; TYPE_2__ orig_bi_iter; struct completion* completion; scalar_t__ in_flight; scalar_t__ write; struct dm_integrity_c* ic; } ;
struct TYPE_10__ {int lock; } ;
struct dm_integrity_c {char mode; unsigned int free_section; unsigned int free_section_entry; unsigned int journal_section_entries; unsigned int n_uncommitted_sections; unsigned int sectors_per_block; unsigned int journal_entries; int metadata_wq; int recalc_bitmap; TYPE_4__* sb; TYPE_1__* dev; int writer_wq; int may_write_bitmap; TYPE_3__ endio_wait; int wait_wq; int * journal_tree; scalar_t__ free_sectors; scalar_t__ internal_hash; } ;
struct completion {int dummy; } ;
struct bitmap_block_status {int work; int bio_queue_lock; int bio_queue; } ;
struct bio {int bi_status; TYPE_2__ bi_iter; int bi_end_io; int bi_opf; int * bi_integrity; int bi_partno; int bi_disk; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ atomic_t ;
struct TYPE_11__ {scalar_t__ log2_sectors_per_block; int flags; int recalc_sector; } ;
struct TYPE_8__ {int bdev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int (*) (int *)) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct dm_integrity_io*,struct bio*,unsigned int,unsigned int) ;
 struct journal_entry* FUNC_4 (struct dm_integrity_c*,unsigned int,unsigned int) ;
 int FUNC_5 (struct dm_integrity_c*,int *,scalar_t__) ;
 int FUNC_6 (struct dm_integrity_c*,TYPE_5__*,int) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (int *,struct bio*) ;
 unsigned int FUNC_9 (struct bio*) ;
 int FUNC_10 (struct bio*,int ) ;
 int FUNC_11 (struct dm_integrity_c*,int ,scalar_t__,unsigned int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct dm_integrity_io*) ;
 struct bio* FUNC_14 (struct dm_integrity_io*,int) ;
 int FUNC_15 (struct dm_integrity_c*) ;
 int FUNC_16 (struct dm_integrity_c*,struct bio*) ;
 int FUNC_17 (struct dm_integrity_c*,struct dm_integrity_io*) ;
 unsigned int FUNC_18 (struct dm_integrity_c*,scalar_t__,scalar_t__*) ;
 int FUNC_19 (struct bio*) ;
 int FUNC_20 (struct completion*) ;
 int FUNC_21 (int *) ;
 int VAR_6 ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct journal_entry*) ;
 int FUNC_24 (struct journal_entry*) ;
 scalar_t__ FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int) ;
 unsigned int FUNC_27 (unsigned int,scalar_t__) ;
 int FUNC_28 (int ,int *) ;
 int FUNC_29 (struct dm_integrity_c*,TYPE_5__*) ;
 struct bitmap_block_status* FUNC_30 (struct dm_integrity_c*,scalar_t__) ;
 int FUNC_31 (struct dm_integrity_c*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (struct dm_integrity_c*,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_37 (int) ;
 int FUNC_38 (struct dm_integrity_c*,TYPE_5__*) ;
 int FUNC_39 (struct completion*) ;
 int FUNC_40 (struct dm_integrity_c*,unsigned int*) ;

__attribute__((used)) static void FUNC_41(struct dm_integrity_io *VAR_7, bool VAR_8)
{
 struct dm_integrity_c *VAR_9 = VAR_7->ic;
 struct bio *VAR_10 = FUNC_14(VAR_7, sizeof(struct dm_integrity_io));
 unsigned VAR_11, VAR_12;
 unsigned VAR_13;
 struct completion VAR_14;
 bool VAR_15 = VAR_9->internal_hash && !VAR_7->write;

 if (VAR_15 && VAR_8) {
  FUNC_2(&VAR_7->work, FUNC_21);
  FUNC_28(VAR_9->metadata_wq, &VAR_7->work);
  return;
 }

lock_retry:
 FUNC_33(&VAR_9->endio_wait.lock);
retry:
 if (FUNC_37(FUNC_15(VAR_9))) {
  FUNC_35(&VAR_9->endio_wait.lock);
  FUNC_16(VAR_9, VAR_10);
  return;
 }
 VAR_7->range.n_sectors = FUNC_9(VAR_10);
 VAR_13 = VAR_2;
 if (FUNC_26(VAR_9->mode == 'J')) {
  if (VAR_7->write) {
   unsigned VAR_16, VAR_17, VAR_18;
   unsigned VAR_19, VAR_20, VAR_21;

   VAR_7->range.n_sectors = FUNC_27(VAR_7->range.n_sectors,
         (sector_t)VAR_9->free_sectors << VAR_9->sb->log2_sectors_per_block);
   if (FUNC_37(!VAR_7->range.n_sectors)) {
    if (VAR_8)
     goto offload_to_thread;
    FUNC_31(VAR_9);
    goto retry;
   }
   VAR_21 = VAR_7->range.n_sectors >> VAR_9->sb->log2_sectors_per_block;
   VAR_9->free_sectors -= VAR_21;
   VAR_11 = VAR_9->free_section;
   VAR_12 = VAR_9->free_section_entry;

   VAR_16 = VAR_9->free_section_entry + VAR_21;
   VAR_9->free_section_entry = VAR_16 % VAR_9->journal_section_entries;
   VAR_9->free_section += VAR_16 / VAR_9->journal_section_entries;
   VAR_9->n_uncommitted_sections += VAR_16 / VAR_9->journal_section_entries;
   FUNC_40(VAR_9, &VAR_9->free_section);

   VAR_18 = VAR_11 * VAR_9->journal_section_entries + VAR_12;
   VAR_19 = VAR_11;
   VAR_20 = VAR_12;
   VAR_17 = 0;
   do {
    struct journal_entry *VAR_22;

    FUNC_5(VAR_9, &VAR_9->journal_tree[VAR_18], VAR_7->range.logical_sector + VAR_17);
    VAR_18++;
    if (FUNC_37(VAR_18 >= VAR_9->journal_entries))
     VAR_18 = 0;

    VAR_22 = FUNC_4(VAR_9, VAR_19, VAR_20);
    FUNC_1(!FUNC_23(VAR_22));
    FUNC_24(VAR_22);
    VAR_20++;
    if (FUNC_37(VAR_20 == VAR_9->journal_section_entries)) {
     VAR_20 = 0;
     VAR_19++;
     FUNC_40(VAR_9, &VAR_19);
    }
   } while ((VAR_17 += VAR_9->sectors_per_block) < VAR_7->range.n_sectors);

   FUNC_35(&VAR_9->endio_wait.lock);
   goto journal_read_write;
  } else {
   sector_t VAR_23;
   VAR_13 = FUNC_18(VAR_9, VAR_7->range.logical_sector, &VAR_23);
   if (FUNC_26(VAR_13 == VAR_2)) {
    if (FUNC_37(VAR_7->range.n_sectors > VAR_23 - VAR_7->range.logical_sector))
     VAR_7->range.n_sectors = VAR_23 - VAR_7->range.logical_sector;
   } else {
    unsigned VAR_24;
    unsigned VAR_25 = VAR_13 + 1;
    for (VAR_24 = VAR_9->sectors_per_block; VAR_24 < VAR_7->range.n_sectors; VAR_24 += VAR_9->sectors_per_block, VAR_25++) {
     if (!FUNC_36(VAR_9, VAR_25, VAR_7->range.logical_sector + VAR_24))
      break;
    }
    VAR_7->range.n_sectors = VAR_24;
   }
  }
 }
 if (FUNC_37(!FUNC_6(VAR_9, &VAR_7->range, 1))) {





  if (VAR_8) {
offload_to_thread:
   FUNC_35(&VAR_9->endio_wait.lock);
   FUNC_2(&VAR_7->work, FUNC_21);
   FUNC_28(VAR_9->wait_wq, &VAR_7->work);
   return;
  }
  if (VAR_13 != VAR_2)
   VAR_7->range.n_sectors = VAR_9->sectors_per_block;
  FUNC_38(VAR_9, &VAR_7->range);





  if (VAR_13 != VAR_2) {
   sector_t VAR_26;
   unsigned VAR_27 = FUNC_18(VAR_9, VAR_7->range.logical_sector, &VAR_26);
   if (FUNC_37(VAR_27 != VAR_13)) {
    FUNC_29(VAR_9, &VAR_7->range);
    goto retry;
   }
  }
 }
 FUNC_35(&VAR_9->endio_wait.lock);

 if (FUNC_37(VAR_13 != VAR_2)) {
  VAR_11 = VAR_13 / VAR_9->journal_section_entries;
  VAR_12 = VAR_13 % VAR_9->journal_section_entries;
  goto journal_read_write;
 }

 if (VAR_9->mode == 'B' && VAR_7->write) {
  if (!FUNC_11(VAR_9, VAR_9->may_write_bitmap, VAR_7->range.logical_sector,
         VAR_7->range.n_sectors, VAR_1)) {
   struct bitmap_block_status *VAR_28;

   VAR_28 = FUNC_30(VAR_9, VAR_7->range.logical_sector);
   FUNC_32(&VAR_28->bio_queue_lock);
   FUNC_8(&VAR_28->bio_queue, VAR_10);
   FUNC_34(&VAR_28->bio_queue_lock);
   FUNC_28(VAR_9->writer_wq, &VAR_28->work);
   return;
  }
 }

 VAR_7->in_flight = (atomic_t)FUNC_0(2);

 if (VAR_15) {
  FUNC_20(&VAR_14);
  VAR_7->completion = &VAR_14;
 } else
  VAR_7->completion = ((void*)0);

 VAR_7->orig_bi_iter = VAR_10->bi_iter;

 VAR_7->orig_bi_disk = VAR_10->bi_disk;
 VAR_7->orig_bi_partno = VAR_10->bi_partno;
 FUNC_10(VAR_10, VAR_9->dev->bdev);

 VAR_7->orig_bi_integrity = FUNC_7(VAR_10);
 VAR_10->bi_integrity = ((void*)0);
 VAR_10->bi_opf &= ~VAR_3;

 VAR_7->orig_bi_end_io = VAR_10->bi_end_io;
 VAR_10->bi_end_io = VAR_6;

 VAR_10->bi_iter.bi_size = VAR_7->range.n_sectors << VAR_5;
 FUNC_19(VAR_10);

 if (VAR_15) {
  FUNC_39(&VAR_14);
  if (VAR_9->sb->flags & FUNC_12(VAR_4) &&
      VAR_7->range.logical_sector + VAR_7->range.n_sectors > FUNC_25(VAR_9->sb->recalc_sector))
   goto skip_check;
  if (VAR_9->mode == 'B') {
   if (!FUNC_11(VAR_9, VAR_9->recalc_bitmap, VAR_7->range.logical_sector,
          VAR_7->range.n_sectors, VAR_0))
    goto skip_check;
  }

  if (FUNC_26(!VAR_10->bi_status))
   FUNC_22(&VAR_7->work);
  else
skip_check:
   FUNC_13(VAR_7);

 } else {
  FUNC_2(&VAR_7->work, FUNC_22);
  FUNC_28(VAR_9->metadata_wq, &VAR_7->work);
 }

 return;

journal_read_write:
 if (FUNC_37(FUNC_3(VAR_7, VAR_10, VAR_11, VAR_12)))
  goto lock_retry;

 FUNC_17(VAR_9, VAR_7);
}
