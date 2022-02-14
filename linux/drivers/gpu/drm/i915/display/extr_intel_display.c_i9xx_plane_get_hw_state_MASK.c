
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_plane {int i9xx_plane; int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;
typedef enum i9xx_plane_id { ____Placeholder_i9xx_plane_id } i9xx_plane_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct intel_plane *VAR_3,
        enum pipe *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_6(VAR_3->base.dev);
 enum intel_display_power_domain VAR_6;
 enum i9xx_plane_id VAR_7 = VAR_3->i9xx_plane;
 intel_wakeref_t VAR_8;
 bool VAR_9;
 u32 VAR_10;






 VAR_6 = FUNC_3(VAR_3->pipe);
 VAR_8 = FUNC_4(VAR_5, VAR_6);
 if (!VAR_8)
  return 0;

 VAR_10 = FUNC_1(FUNC_0(VAR_7));

 VAR_9 = VAR_10 & VAR_0;

 if (FUNC_2(VAR_5) >= 5)
  *VAR_4 = VAR_3->pipe;
 else
  *VAR_4 = (VAR_10 & VAR_1) >>
   VAR_2;

 FUNC_5(VAR_5, VAR_6, VAR_8);

 return VAR_9;
}
