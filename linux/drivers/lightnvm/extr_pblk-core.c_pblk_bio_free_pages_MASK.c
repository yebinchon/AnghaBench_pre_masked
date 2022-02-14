
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int page_bio_pool; } ;
struct page {int dummy; } ;
struct bio_vec {int bv_len; struct page* bv_page; } ;
struct bio {int bi_vcnt; struct bio_vec* bi_io_vec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct pblk *VAR_1, struct bio *VAR_2, int VAR_3,
    int VAR_4)
{
 struct bio_vec *VAR_5;
 struct page *VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_2->bi_vcnt; VAR_7++) {
  VAR_5 = &VAR_2->bi_io_vec[VAR_7];
  VAR_6 = VAR_5->bv_page;
  for (VAR_8 = 0; VAR_8 < VAR_5->bv_len; VAR_8 += VAR_0, VAR_9++)
   if (VAR_9 >= VAR_3)
    FUNC_0(VAR_6++, &VAR_1->page_bio_pool);
 }
}
