
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dmz_target {int metadata; TYPE_1__* dev; int bio_set; } ;
struct dmz_bioctx {int ref; } ;
struct dm_zone {unsigned int wp_block; } ;
struct TYPE_4__ {int bi_size; scalar_t__ bi_sector; } ;
struct bio {TYPE_2__ bi_iter; struct dmz_bioctx* bi_private; int bi_end_io; } ;
typedef unsigned int sector_t ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bio*,int) ;
 struct bio* FUNC_1 (struct bio*,int ,int *) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 struct dmz_bioctx* FUNC_4 (struct bio*,int) ;
 int FUNC_5 (unsigned int) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct dm_zone*) ;
 scalar_t__ FUNC_7 (int ,struct dm_zone*) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct dmz_target *VAR_5, struct dm_zone *VAR_6,
     struct bio *VAR_7, sector_t VAR_8,
     unsigned int VAR_9)
{
 struct dmz_bioctx *VAR_10 = FUNC_4(VAR_7, sizeof(struct dmz_bioctx));
 struct bio *VAR_11;

 VAR_11 = FUNC_1(VAR_7, VAR_1, &VAR_5->bio_set);
 if (!VAR_11)
  return -VAR_0;

 FUNC_3(VAR_11, VAR_5->dev->bdev);
 VAR_11->bi_iter.bi_sector =
  FUNC_7(VAR_5->metadata, VAR_6) + FUNC_5(VAR_8);
 VAR_11->bi_iter.bi_size = FUNC_5(VAR_9) << VAR_3;
 VAR_11->bi_end_io = VAR_4;
 VAR_11->bi_private = VAR_10;

 FUNC_0(VAR_7, VAR_11->bi_iter.bi_size);

 FUNC_9(&VAR_10->ref);
 FUNC_8(VAR_11);

 if (FUNC_2(VAR_7) == VAR_2 && FUNC_6(VAR_6))
  VAR_6->wp_block += VAR_9;

 return 0;
}
