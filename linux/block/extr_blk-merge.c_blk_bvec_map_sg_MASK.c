
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct request_queue {int dummy; } ;
struct page {int dummy; } ;
struct bio_vec {unsigned int bv_len; unsigned int bv_offset; struct page* bv_page; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct scatterlist* FUNC_0 (struct scatterlist**,struct scatterlist*) ;
 int FUNC_1 (struct request_queue*,unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct scatterlist*,struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_4(struct request_queue *VAR_2,
  struct bio_vec *VAR_3, struct scatterlist *VAR_4,
  struct scatterlist **VAR_5)
{
 unsigned VAR_6 = VAR_3->bv_len;
 unsigned VAR_7 = 0, VAR_8 = 0;

 while (VAR_6 > 0) {
  unsigned VAR_9 = VAR_3->bv_offset + VAR_8;
  unsigned VAR_10 = FUNC_2(FUNC_1(VAR_2, VAR_9), VAR_6);
  struct page *VAR_11 = VAR_3->bv_page;
  VAR_11 += (VAR_9 >> VAR_1);
  VAR_9 &= ~VAR_0;

  *VAR_5 = FUNC_0(VAR_5, VAR_4);
  FUNC_3(*VAR_5, VAR_11, VAR_10, VAR_9);

  VAR_8 += VAR_10;
  VAR_6 -= VAR_10;
  VAR_7++;
 }

 return VAR_7;
}
