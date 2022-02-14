
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_fixed_16_16_t ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int src; struct drm_framebuffer* fb; int visible; int plane; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct intel_plane {scalar_t__ id; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct TYPE_4__ {int format; int * cpp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct intel_crtc_state const*,struct intel_plane_state const*) ;
 struct intel_plane* FUNC_5 (int ) ;

__attribute__((used)) static u64
FUNC_6(const struct intel_crtc_state *VAR_1,
        const struct intel_plane_state *VAR_2,
        const int VAR_3)
{
 struct intel_plane *VAR_4 = FUNC_5(VAR_2->base.plane);
 u32 VAR_5;
 u32 VAR_6 = 0, VAR_7 = 0;
 struct drm_framebuffer *VAR_8;
 u32 VAR_9;
 uint_fixed_16_16_t VAR_10;
 u64 VAR_11;

 if (!VAR_2->base.visible)
  return 0;

 VAR_8 = VAR_2->base.fb;
 VAR_9 = VAR_8->format->format;

 if (VAR_4->id == VAR_0)
  return 0;
 if (VAR_3 == 1 && !FUNC_2(VAR_9))
  return 0;






 VAR_6 = FUNC_1(&VAR_2->base.src) >> 16;
 VAR_7 = FUNC_0(&VAR_2->base.src) >> 16;


 if (VAR_3 == 1 && FUNC_2(VAR_9)) {
  VAR_6 /= 2;
  VAR_7 /= 2;
 }

 VAR_5 = VAR_6 * VAR_7;

 VAR_10 = FUNC_4(VAR_1, VAR_2);

 VAR_11 = FUNC_3(VAR_5, VAR_10);

 VAR_11 *= VAR_8->format->cpp[VAR_3];
 return VAR_11;
}
