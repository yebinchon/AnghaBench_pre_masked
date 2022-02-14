
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int sg; } ;
struct TYPE_6__ {unsigned int size; } ;
struct i915_vma {TYPE_2__ page_sizes; TYPE_1__ base; } ;
struct TYPE_9__ {struct drm_i915_private* i915; } ;
struct i915_ppgtt {TYPE_4__ vm; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {TYPE_2__ page_sizes; TYPE_1__ base; } ;
struct TYPE_10__ {unsigned int page_sizes; } ;
struct TYPE_8__ {unsigned int page_sizes; } ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_5__* FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct i915_vma*) ;
 int VAR_1 ;
 int FUNC_4 (struct i915_vma*) ;
 struct i915_vma* FUNC_5 (struct drm_i915_private*,unsigned int,int) ;
 int FUNC_6 (struct i915_vma*) ;
 int FUNC_7 (struct i915_vma*) ;
 struct i915_vma* FUNC_8 (struct i915_vma*,TYPE_4__*,int *) ;
 int FUNC_9 (struct i915_vma*,int ,int ,int ) ;
 int FUNC_10 (struct i915_vma*) ;
 int FUNC_11 (struct i915_vma*) ;
 TYPE_3__* FUNC_12 (struct drm_i915_private*) ;
 unsigned int* VAR_2 ;
 int FUNC_13 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_14(void *VAR_3)
{
 struct i915_ppgtt *VAR_4 = VAR_3;
 struct drm_i915_private *VAR_5 = VAR_4->vm.i915;
 unsigned int VAR_6 = FUNC_2(VAR_5)->page_sizes;
 struct drm_i915_gem_object *VAR_7;
 struct i915_vma *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12;






 for (VAR_9 = 1; VAR_9 < FUNC_1(FUNC_0(VAR_2)); VAR_9++) {
  unsigned int VAR_13 = 0;

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
   if (VAR_9 & FUNC_1(VAR_10))
    VAR_13 |= VAR_2[VAR_10];
  }

  FUNC_12(VAR_5)->page_sizes = VAR_13;

  for (VAR_11 = 0; VAR_11 <= 1; ++VAR_11) {
   VAR_7 = FUNC_5(VAR_5, VAR_13, !!VAR_11);
   if (FUNC_3(VAR_7)) {
    VAR_12 = FUNC_4(VAR_7);
    goto out_device;
   }

   if (VAR_7->base.size != VAR_13) {
    FUNC_13("obj->base.size=%zu, expected=%u\n",
           VAR_7->base.size, VAR_13);
    VAR_12 = -VAR_0;
    goto out_put;
   }

   VAR_8 = FUNC_8(VAR_7, &VAR_4->vm, ((void*)0));
   if (FUNC_3(VAR_8)) {
    VAR_12 = FUNC_4(VAR_8);
    goto out_put;
   }

   VAR_12 = FUNC_9(VAR_8, 0, 0, VAR_1);
   if (VAR_12)
    goto out_close;

   VAR_12 = FUNC_11(VAR_8);

   if (VAR_8->page_sizes.sg != VAR_13) {
    FUNC_13("page_sizes.sg=%u, expected=%u\n",
           VAR_8->page_sizes.sg, VAR_13);
    VAR_12 = -VAR_0;
   }

   FUNC_10(VAR_8);
   FUNC_7(VAR_8);

   FUNC_6(VAR_7);

   if (VAR_12)
    goto out_device;
  }
 }

 goto out_device;

out_close:
 FUNC_7(VAR_8);
out_put:
 FUNC_6(VAR_7);
out_device:
 FUNC_12(VAR_5)->page_sizes = VAR_6;

 return VAR_12;
}
