
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_set {int bio_pool; int front_pad; int bvec_pool; } ;
struct bio {int bi_io_vec; struct bio_set* bi_pool; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (void*,int *) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_0)
{
 struct bio_set *VAR_1 = VAR_0->bi_pool;
 void *VAR_2;

 FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_2(&VAR_1->bvec_pool, VAR_0->bi_io_vec, FUNC_0(VAR_0));




  VAR_2 = VAR_0;
  VAR_2 -= VAR_1->front_pad;

  FUNC_4(VAR_2, &VAR_1->bio_pool);
 } else {

  FUNC_3(VAR_0);
 }
}
