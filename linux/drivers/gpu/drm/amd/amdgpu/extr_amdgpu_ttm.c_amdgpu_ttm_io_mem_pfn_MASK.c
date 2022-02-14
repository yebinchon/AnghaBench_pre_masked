
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long base; } ;
struct TYPE_4__ {TYPE_1__ bus; } ;
struct ttm_buffer_object {TYPE_2__ mem; } ;
struct drm_mm_node {unsigned long start; } ;


 unsigned long VAR_0 ;
 struct drm_mm_node* FUNC_0 (TYPE_2__*,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_1(struct ttm_buffer_object *VAR_1,
        unsigned long VAR_2)
{
 struct drm_mm_node *VAR_3;
 unsigned long VAR_4 = (VAR_2 << VAR_0);

 VAR_3 = FUNC_0(&VAR_1->mem, &VAR_4);
 return (VAR_1->mem.bus.base >> VAR_0) + VAR_3->start +
  (VAR_4 >> VAR_0);
}
