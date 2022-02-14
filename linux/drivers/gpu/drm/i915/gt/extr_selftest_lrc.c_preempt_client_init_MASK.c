
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preempt_client {int ctx; int spin; } ;
struct drm_i915_private {int gt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct drm_i915_private *VAR_1,
          struct preempt_client *VAR_2)
{
 VAR_2->ctx = FUNC_1(VAR_1);
 if (!VAR_2->ctx)
  return -VAR_0;

 if (FUNC_0(&VAR_2->spin, &VAR_1->gt))
  goto err_ctx;

 return 0;

err_ctx:
 FUNC_2(VAR_2->ctx);
 return -VAR_0;
}
