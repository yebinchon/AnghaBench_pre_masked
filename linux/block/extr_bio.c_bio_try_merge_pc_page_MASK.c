
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct page {int dummy; } ;
struct bio_vec {unsigned int bv_offset; unsigned int bv_len; struct page* bv_page; } ;
struct bio {int bi_vcnt; struct bio_vec* bi_io_vec; } ;
typedef unsigned long phys_addr_t ;


 int FUNC_0 (struct bio*,struct page*,unsigned int,unsigned int,int*) ;
 unsigned int FUNC_1 (struct page*) ;
 unsigned int FUNC_2 (struct request_queue*) ;
 unsigned long FUNC_3 (struct request_queue*) ;

__attribute__((used)) static bool FUNC_4(struct request_queue *VAR_0, struct bio *VAR_1,
  struct page *VAR_2, unsigned VAR_3, unsigned VAR_4,
  bool *VAR_5)
{
 struct bio_vec *VAR_6 = &VAR_1->bi_io_vec[VAR_1->bi_vcnt - 1];
 unsigned long VAR_7 = FUNC_3(VAR_0);
 phys_addr_t VAR_8 = FUNC_1(VAR_6->bv_page) + VAR_6->bv_offset;
 phys_addr_t VAR_9 = FUNC_1(VAR_2) + VAR_4 + VAR_3 - 1;

 if ((VAR_8 | VAR_7) != (VAR_9 | VAR_7))
  return 0;
 if (VAR_6->bv_len + VAR_3 > FUNC_2(VAR_0))
  return 0;
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
