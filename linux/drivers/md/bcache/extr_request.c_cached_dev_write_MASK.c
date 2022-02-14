
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int bypass; int writeback; int cl; TYPE_5__* c; struct bio* bio; int status; } ;
struct TYPE_7__ {int bi_sector; } ;
struct bio {int bi_opf; void* bi_end_io; struct closure* bi_private; TYPE_2__ bi_iter; } ;
struct TYPE_6__ {struct bio bio; } ;
struct closure {int dummy; } ;
struct search {TYPE_4__ iop; struct bio* orig_bio; TYPE_1__ bio; struct closure cl; } ;
struct TYPE_8__ {int bio_split; int id; } ;
struct cached_dev {TYPE_3__ disk; int bdev; int writeback_keys; int writeback_lock; } ;
struct bkey {int dummy; } ;
struct TYPE_10__ {int moving_gc_keys; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bkey FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,struct bkey*,struct bkey*) ;
 int FUNC_2 (struct cached_dev*) ;
 int FUNC_3 (int ) ;
 struct bio* FUNC_4 (int ,int ,int *) ;
 struct bio* FUNC_5 (struct bio*,int ,int *) ;
 int FUNC_6 (struct bio*,struct bio*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct bio*) ;
 scalar_t__ FUNC_9 (struct bio*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct cached_dev*) ;
 int VAR_7 ;
 int FUNC_12 (TYPE_5__*,struct bio*,struct closure*) ;
 int FUNC_13 (int *,int ,int *,struct closure*) ;
 int FUNC_14 (struct closure*,int ,int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct cached_dev*,struct bio*,int ,int) ;

__attribute__((used)) static void FUNC_17(struct cached_dev *VAR_8, struct search *VAR_9)
{
 struct closure *VAR_10 = &VAR_9->cl;
 struct bio *VAR_11 = &VAR_9->bio.bio;
 struct bkey VAR_12 = FUNC_0(VAR_8->disk.id, VAR_11->bi_iter.bi_sector, 0);
 struct bkey VAR_13 = FUNC_0(VAR_8->disk.id, FUNC_7(VAR_11), 0);

 FUNC_1(&VAR_9->iop.c->moving_gc_keys, &VAR_12, &VAR_13);

 FUNC_15(&VAR_8->writeback_lock);
 if (FUNC_1(&VAR_8->writeback_keys, &VAR_12, &VAR_13)) {




  VAR_9->iop.bypass = 0;
  VAR_9->iop.writeback = 1;
 }
 if (FUNC_9(VAR_11) == VAR_2)
  VAR_9->iop.bypass = 1;

 if (FUNC_16(VAR_8, VAR_9->orig_bio,
        FUNC_11(VAR_8),
        VAR_9->iop.bypass)) {
  VAR_9->iop.bypass = 0;
  VAR_9->iop.writeback = 1;
 }

 if (VAR_9->iop.bypass) {
  VAR_9->iop.bio = VAR_9->orig_bio;
  FUNC_8(VAR_9->iop.bio);

  if (FUNC_9(VAR_11) == VAR_2 &&
      !FUNC_10(FUNC_3(VAR_8->bdev)))
   goto insert_data;


  VAR_11->bi_end_io = VAR_5;
  FUNC_12(VAR_9->iop.c, VAR_11, VAR_10);

 } else if (VAR_9->iop.writeback) {
  FUNC_2(VAR_8);
  VAR_9->iop.bio = VAR_11;

  if (VAR_11->bi_opf & VAR_4) {




   struct bio *VAR_14;

   VAR_14 = FUNC_4(VAR_1, 0,
       &VAR_8->disk.bio_split);
   if (!VAR_14) {
    VAR_9->iop.status = VAR_0;
    goto insert_data;
   }
   FUNC_6(VAR_14, VAR_11);
   VAR_14->bi_end_io = VAR_5;
   VAR_14->bi_private = VAR_10;
   VAR_14->bi_opf = VAR_3 | VAR_4;

   FUNC_12(VAR_9->iop.c, VAR_14, VAR_10);
  }
 } else {
  VAR_9->iop.bio = FUNC_5(VAR_11, VAR_1, &VAR_8->disk.bio_split);

  VAR_11->bi_end_io = VAR_5;
  FUNC_12(VAR_9->iop.c, VAR_11, VAR_10);
 }

insert_data:
 FUNC_13(&VAR_9->iop.cl, VAR_6, ((void*)0), VAR_10);
 FUNC_14(VAR_10, VAR_7, ((void*)0));
}
