
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_request {int client_link; struct drm_i915_file_private* file_priv; } ;
struct TYPE_2__ {int lock; int request_list; } ;
struct drm_i915_file_private {TYPE_1__ mm; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct i915_request *VAR_0, struct drm_file *VAR_1)
{
 struct drm_i915_file_private *VAR_2 = VAR_1->driver_priv;

 VAR_0->file_priv = VAR_2;

 FUNC_1(&VAR_2->mm.lock);
 FUNC_0(&VAR_0->client_link, &VAR_2->mm.request_list);
 FUNC_2(&VAR_2->mm.lock);
}
