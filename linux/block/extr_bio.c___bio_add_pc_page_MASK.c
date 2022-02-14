
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct page {int dummy; } ;
struct bio_vec {unsigned int bv_len; unsigned int bv_offset; struct page* bv_page; } ;
struct TYPE_2__ {unsigned int bi_size; } ;
struct bio {int bi_vcnt; TYPE_1__ bi_iter; struct bio_vec* bi_io_vec; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int ) ;
 scalar_t__ FUNC_1 (struct bio*,unsigned int) ;
 scalar_t__ FUNC_2 (struct request_queue*,struct bio*,struct page*,unsigned int,unsigned int,int*) ;
 scalar_t__ FUNC_3 (struct request_queue*,struct bio_vec*,unsigned int) ;
 unsigned int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct request_queue *VAR_1, struct bio *VAR_2,
  struct page *VAR_3, unsigned int VAR_4, unsigned int VAR_5,
  bool *VAR_6)
{
 struct bio_vec *VAR_7;




 if (FUNC_6(FUNC_0(VAR_2, VAR_0)))
  return 0;

 if (((VAR_2->bi_iter.bi_size + VAR_4) >> 9) > FUNC_4(VAR_1))
  return 0;

 if (VAR_2->bi_vcnt > 0) {
  if (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
   return VAR_4;





  VAR_7 = &VAR_2->bi_io_vec[VAR_2->bi_vcnt - 1];
  if (FUNC_3(VAR_1, VAR_7, VAR_5))
   return 0;
 }

 if (FUNC_1(VAR_2, VAR_4))
  return 0;

 if (VAR_2->bi_vcnt >= FUNC_5(VAR_1))
  return 0;

 VAR_7 = &VAR_2->bi_io_vec[VAR_2->bi_vcnt];
 VAR_7->bv_page = VAR_3;
 VAR_7->bv_len = VAR_4;
 VAR_7->bv_offset = VAR_5;
 VAR_2->bi_vcnt++;
 VAR_2->bi_iter.bi_size += VAR_4;
 return VAR_4;
}
