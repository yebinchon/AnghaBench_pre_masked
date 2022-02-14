
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clear_pages; int set_pages; int unbind_vma; int bind_vma; } ;
struct TYPE_4__ {TYPE_1__ vma_ops; int cleanup; int insert_entries; int insert_page; int clear_range; int file; int total; struct drm_i915_private* i915; } ;
struct i915_ppgtt {TYPE_2__ vm; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 struct i915_ppgtt* FUNC_2 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int ) ;

struct i915_ppgtt *FUNC_4(struct drm_i915_private *VAR_13, const char *VAR_14)
{
 struct i915_ppgtt *VAR_15;

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return ((void*)0);

 VAR_15->vm.i915 = VAR_13;
 VAR_15->vm.total = FUNC_3(VAR_3, VAR_2);
 VAR_15->vm.file = FUNC_0(-VAR_0);

 FUNC_1(&VAR_15->vm, VAR_4);

 VAR_15->vm.clear_range = VAR_11;
 VAR_15->vm.insert_page = VAR_9;
 VAR_15->vm.insert_entries = VAR_8;
 VAR_15->vm.cleanup = VAR_7;

 VAR_15->vm.vma_ops.bind_vma = VAR_6;
 VAR_15->vm.vma_ops.unbind_vma = VAR_10;
 VAR_15->vm.vma_ops.set_pages = VAR_12;
 VAR_15->vm.vma_ops.clear_pages = VAR_5;

 return VAR_15;
}
