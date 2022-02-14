
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct llist_node {int dummy; } ;
struct TYPE_2__ {int free_list; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 int FUNC_0 (struct drm_i915_private*,struct llist_node*) ;
 struct llist_node* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct llist_node*) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 struct llist_node *VAR_1 = FUNC_1(&VAR_0->mm.free_list);

 if (FUNC_2(VAR_1))
  FUNC_0(VAR_0, VAR_1);
}
