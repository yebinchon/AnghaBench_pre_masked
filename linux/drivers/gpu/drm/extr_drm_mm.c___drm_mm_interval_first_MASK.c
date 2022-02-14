
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rb_root_cached {int dummy; } ;
struct drm_mm_node {int dummy; } ;
struct drm_mm {int head_node; int interval_tree; } ;


 scalar_t__ FUNC_0 (struct rb_root_cached*,int ,int ) ;

struct drm_mm_node *
FUNC_1(const struct drm_mm *VAR_0, u64 VAR_1, u64 VAR_2)
{
 return FUNC_0((struct rb_root_cached *)&VAR_0->interval_tree,
            VAR_1, VAR_2) ?: (struct drm_mm_node *)&VAR_0->head_node;
}
