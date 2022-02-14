
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_set {int bio_integrity_pool; int bvec_integrity_pool; } ;


 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(struct bio_set *VAR_1, int VAR_2)
{
 if (FUNC_3(&VAR_1->bio_integrity_pool))
  return 0;

 if (FUNC_2(&VAR_1->bio_integrity_pool,
       VAR_2, VAR_0))
  return -1;

 if (FUNC_0(&VAR_1->bvec_integrity_pool, VAR_2)) {
  FUNC_1(&VAR_1->bio_integrity_pool);
  return -1;
 }

 return 0;
}
