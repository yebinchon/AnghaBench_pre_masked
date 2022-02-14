
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vlv_fifo_state {int* plane; } ;
struct TYPE_7__ {struct vlv_fifo_state fifo_state; } ;
struct TYPE_8__ {TYPE_3__ vlv; } ;
struct TYPE_5__ {int crtc; } ;
struct intel_crtc_state {TYPE_4__ wm; TYPE_1__ base; } ;
struct TYPE_6__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;



 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (int ,int ,int,int) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_crtc_state *VAR_7)
{
 struct intel_crtc *VAR_8 = FUNC_4(VAR_7->base.crtc);
 struct drm_i915_private *VAR_9 = FUNC_3(VAR_8->base.dev);
 struct vlv_fifo_state *VAR_10 = &VAR_7->wm.vlv.fifo_state;
 enum pipe VAR_11 = VAR_8->pipe;
 int VAR_12, VAR_13;

 switch (VAR_11) {
  u32 VAR_14, VAR_15, VAR_16;
 case 130:
  VAR_14 = FUNC_0(VAR_0);
  VAR_15 = FUNC_0(VAR_1);
  VAR_12 = FUNC_2(VAR_14, VAR_15, 0, 0);
  VAR_13 = FUNC_2(VAR_14, VAR_15, 8, 4);
  break;
 case 129:
  VAR_14 = FUNC_0(VAR_0);
  VAR_15 = FUNC_0(VAR_1);
  VAR_12 = FUNC_2(VAR_14, VAR_15, 16, 8);
  VAR_13 = FUNC_2(VAR_14, VAR_15, 24, 12);
  break;
 case 128:
  VAR_15 = FUNC_0(VAR_1);
  VAR_16 = FUNC_0(VAR_2);
  VAR_12 = FUNC_2(VAR_16, VAR_15, 0, 16);
  VAR_13 = FUNC_2(VAR_16, VAR_15, 8, 20);
  break;
 default:
  FUNC_1(VAR_11);
  return;
 }

 VAR_10->plane[VAR_4] = VAR_12;
 VAR_10->plane[VAR_5] = VAR_13 - VAR_12;
 VAR_10->plane[VAR_6] = 511 - VAR_13;
 VAR_10->plane[VAR_3] = 63;
}
