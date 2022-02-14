
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct page {int dummy; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {int bi_sector; unsigned int bi_size; } ;
struct bio {int bi_vcnt; TYPE_2__ bi_iter; TYPE_1__* bi_io_vec; } ;
typedef int sector_t ;
typedef int gfp_t ;
struct TYPE_3__ {int bv_len; scalar_t__ bv_offset; struct page* bv_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct request_queue* FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*) ;
 scalar_t__ FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*) ;
 unsigned int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct bio*,struct block_device*) ;
 int FUNC_6 (struct bio*,int ,int ) ;
 struct bio* FUNC_7 (struct bio*,int,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct block_device *VAR_5, sector_t VAR_6,
  sector_t VAR_7, gfp_t VAR_8, struct page *VAR_9,
  struct bio **VAR_10)
{
 struct request_queue *VAR_11 = FUNC_0(VAR_5);
 unsigned int VAR_12;
 struct bio *VAR_13 = *VAR_10;
 sector_t VAR_14;

 if (!VAR_11)
  return -VAR_1;

 if (FUNC_2(VAR_5))
  return -VAR_3;

 VAR_14 = (FUNC_1(VAR_5) >> 9) - 1;
 if ((VAR_6 | VAR_7) & VAR_14)
  return -VAR_0;

 if (!FUNC_3(VAR_5))
  return -VAR_2;


 VAR_12 = FUNC_4(VAR_11);

 while (VAR_7) {
  VAR_13 = FUNC_7(VAR_13, 1, VAR_8);
  VAR_13->bi_iter.bi_sector = VAR_6;
  FUNC_5(VAR_13, VAR_5);
  VAR_13->bi_vcnt = 1;
  VAR_13->bi_io_vec->bv_page = VAR_9;
  VAR_13->bi_io_vec->bv_offset = 0;
  VAR_13->bi_io_vec->bv_len = FUNC_1(VAR_5);
  FUNC_6(VAR_13, VAR_4, 0);

  if (VAR_7 > VAR_12) {
   VAR_13->bi_iter.bi_size = VAR_12 << 9;
   VAR_7 -= VAR_12;
   VAR_6 += VAR_12;
  } else {
   VAR_13->bi_iter.bi_size = VAR_7 << 9;
   VAR_7 = 0;
  }
  FUNC_8();
 }

 *VAR_10 = VAR_13;
 return 0;
}
