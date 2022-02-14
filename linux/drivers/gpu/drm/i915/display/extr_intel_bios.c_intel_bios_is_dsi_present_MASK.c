
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int child_dev_num; struct child_device_config* child_dev; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct child_device_config {int device_type; scalar_t__ dvo_port; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (scalar_t__) ;

bool FUNC_3(struct drm_i915_private *VAR_5,
          enum port *VAR_6)
{
 const struct child_device_config *VAR_7;
 u8 VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_5->vbt.child_dev_num; VAR_9++) {
  VAR_7 = VAR_5->vbt.child_dev + VAR_9;

  if (!(VAR_7->device_type & VAR_0))
   continue;

  VAR_8 = VAR_7->dvo_port;

  if (VAR_8 == VAR_1 ||
      (VAR_8 == VAR_2 && FUNC_1(VAR_5) >= 11) ||
      (VAR_8 == VAR_3 && FUNC_1(VAR_5) < 11)) {
   if (VAR_6)
    *VAR_6 = VAR_8 - VAR_1;
   return 1;
  } else if (VAR_8 == VAR_2 ||
      VAR_8 == VAR_3 ||
      VAR_8 == VAR_4) {
   FUNC_0("VBT has unsupported DSI port %c\n",
          FUNC_2(VAR_8 - VAR_1));
  }
 }

 return 0;
}
