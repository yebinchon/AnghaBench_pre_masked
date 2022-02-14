
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int hole_stack; scalar_t__ hole_size; struct drm_mm* mm; } ;
struct drm_mm {int hole_stack; int holes_addr; int holes_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_mm_node*) ;
 scalar_t__ FUNC_3 (struct drm_mm_node*) ;
 int FUNC_4 (struct drm_mm_node*) ;
 int FUNC_5 (int *,struct drm_mm_node*) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct drm_mm_node *VAR_2)
{
 struct drm_mm *VAR_3 = VAR_2->mm;

 VAR_2->hole_size =
  FUNC_2(VAR_2) - FUNC_3(VAR_2);
 FUNC_0(!FUNC_4(VAR_2));

 FUNC_5(&VAR_3->holes_size, VAR_2);
 FUNC_1(VAR_3->holes_addr, VAR_1, VAR_0);

 FUNC_6(&VAR_2->hole_stack, &VAR_3->hole_stack);
}
