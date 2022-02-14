
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct intel_plane {int pipe; int id; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct drm_i915_private {TYPE_2__ uncore; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct intel_plane *VAR_0,
    const struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_5(VAR_0->base.dev);
 enum pipe VAR_3 = VAR_0->pipe;
 enum plane_id VAR_4 = VAR_0->id;
 unsigned long VAR_5;

 FUNC_3(&VAR_2->uncore.lock, VAR_5);

 FUNC_0(FUNC_1(VAR_3, VAR_4), 0);
 FUNC_0(FUNC_2(VAR_3, VAR_4), 0);

 FUNC_4(&VAR_2->uncore.lock, VAR_5);
}
