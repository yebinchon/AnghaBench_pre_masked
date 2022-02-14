
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_reg {struct drm_mm_node* mm_node; } ;
struct drm_mm_node {unsigned long size; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static struct drm_mm_node *FUNC_0(struct ttm_mem_reg *VAR_1,
            unsigned long *VAR_2)
{
 struct drm_mm_node *VAR_3 = VAR_1->mm_node;

 while (*VAR_2 >= (VAR_3->size << VAR_0)) {
  *VAR_2 -= (VAR_3->size << VAR_0);
  ++VAR_3;
 }
 return VAR_3;
}
