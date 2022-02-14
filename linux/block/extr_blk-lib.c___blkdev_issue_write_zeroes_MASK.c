
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {int bi_sector; unsigned int bi_size; } ;
struct bio {TYPE_1__ bi_iter; int bi_opf; } ;
typedef int sector_t ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct request_queue* FUNC_0 (struct block_device*) ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 unsigned int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct bio*,struct block_device*) ;
 struct bio* FUNC_4 (struct bio*,int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct block_device *VAR_6,
  sector_t VAR_7, sector_t VAR_8, gfp_t VAR_9,
  struct bio **VAR_10, unsigned VAR_11)
{
 struct bio *VAR_12 = *VAR_10;
 unsigned int VAR_13;
 struct request_queue *VAR_14 = FUNC_0(VAR_6);

 if (!VAR_14)
  return -VAR_1;

 if (FUNC_1(VAR_6))
  return -VAR_3;


 VAR_13 = FUNC_2(VAR_6);

 if (VAR_13 == 0)
  return -VAR_2;

 while (VAR_8) {
  VAR_12 = FUNC_4(VAR_12, 0, VAR_9);
  VAR_12->bi_iter.bi_sector = VAR_7;
  FUNC_3(VAR_12, VAR_6);
  VAR_12->bi_opf = VAR_5;
  if (VAR_11 & VAR_0)
   VAR_12->bi_opf |= VAR_4;

  if (VAR_8 > VAR_13) {
   VAR_12->bi_iter.bi_size = VAR_13 << 9;
   VAR_8 -= VAR_13;
   VAR_7 += VAR_13;
  } else {
   VAR_12->bi_iter.bi_size = VAR_8 << 9;
   VAR_8 = 0;
  }
  FUNC_5();
 }

 *VAR_10 = VAR_12;
 return 0;
}
