
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_set {int bvec_integrity_pool; int bio_integrity_pool; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct bio_set *VAR_0)
{
 FUNC_0(&VAR_0->bio_integrity_pool);
 FUNC_0(&VAR_0->bvec_integrity_pool);
}
