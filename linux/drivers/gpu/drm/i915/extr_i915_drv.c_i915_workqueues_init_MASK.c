
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dp_wq; } ;
struct drm_i915_private {int * wq; TYPE_1__ hotplug; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct drm_i915_private *VAR_1)
{
 VAR_1->wq = FUNC_1("i915", 0);
 if (VAR_1->wq == ((void*)0))
  goto out_err;

 VAR_1->hotplug.dp_wq = FUNC_1("i915-dp", 0);
 if (VAR_1->hotplug.dp_wq == ((void*)0))
  goto out_free_wq;

 return 0;

out_free_wq:
 FUNC_2(VAR_1->wq);
out_err:
 FUNC_0("Failed to allocate workqueues.\n");

 return -VAR_0;
}
