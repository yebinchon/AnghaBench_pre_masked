
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_request {int * file_priv; int client_link; } ;
struct TYPE_2__ {int lock; } ;
struct drm_i915_file_private {TYPE_1__ mm; } ;


 struct drm_i915_file_private* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(struct i915_request *VAR_0)
{
 struct drm_i915_file_private *VAR_1;

 VAR_1 = FUNC_0(VAR_0->file_priv);
 if (!VAR_1)
  return;

 FUNC_2(&VAR_1->mm.lock);
 if (VAR_0->file_priv) {
  FUNC_1(&VAR_0->client_link);
  VAR_0->file_priv = ((void*)0);
 }
 FUNC_3(&VAR_1->mm.lock);
}
