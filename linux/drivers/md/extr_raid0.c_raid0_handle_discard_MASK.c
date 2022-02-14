
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strip_zone {scalar_t__ zone_end; unsigned int nb_dev; scalar_t__ dev_start; } ;
struct r0conf {struct strip_zone* strip_zone; struct md_rdev** devlist; } ;
struct mddev {unsigned int chunk_sectors; scalar_t__ gendisk; int bio_set; struct r0conf* private; } ;
struct md_rdev {int bdev; scalar_t__ data_offset; } ;
struct TYPE_2__ {unsigned int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef unsigned int sector_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,unsigned int,int ,int ,struct bio**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bio*,struct bio*) ;
 int FUNC_3 (struct bio*,struct bio*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 struct bio* FUNC_6 (struct bio*,scalar_t__,int ,int *) ;
 int FUNC_7 (scalar_t__) ;
 struct strip_zone* FUNC_8 (struct r0conf*,unsigned int*) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (unsigned int,unsigned int) ;
 int FUNC_11 (int ,struct bio*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct mddev *VAR_1, struct bio *VAR_2)
{
 struct r0conf *VAR_3 = VAR_1->private;
 struct strip_zone *VAR_4;
 sector_t VAR_5 = VAR_2->bi_iter.bi_sector;
 sector_t VAR_6;
 unsigned int VAR_7;
 sector_t VAR_8, VAR_9;
 sector_t VAR_10;
 unsigned int VAR_11;
 sector_t VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;

 VAR_4 = FUNC_8(VAR_3, &VAR_5);

 if (FUNC_4(VAR_2) > VAR_4->zone_end) {
  struct bio *VAR_15 = FUNC_6(VAR_2,
   VAR_4->zone_end - VAR_2->bi_iter.bi_sector, VAR_0,
   &VAR_1->bio_set);
  FUNC_2(VAR_15, VAR_2);
  FUNC_9(VAR_2);
  VAR_2 = VAR_15;
  VAR_6 = VAR_4->zone_end;
 } else
  VAR_6 = FUNC_4(VAR_2);

 if (VAR_4 != VAR_3->strip_zone)
  VAR_6 = VAR_6 - VAR_4[-1].zone_end;


 VAR_7 = VAR_4->nb_dev * VAR_1->chunk_sectors;

 VAR_8 = VAR_5;
 FUNC_10(VAR_8, VAR_7);
 VAR_9 = VAR_6;
 FUNC_10(VAR_9, VAR_7);

 VAR_11 = (int)(VAR_5 - VAR_8 * VAR_7) /
  VAR_1->chunk_sectors;
 VAR_10 = ((int)(VAR_5 - VAR_8 * VAR_7) %
  VAR_1->chunk_sectors) +
  VAR_8 * VAR_1->chunk_sectors;
 VAR_13 = (int)(VAR_6 - VAR_9 * VAR_7) /
  VAR_1->chunk_sectors;
 VAR_12 = ((int)(VAR_6 - VAR_9 * VAR_7) %
  VAR_1->chunk_sectors) +
  VAR_9 * VAR_1->chunk_sectors;

 for (VAR_14 = 0; VAR_14 < VAR_4->nb_dev; VAR_14++) {
  sector_t VAR_16, VAR_17;
  struct bio *VAR_18 = ((void*)0);
  struct md_rdev *VAR_19;

  if (VAR_14 < VAR_11)
   VAR_16 = (VAR_8 + 1) *
    VAR_1->chunk_sectors;
  else if (VAR_14 > VAR_11)
   VAR_16 = VAR_8 * VAR_1->chunk_sectors;
  else
   VAR_16 = VAR_10;

  if (VAR_14 < VAR_13)
   VAR_17 = (VAR_9 + 1) * VAR_1->chunk_sectors;
  else if (VAR_14 > VAR_13)
   VAR_17 = VAR_9 * VAR_1->chunk_sectors;
  else
   VAR_17 = VAR_12;

  if (VAR_17 <= VAR_16)
   continue;

  VAR_19 = VAR_3->devlist[(VAR_4 - VAR_3->strip_zone) *
   VAR_3->strip_zone[0].nb_dev + VAR_14];
  if (FUNC_0(VAR_19->bdev,
   VAR_16 + VAR_4->dev_start + VAR_19->data_offset,
   VAR_17 - VAR_16, VAR_0, 0, &VAR_18) ||
      !VAR_18)
   continue;
  FUNC_2(VAR_18, VAR_2);
  FUNC_3(VAR_18, VAR_2);
  if (VAR_1->gendisk)
   FUNC_11(FUNC_1(VAR_19->bdev),
    VAR_18, FUNC_7(VAR_1->gendisk),
    VAR_2->bi_iter.bi_sector);
  FUNC_9(VAR_18);
 }
 FUNC_5(VAR_2);
}
