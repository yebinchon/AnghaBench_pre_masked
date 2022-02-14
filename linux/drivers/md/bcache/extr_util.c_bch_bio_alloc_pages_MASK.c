
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int bv_page; } ;
struct bio {int bi_vcnt; struct bio_vec* bi_io_vec; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct bio *VAR_1, gfp_t VAR_2)
{
 int VAR_3;
 struct bio_vec *VAR_4;





 for (VAR_3 = 0, VAR_4 = VAR_1->bi_io_vec; VAR_3 < VAR_1->bi_vcnt; VAR_4++, VAR_3++) {
  VAR_4->bv_page = FUNC_1(VAR_2);
  if (!VAR_4->bv_page) {
   while (--VAR_4 >= VAR_1->bi_io_vec)
    FUNC_0(VAR_4->bv_page);
   return -VAR_0;
  }
 }

 return 0;
}
