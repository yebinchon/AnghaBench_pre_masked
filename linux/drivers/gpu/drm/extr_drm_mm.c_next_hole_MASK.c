
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int hole_stack; int rb_hole_addr; int rb_hole_size; } ;
struct drm_mm {int hole_stack; } ;
typedef enum drm_mm_insert_mode { ____Placeholder_drm_mm_insert_mode } drm_mm_insert_mode ;






 int VAR_0 ;
 struct drm_mm_node* FUNC_0 (struct drm_mm_node*,int ) ;
 struct drm_mm_node* FUNC_1 (int ) ;
 struct drm_mm_node* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct drm_mm_node *
FUNC_5(struct drm_mm *VAR_1,
   struct drm_mm_node *VAR_2,
   enum drm_mm_insert_mode VAR_3)
{
 switch (VAR_3) {
 default:
 case 131:
  return FUNC_2(FUNC_4(&VAR_2->rb_hole_size));

 case 128:
  return FUNC_1(FUNC_3(&VAR_2->rb_hole_addr));

 case 129:
  return FUNC_1(FUNC_4(&VAR_2->rb_hole_addr));

 case 130:
  VAR_2 = FUNC_0(VAR_2, VAR_0);
  return &VAR_2->hole_stack == &VAR_1->hole_stack ? ((void*)0) : VAR_2;
 }
}
