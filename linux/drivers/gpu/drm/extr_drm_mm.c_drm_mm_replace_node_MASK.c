
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int allocated; int rb_hole_addr; int rb_hole_size; int hole_stack; int rb; int node_list; struct drm_mm* mm; } ;
struct drm_mm {int holes_addr; int holes_size; int interval_tree; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_mm_node*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;

void FUNC_5(struct drm_mm_node *VAR_0, struct drm_mm_node *VAR_1)
{
 struct drm_mm *VAR_2 = VAR_0->mm;

 FUNC_0(!VAR_0->allocated);

 *VAR_1 = *VAR_0;

 FUNC_2(&VAR_0->node_list, &VAR_1->node_list);
 FUNC_4(&VAR_0->rb, &VAR_1->rb, &VAR_2->interval_tree);

 if (FUNC_1(VAR_0)) {
  FUNC_2(&VAR_0->hole_stack, &VAR_1->hole_stack);
  FUNC_4(&VAR_0->rb_hole_size,
           &VAR_1->rb_hole_size,
           &VAR_2->holes_size);
  FUNC_3(&VAR_0->rb_hole_addr,
    &VAR_1->rb_hole_addr,
    &VAR_2->holes_addr);
 }

 VAR_0->allocated = 0;
 VAR_1->allocated = 1;
}
