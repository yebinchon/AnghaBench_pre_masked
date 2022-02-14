
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bvec_iter {int bi_size; } ;
struct bio {struct bvec_iter bi_iter; struct bio* bi_next; } ;


 int FUNC_0 (struct bio*,struct bvec_iter*,struct bio*,struct bvec_iter*) ;

void FUNC_1(struct bio *VAR_0, struct bio *VAR_1)
{
 struct bvec_iter VAR_2 = VAR_1->bi_iter;
 struct bvec_iter VAR_3 = VAR_0->bi_iter;

 while (1) {
  if (!VAR_2.bi_size) {
   VAR_1 = VAR_1->bi_next;
   if (!VAR_1)
    break;

   VAR_2 = VAR_1->bi_iter;
  }

  if (!VAR_3.bi_size) {
   VAR_0 = VAR_0->bi_next;
   if (!VAR_0)
    break;

   VAR_3 = VAR_0->bi_iter;
  }

  FUNC_0(VAR_0, &VAR_3, VAR_1, &VAR_2);
 }
}
