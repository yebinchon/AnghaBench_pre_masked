
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct drm_mm_node {int dummy; } ;
struct TYPE_2__ {int stolen_lock; int stolen; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct drm_mm_node*,int,unsigned int,int ,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_i915_private *VAR_2,
      struct drm_mm_node *VAR_3, u64 VAR_4,
      unsigned VAR_5, u64 VAR_6, u64 VAR_7)
{
 int VAR_8;

 if (!FUNC_1(&VAR_2->mm.stolen))
  return -VAR_1;


 if (FUNC_0(VAR_2) >= 8 && VAR_6 < 4096)
  VAR_6 = 4096;

 FUNC_3(&VAR_2->mm.stolen_lock);
 VAR_8 = FUNC_2(&VAR_2->mm.stolen, VAR_3,
       VAR_4, VAR_5, 0,
       VAR_6, VAR_7, VAR_0);
 FUNC_4(&VAR_2->mm.stolen_lock);

 return VAR_8;
}
