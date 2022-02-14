
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct bio_vec {unsigned int bv_offset; unsigned int bv_len; struct page* bv_page; } ;
struct TYPE_2__ {unsigned int bi_size; } ;
struct bio {size_t bi_vcnt; TYPE_1__ bi_iter; struct bio_vec* bi_io_vec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,unsigned int) ;
 int FUNC_4 (struct bio*,int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct bio *VAR_2, struct page *VAR_3,
  unsigned int VAR_4, unsigned int VAR_5)
{
 struct bio_vec *VAR_6 = &VAR_2->bi_io_vec[VAR_2->bi_vcnt];

 FUNC_1(FUNC_2(VAR_2, VAR_0));
 FUNC_1(FUNC_3(VAR_2, VAR_4));

 VAR_6->bv_page = VAR_3;
 VAR_6->bv_offset = VAR_5;
 VAR_6->bv_len = VAR_4;

 VAR_2->bi_iter.bi_size += VAR_4;
 VAR_2->bi_vcnt++;

 if (!FUNC_2(VAR_2, VAR_1) && FUNC_5(FUNC_0(VAR_3)))
  FUNC_4(VAR_2, VAR_1);
}
