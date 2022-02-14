
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mm_node {scalar_t__ hole_size; TYPE_1__* mm; int rb_hole_addr; int rb_hole_size; int hole_stack; } ;
struct TYPE_2__ {int holes_addr; int holes_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_mm_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct drm_mm_node *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0));

 FUNC_2(&VAR_0->hole_stack);
 FUNC_4(&VAR_0->rb_hole_size, &VAR_0->mm->holes_size);
 FUNC_3(&VAR_0->rb_hole_addr, &VAR_0->mm->holes_addr);
 VAR_0->hole_size = 0;

 FUNC_0(FUNC_1(VAR_0));
}
