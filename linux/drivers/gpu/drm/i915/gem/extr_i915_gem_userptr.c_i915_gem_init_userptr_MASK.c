
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int userptr_wq; } ;
struct drm_i915_private {TYPE_1__ mm; int mm_structs; int mm_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_i915_private *VAR_3)
{
 FUNC_2(&VAR_3->mm_lock);
 FUNC_1(VAR_3->mm_structs);

 VAR_3->mm.userptr_wq =
  FUNC_0("i915-userptr-acquire",
    VAR_1 | VAR_2,
    0);
 if (!VAR_3->mm.userptr_wq)
  return -VAR_0;

 return 0;
}
