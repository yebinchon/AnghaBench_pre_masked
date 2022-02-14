
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {TYPE_2__* encoder; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(struct intel_connector *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_1->base.dev);
 enum port VAR_3 = VAR_1->encoder->port;
 u32 VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_3));
 return VAR_4 & VAR_0;
}
