
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_vram_mapping {scalar_t__ use; struct etnaviv_gem_object* object; } ;
struct etnaviv_gem_object {int base; int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct etnaviv_vram_mapping *VAR_0)
{
 struct etnaviv_gem_object *VAR_1 = VAR_0->object;

 FUNC_2(&VAR_1->lock);
 FUNC_0(VAR_0->use == 0);
 VAR_0->use -= 1;
 FUNC_3(&VAR_1->lock);

 FUNC_1(&VAR_1->base);
}
