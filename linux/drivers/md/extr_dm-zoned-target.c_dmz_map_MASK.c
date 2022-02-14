
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct dmz_target {struct dmz_dev* dev; int flush_work; int flush_wq; int flush_lock; int flush_list; } ;
struct dmz_dev {int zone_nr_sectors; int bdev; } ;
struct dmz_bioctx {int ref; struct bio* bio; int * zone; struct dmz_target* target; } ;
struct dm_target {struct dmz_target* private; } ;
struct TYPE_2__ {unsigned int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef unsigned int sector_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 unsigned int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,unsigned int) ;
 struct dmz_bioctx* FUNC_5 (struct bio*,int) ;
 scalar_t__ FUNC_6 (struct dmz_dev*) ;
 int FUNC_7 (struct bio*) ;
 scalar_t__ FUNC_8 (struct bio*) ;
 scalar_t__ FUNC_9 (struct dmz_dev*,struct bio*) ;
 scalar_t__ FUNC_10 (struct dmz_dev*,int ) ;
 int FUNC_11 (struct dmz_dev*,char*,scalar_t__,unsigned long long,int,...) ;
 int FUNC_12 (struct dmz_target*,struct bio*) ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct dm_target *VAR_6, struct bio *VAR_7)
{
 struct dmz_target *VAR_8 = VAR_6->private;
 struct dmz_dev *VAR_9 = VAR_8->dev;
 struct dmz_bioctx *VAR_10 = FUNC_5(VAR_7, sizeof(struct dmz_bioctx));
 sector_t VAR_11 = VAR_7->bi_iter.bi_sector;
 unsigned int VAR_12 = FUNC_2(VAR_7);
 sector_t VAR_13;
 int VAR_14;

 if (FUNC_6(VAR_8->dev))
  return VAR_1;

 FUNC_11(VAR_9, "BIO op %d sector %llu + %u => chunk %llu, block %llu, %u blocks",
        FUNC_1(VAR_7), (unsigned long long)VAR_11, VAR_12,
        (unsigned long long)FUNC_9(VAR_8->dev, VAR_7),
        (unsigned long long)FUNC_10(VAR_8->dev, FUNC_7(VAR_7)),
        (unsigned int)FUNC_8(VAR_7));

 FUNC_3(VAR_7, VAR_9->bdev);

 if (!VAR_12 && FUNC_1(VAR_7) != VAR_5)
  return VAR_2;


 if ((VAR_12 & VAR_0) || (VAR_11 & VAR_0))
  return VAR_1;


 VAR_10->target = VAR_8;
 VAR_10->zone = ((void*)0);
 VAR_10->bio = VAR_7;
 FUNC_14(&VAR_10->ref, 1);


 if (!VAR_12 && FUNC_1(VAR_7) == VAR_5) {
  FUNC_15(&VAR_8->flush_lock);
  FUNC_0(&VAR_8->flush_list, VAR_7);
  FUNC_16(&VAR_8->flush_lock);
  FUNC_13(VAR_8->flush_wq, &VAR_8->flush_work, 0);
  return VAR_4;
 }


 VAR_13 = VAR_11 & (VAR_9->zone_nr_sectors - 1);
 if (VAR_13 + VAR_12 > VAR_9->zone_nr_sectors)
  FUNC_4(VAR_7, VAR_9->zone_nr_sectors - VAR_13);


 VAR_14 = FUNC_12(VAR_8, VAR_7);
 if (VAR_14) {
  FUNC_11(VAR_8->dev,
         "BIO op %d, can't process chunk %llu, err %i\n",
         FUNC_1(VAR_7), (u64)FUNC_9(VAR_8->dev, VAR_7),
         VAR_14);
  return VAR_3;
 }

 return VAR_4;
}
