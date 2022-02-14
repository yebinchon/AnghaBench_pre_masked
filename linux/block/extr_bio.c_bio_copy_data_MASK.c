
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bvec_iter {int dummy; } ;
struct bio {struct bvec_iter bi_iter; } ;


 int FUNC_0 (struct bio*,struct bvec_iter*,struct bio*,struct bvec_iter*) ;

void FUNC_1(struct bio *VAR_0, struct bio *VAR_1)
{
 struct bvec_iter VAR_2 = VAR_1->bi_iter;
 struct bvec_iter VAR_3 = VAR_0->bi_iter;

 FUNC_0(VAR_0, &VAR_3, VAR_1, &VAR_2);
}
