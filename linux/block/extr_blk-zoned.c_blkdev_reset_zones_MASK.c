
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct block_device {TYPE_1__* bd_part; } ;
struct blk_plug {int dummy; } ;
struct TYPE_4__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_2__ bi_iter; } ;
typedef scalar_t__ sector_t ;
typedef int gfp_t ;
struct TYPE_3__ {scalar_t__ nr_sects; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct block_device*,int ) ;
 struct request_queue* FUNC_1 (struct block_device*) ;
 scalar_t__ FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,struct block_device*) ;
 int FUNC_5 (struct bio*,int ,int ) ;
 int FUNC_6 (struct blk_plug*) ;
 struct bio* FUNC_7 (struct bio*,int ,int ) ;
 int FUNC_8 (struct request_queue*) ;
 scalar_t__ FUNC_9 (struct request_queue*) ;
 int FUNC_10 (struct blk_plug*) ;
 scalar_t__ FUNC_11 (struct block_device*,scalar_t__) ;
 int FUNC_12 () ;
 int FUNC_13 (struct bio*) ;

int FUNC_14(struct block_device *VAR_4,
         sector_t VAR_5, sector_t VAR_6,
         gfp_t VAR_7)
{
 struct request_queue *VAR_8 = FUNC_1(VAR_4);
 sector_t VAR_9;
 sector_t VAR_10 = VAR_5 + VAR_6;
 struct bio *VAR_11 = ((void*)0);
 struct blk_plug VAR_12;
 int VAR_13;

 if (!FUNC_8(VAR_8))
  return -VAR_1;

 if (FUNC_2(VAR_4))
  return -VAR_2;

 if (!VAR_6 || VAR_10 > VAR_4->bd_part->nr_sects)

  return -VAR_0;

 if (FUNC_11(VAR_4, VAR_6))
  return FUNC_0(VAR_4, VAR_7);


 VAR_9 = FUNC_9(VAR_8);
 if (VAR_5 & (VAR_9 - 1))
  return -VAR_0;

 if ((VAR_6 & (VAR_9 - 1)) &&
     VAR_10 != VAR_4->bd_part->nr_sects)
  return -VAR_0;

 FUNC_10(&VAR_12);
 while (VAR_5 < VAR_10) {

  VAR_11 = FUNC_7(VAR_11, 0, VAR_7);
  VAR_11->bi_iter.bi_sector = VAR_5;
  FUNC_4(VAR_11, VAR_4);
  FUNC_5(VAR_11, VAR_3, 0);

  VAR_5 += VAR_9;


  FUNC_12();

 }

 VAR_13 = FUNC_13(VAR_11);
 FUNC_3(VAR_11);

 FUNC_6(&VAR_12);

 return VAR_13;
}
