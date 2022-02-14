
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {int bio_split; } ;
struct mddev {unsigned int chunk_sectors; struct r5conf* private; } ;
struct TYPE_2__ {unsigned int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef unsigned int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,struct bio*) ;
 unsigned int FUNC_1 (struct bio*) ;
 struct bio* FUNC_2 (struct bio*,unsigned int,int ,int *) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct mddev*,struct bio*) ;

__attribute__((used)) static struct bio *FUNC_5(struct mddev *VAR_1, struct bio *VAR_2)
{
 struct bio *VAR_3;
 sector_t VAR_4 = VAR_2->bi_iter.bi_sector;
 unsigned VAR_5 = VAR_1->chunk_sectors;
 unsigned VAR_6 = VAR_5 - (VAR_4 & (VAR_5-1));

 if (VAR_6 < FUNC_1(VAR_2)) {
  struct r5conf *VAR_7 = VAR_1->private;
  VAR_3 = FUNC_2(VAR_2, VAR_6, VAR_0, &VAR_7->bio_split);
  FUNC_0(VAR_3, VAR_2);
  FUNC_3(VAR_2);
  VAR_2 = VAR_3;
 }

 if (!FUNC_4(VAR_1, VAR_2))
  return VAR_2;

 return ((void*)0);
}
