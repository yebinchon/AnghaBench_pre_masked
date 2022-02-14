
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int dev; } ;
struct intel_crtc {TYPE_2__* config; TYPE_4__ base; } ;
struct TYPE_7__ {int (* get_fifo_size ) (struct drm_i915_private*,int ) ;} ;
struct drm_i915_private {TYPE_3__ display; } ;
struct drm_display_mode {int crtc_clock; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int ,int,int ) ;
 int VAR_3 ;
 struct intel_crtc* FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_crtc *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_6(VAR_4->base.dev);
 struct intel_crtc *VAR_6;
 const struct drm_display_mode *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == ((void*)0))
  return;

 VAR_7 = &VAR_6->config->base.adjusted_mode;
 VAR_9 = FUNC_3(VAR_7->crtc_clock,
           &VAR_2,
           VAR_5->display.get_fifo_size(VAR_5, VAR_1),
           4, VAR_3);
 VAR_8 = FUNC_1(VAR_0) & ~0xfff;
 VAR_8 |= (3<<8) | VAR_9;

 FUNC_0("Setting FIFO watermarks - A: %d\n", VAR_9);

 FUNC_2(VAR_0, VAR_8);
}
