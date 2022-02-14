
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* vma; int addr; } ;
struct intel_engine_cs {int i915; TYPE_3__ status_page; TYPE_2__* gt; } ;
typedef void i915_vma ;
typedef void drm_i915_gem_object ;
struct TYPE_5__ {TYPE_1__* ggtt; } ;
struct TYPE_4__ {int vm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ) ;
 void* FUNC_5 (void*,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (void*,int *,int *) ;
 int FUNC_10 (void*,int ,int ) ;
 int FUNC_11 (struct intel_engine_cs*,void*) ;

__attribute__((used)) static int FUNC_12(struct intel_engine_cs *VAR_3)
{
 struct drm_i915_gem_object *VAR_4;
 struct i915_vma *VAR_5;
 void *VAR_6;
 int VAR_7;
 VAR_4 = FUNC_4(VAR_3->i915, VAR_2);
 if (FUNC_2(VAR_4)) {
  FUNC_0("Failed to allocate status page\n");
  return FUNC_3(VAR_4);
 }

 FUNC_7(VAR_4, VAR_0);

 VAR_5 = FUNC_9(VAR_4, &VAR_3->gt->ggtt->vm, ((void*)0));
 if (FUNC_2(VAR_5)) {
  VAR_7 = FUNC_3(VAR_5);
  goto err;
 }

 VAR_6 = FUNC_5(VAR_4, VAR_1);
 if (FUNC_2(VAR_6)) {
  VAR_7 = FUNC_3(VAR_6);
  goto err;
 }

 VAR_3->status_page.addr = FUNC_10(VAR_6, 0, VAR_2);
 VAR_3->status_page.vma = VAR_5;

 if (!FUNC_1(VAR_3->i915)) {
  VAR_7 = FUNC_11(VAR_3, VAR_5);
  if (VAR_7)
   goto err_unpin;
 }

 return 0;

err_unpin:
 FUNC_8(VAR_4);
err:
 FUNC_6(VAR_4);
 return VAR_7;
}
