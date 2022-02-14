
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist_node {int dummy; } ;
struct llist_head {int dummy; } ;
struct drm_i915_private {int uabi_engines; } ;


 struct llist_node* FUNC_0 (struct llist_head*) ;

__attribute__((used)) static struct llist_node *FUNC_1(struct drm_i915_private *VAR_0)
{
 return FUNC_0((struct llist_head *)&VAR_0->uabi_engines);
}
