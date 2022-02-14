
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct bio_vec {unsigned int bv_len; } ;
struct TYPE_2__ {unsigned int bi_size; } ;
struct bio {int bi_vcnt; TYPE_1__ bi_iter; struct bio_vec* bi_io_vec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int ) ;
 scalar_t__ FUNC_2 (struct bio_vec*,struct page*,unsigned int,unsigned int,int*) ;

bool FUNC_3(struct bio *VAR_1, struct page *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4, bool *VAR_5)
{
 if (FUNC_0(FUNC_1(VAR_1, VAR_0)))
  return 0;

 if (VAR_1->bi_vcnt > 0) {
  struct bio_vec *VAR_6 = &VAR_1->bi_io_vec[VAR_1->bi_vcnt - 1];

  if (FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5)) {
   VAR_6->bv_len += VAR_3;
   VAR_1->bi_iter.bi_size += VAR_3;
   return 1;
  }
 }
 return 0;
}
