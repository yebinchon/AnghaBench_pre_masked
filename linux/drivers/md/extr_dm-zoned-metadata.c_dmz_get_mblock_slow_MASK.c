
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dmz_metadata {size_t mblk_primary; TYPE_3__* dev; int mblk_lock; TYPE_1__* sb; } ;
struct dmz_mblock {int page; int state; int ref; } ;
struct TYPE_5__ {int bi_sector; } ;
struct bio {int bi_end_io; struct dmz_mblock* bi_private; TYPE_2__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {int bdev; } ;
struct TYPE_4__ {scalar_t__ block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dmz_mblock* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bio*,int ,int ,int ) ;
 struct bio* FUNC_2 (int ,int) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*,int ,int) ;
 struct dmz_mblock* FUNC_6 (struct dmz_metadata*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct dmz_metadata*,struct dmz_mblock*) ;
 struct dmz_mblock* FUNC_10 (struct dmz_metadata*,scalar_t__) ;
 int FUNC_11 (struct dmz_metadata*,struct dmz_mblock*) ;
 int VAR_8 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct bio*) ;

__attribute__((used)) static struct dmz_mblock *FUNC_16(struct dmz_metadata *VAR_9,
           sector_t VAR_10)
{
 struct dmz_mblock *VAR_11, *VAR_12;
 sector_t VAR_13 = VAR_9->sb[VAR_9->mblk_primary].block + VAR_10;
 struct bio *VAR_14;

 if (FUNC_7(VAR_9->dev))
  return FUNC_0(-VAR_2);


 VAR_11 = FUNC_6(VAR_9, VAR_10);
 if (!VAR_11)
  return FUNC_0(-VAR_3);

 VAR_14 = FUNC_2(VAR_4, 1);
 if (!VAR_14) {
  FUNC_9(VAR_9, VAR_11);
  return FUNC_0(-VAR_3);
 }

 FUNC_13(&VAR_9->mblk_lock);





 VAR_12 = FUNC_10(VAR_9, VAR_10);
 if (VAR_12) {
  FUNC_14(&VAR_9->mblk_lock);
  FUNC_9(VAR_9, VAR_11);
  FUNC_3(VAR_14);
  return VAR_12;
 }

 VAR_11->ref++;
 FUNC_12(VAR_1, &VAR_11->state);
 FUNC_11(VAR_9, VAR_11);

 FUNC_14(&VAR_9->mblk_lock);


 VAR_14->bi_iter.bi_sector = FUNC_8(VAR_13);
 FUNC_4(VAR_14, VAR_9->dev->bdev);
 VAR_14->bi_private = VAR_11;
 VAR_14->bi_end_io = VAR_8;
 FUNC_5(VAR_14, VAR_6, VAR_5 | VAR_7);
 FUNC_1(VAR_14, VAR_11->page, VAR_0, 0);
 FUNC_15(VAR_14);

 return VAR_11;
}
