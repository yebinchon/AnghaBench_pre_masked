
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_page_pool {unsigned long npages; unsigned long order; } ;
struct shrinker {int dummy; } ;
struct shrink_control {int dummy; } ;
struct TYPE_2__ {struct ttm_page_pool* pools; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned long
FUNC_0(struct shrinker *VAR_2, struct shrink_control *VAR_3)
{
 unsigned VAR_4;
 unsigned long VAR_5 = 0;
 struct ttm_page_pool *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_6 = &VAR_1->pools[VAR_4];
  VAR_5 += (VAR_6->npages << VAR_6->order);
 }

 return VAR_5;
}
