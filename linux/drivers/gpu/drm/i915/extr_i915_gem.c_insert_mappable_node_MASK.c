
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mm; } ;
struct i915_ggtt {int mappable_end; TYPE_1__ vm; } ;
struct drm_mm_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct drm_mm_node*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct drm_mm_node*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct i915_ggtt *VAR_2,
                     struct drm_mm_node *VAR_3, u32 VAR_4)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 return FUNC_0(&VAR_2->vm.mm, VAR_3,
        VAR_4, 0, VAR_1,
        0, VAR_2->mappable_end,
        VAR_0);
}
