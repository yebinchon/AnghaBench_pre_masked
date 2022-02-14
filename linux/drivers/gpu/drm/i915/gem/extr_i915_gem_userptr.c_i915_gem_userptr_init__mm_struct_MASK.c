
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i915_mm_struct {int kref; scalar_t__ mm; int node; int * mn; void* i915; } ;
struct drm_i915_private {int mm_lock; int mm_structs; } ;
struct TYPE_5__ {struct i915_mm_struct* mm; } ;
struct TYPE_4__ {int dev; } ;
struct drm_i915_gem_object {TYPE_2__ userptr; TYPE_1__ base; } ;
struct TYPE_6__ {scalar_t__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i915_mm_struct* FUNC_0 (struct drm_i915_private*,scalar_t__) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int ,int *,unsigned long) ;
 struct i915_mm_struct* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct drm_i915_gem_object *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_8(VAR_3->base.dev);
 struct i915_mm_struct *VAR_5;
 int VAR_6 = 0;
 FUNC_6(&VAR_4->mm_lock);
 VAR_5 = FUNC_0(VAR_4, VAR_2->mm);
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
  if (VAR_5 == ((void*)0)) {
   VAR_6 = -VAR_0;
   goto out;
  }

  FUNC_4(&VAR_5->kref);
  VAR_5->i915 = FUNC_8(VAR_3->base.dev);

  VAR_5->mm = VAR_2->mm;
  FUNC_5(VAR_2->mm);

  VAR_5->mn = ((void*)0);


  FUNC_1(VAR_4->mm_structs,
    &VAR_5->node, (unsigned long)VAR_5->mm);
 } else
  FUNC_3(&VAR_5->kref);

 VAR_3->userptr.mm = VAR_5;
out:
 FUNC_7(&VAR_4->mm_lock);
 return VAR_6;
}
