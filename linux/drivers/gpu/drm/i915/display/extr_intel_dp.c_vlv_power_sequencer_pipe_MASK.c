
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {scalar_t__ active_pipe; scalar_t__ pps_pipe; } ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int pps_mutex; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct intel_digital_port* FUNC_2 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*,int) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct intel_dp*) ;
 int FUNC_12 (struct drm_i915_private*,int) ;

__attribute__((used)) static enum pipe
FUNC_13(struct intel_dp *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_3(VAR_2);
 struct intel_digital_port *VAR_4 = FUNC_2(VAR_2);
 enum pipe VAR_5;

 FUNC_7(&VAR_3->pps_mutex);


 FUNC_1(!FUNC_6(VAR_2));

 FUNC_1(VAR_2->active_pipe != VAR_0 &&
  VAR_2->active_pipe != VAR_2->pps_pipe);

 if (VAR_2->pps_pipe != VAR_0)
  return VAR_2->pps_pipe;

 VAR_5 = FUNC_10(VAR_3);





 if (FUNC_1(VAR_5 == VAR_0))
  VAR_5 = VAR_1;

 FUNC_12(VAR_3, VAR_5);
 VAR_2->pps_pipe = VAR_5;

 FUNC_0("picked pipe %c power sequencer for port %c\n",
        FUNC_8(VAR_2->pps_pipe),
        FUNC_9(VAR_4->base.port));


 FUNC_4(VAR_2);
 FUNC_5(VAR_2, 1);





 FUNC_11(VAR_2);

 return VAR_2->pps_pipe;
}
