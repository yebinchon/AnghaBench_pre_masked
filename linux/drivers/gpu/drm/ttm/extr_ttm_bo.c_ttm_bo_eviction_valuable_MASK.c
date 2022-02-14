
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_place {scalar_t__ fpfn; scalar_t__ lpfn; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ size; } ;
struct ttm_buffer_object {TYPE_1__ mem; } ;



bool FUNC_0(struct ttm_buffer_object *VAR_0,
         const struct ttm_place *VAR_1)
{



 if (VAR_1->fpfn >= (VAR_0->mem.start + VAR_0->mem.size) ||
     (VAR_1->lpfn && VAR_1->lpfn <= VAR_0->mem.start))
  return 0;

 return 1;
}
