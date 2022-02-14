
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biovec_slab {int slab; } ;
struct bio_vec {int dummy; } ;
typedef int mempool_t ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct biovec_slab* VAR_2 ;
 int FUNC_1 (int ,struct bio_vec*) ;
 int FUNC_2 (struct bio_vec*,int *) ;

void FUNC_3(mempool_t *VAR_3, struct bio_vec *VAR_4, unsigned int VAR_5)
{
 if (!VAR_5)
  return;
 VAR_5--;

 FUNC_0(VAR_5 >= VAR_1);

 if (VAR_5 == VAR_0) {
  FUNC_2(VAR_4, VAR_3);
 } else {
  struct biovec_slab *VAR_6 = VAR_2 + VAR_5;

  FUNC_1(VAR_6->slab, VAR_4);
 }
}
