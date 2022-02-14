
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_set {int * bio_slab; int bvec_pool; int bio_pool; int * rescue_workqueue; } ;


 int FUNC_0 (struct bio_set*) ;
 int FUNC_1 (struct bio_set*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct bio_set *VAR_0)
{
 if (VAR_0->rescue_workqueue)
  FUNC_2(VAR_0->rescue_workqueue);
 VAR_0->rescue_workqueue = ((void*)0);

 FUNC_3(&VAR_0->bio_pool);
 FUNC_3(&VAR_0->bvec_pool);

 FUNC_1(VAR_0);
 if (VAR_0->bio_slab)
  FUNC_0(VAR_0);
 VAR_0->bio_slab = ((void*)0);
}
