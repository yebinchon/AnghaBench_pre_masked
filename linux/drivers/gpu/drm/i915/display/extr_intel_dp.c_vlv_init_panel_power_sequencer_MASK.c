
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct intel_encoder {int port; TYPE_2__ base; } ;
struct intel_dp {scalar_t__ active_pipe; scalar_t__ pps_pipe; } ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct intel_crtc {scalar_t__ pipe; } ;
struct drm_i915_private {int pps_mutex; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 struct intel_dp* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*,int) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 struct drm_i915_private* FUNC_9 (int ) ;
 struct intel_crtc* FUNC_10 (int ) ;
 int FUNC_11 (struct intel_dp*) ;
 int FUNC_12 (struct drm_i915_private*,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct intel_encoder *VAR_1,
        const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_9(VAR_1->base.dev);
 struct intel_dp *VAR_4 = FUNC_2(&VAR_1->base);
 struct intel_crtc *VAR_5 = FUNC_10(VAR_2->base.crtc);

 FUNC_6(&VAR_3->pps_mutex);

 FUNC_1(VAR_4->active_pipe != VAR_0);

 if (VAR_4->pps_pipe != VAR_0 &&
     VAR_4->pps_pipe != VAR_5->pipe) {





  FUNC_11(VAR_4);
 }





 FUNC_12(VAR_3, VAR_5->pipe);

 VAR_4->active_pipe = VAR_5->pipe;

 if (!FUNC_5(VAR_4))
  return;


 VAR_4->pps_pipe = VAR_5->pipe;

 FUNC_0("initializing pipe %c power sequencer for port %c\n",
        FUNC_7(VAR_4->pps_pipe), FUNC_8(VAR_1->port));


 FUNC_3(VAR_4);
 FUNC_4(VAR_4, 1);
}
