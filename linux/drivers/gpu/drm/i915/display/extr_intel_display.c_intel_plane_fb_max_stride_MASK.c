
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_plane {int (* max_stride ) (struct intel_plane*,int ,int ,int ) ;} ;
struct TYPE_2__ {int primary; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_crtc* FUNC_0 (struct drm_i915_private*,int ) ;
 int FUNC_1 (struct intel_plane*,int ,int ,int ) ;
 struct intel_plane* FUNC_2 (int ) ;

u32 FUNC_3(struct drm_i915_private *VAR_2,
         u32 VAR_3, u64 VAR_4)
{
 struct intel_crtc *VAR_5;
 struct intel_plane *VAR_6;





 VAR_5 = FUNC_0(VAR_2, VAR_1);
 VAR_6 = FUNC_2(VAR_5->base.primary);

 return VAR_6->max_stride(VAR_6, VAR_3, VAR_4,
     VAR_0);
}
