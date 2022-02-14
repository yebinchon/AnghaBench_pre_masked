
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_plane {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_6__ {int is_yuv; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int*) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_plane* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct intel_plane_state *VAR_0)
{
 struct intel_plane *VAR_1 = FUNC_5(VAR_0->base.plane);
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_1->base.dev);
 const struct drm_framebuffer *VAR_3 = VAR_0->base.fb;
 enum pipe VAR_4 = VAR_1->pipe;
 u16 VAR_5[17];
 int VAR_6;


 if (!VAR_3->format->is_yuv)
  return;

 FUNC_3(VAR_5);


 for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
  FUNC_2(FUNC_1(VAR_4, VAR_6),
         VAR_5[VAR_6] << 20 |
         VAR_5[VAR_6] << 10 |
         VAR_5[VAR_6]);

 FUNC_2(FUNC_0(VAR_4, 0), VAR_5[VAR_6]);
 FUNC_2(FUNC_0(VAR_4, 1), VAR_5[VAR_6]);
 FUNC_2(FUNC_0(VAR_4, 2), VAR_5[VAR_6]);
 VAR_6++;
}
