
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {scalar_t__ pps_pipe; } ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int pps_mutex; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (char*,int ,...) ;
 scalar_t__ VAR_0 ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (struct drm_i915_private*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9(struct intel_dp *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_2(VAR_4);
 struct intel_digital_port *VAR_6 = FUNC_1(VAR_4);
 enum port VAR_7 = VAR_6->base.port;

 FUNC_5(&VAR_5->pps_mutex);



 VAR_4->pps_pipe = FUNC_8(VAR_5, VAR_7,
        VAR_2);

 if (VAR_4->pps_pipe == VAR_0)
  VAR_4->pps_pipe = FUNC_8(VAR_5, VAR_7,
         VAR_3);

 if (VAR_4->pps_pipe == VAR_0)
  VAR_4->pps_pipe = FUNC_8(VAR_5, VAR_7,
         VAR_1);


 if (VAR_4->pps_pipe == VAR_0) {
  FUNC_0("no initial power sequencer for port %c\n",
         FUNC_7(VAR_7));
  return;
 }

 FUNC_0("initial power sequencer for port %c: pipe %c\n",
        FUNC_7(VAR_7), FUNC_6(VAR_4->pps_pipe));

 FUNC_3(VAR_4);
 FUNC_4(VAR_4, 0);
}
