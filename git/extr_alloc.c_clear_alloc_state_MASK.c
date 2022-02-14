
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_state {size_t slab_nr; int * slabs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct alloc_state *VAR_0)
{
 while (VAR_0->slab_nr > 0) {
  VAR_0->slab_nr--;
  FUNC_1(VAR_0->slabs[VAR_0->slab_nr]);
 }

 FUNC_0(VAR_0->slabs);
}
