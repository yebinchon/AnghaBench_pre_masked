
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biovec_slab {int slab; } ;
typedef int mempool_t ;


 int VAR_0 ;
 struct biovec_slab* VAR_1 ;
 int FUNC_0 (int *,int,int ) ;

int FUNC_1(mempool_t *VAR_2, int VAR_3)
{
 struct biovec_slab *VAR_4 = VAR_1 + VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4->slab);
}
