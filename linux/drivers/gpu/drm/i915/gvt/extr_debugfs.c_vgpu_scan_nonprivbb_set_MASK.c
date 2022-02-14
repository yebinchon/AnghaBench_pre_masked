
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct intel_vgpu {int scan_nonprivbb; int id; TYPE_1__* gvt; } ;
struct intel_engine_cs {int id; } ;
struct drm_i915_private {struct intel_engine_cs** engine; } ;
typedef enum intel_engine_id { ____Placeholder_intel_engine_id } intel_engine_id ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, u64 VAR_2)
{
 struct intel_vgpu *VAR_3 = (struct intel_vgpu *)VAR_1;
 struct drm_i915_private *VAR_4 = VAR_3->gvt->dev_priv;
 enum intel_engine_id VAR_5;
 char VAR_6[128], *VAR_7;
 int VAR_8;

 VAR_2 &= (1 << VAR_0) - 1;

 if (VAR_3->scan_nonprivbb == VAR_2)
  return 0;

 if (!VAR_2)
  goto done;

 VAR_8 = FUNC_2(VAR_6,
  "gvt: vgpu %d turns on non-privileged batch buffers scanning on Engines:",
  VAR_3->id);

 VAR_7 = VAR_6 + VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct intel_engine_cs *VAR_9;

  VAR_9 = VAR_4->engine[VAR_5];
  if (VAR_9 && (VAR_2 & (1 << VAR_5))) {
   VAR_8 = FUNC_1(VAR_7, 4, "%d, ", VAR_9->id);
   VAR_7 += VAR_8;
  } else
   VAR_2 &= ~(1 << VAR_5);
 }

 if (VAR_2)
  FUNC_2(VAR_7, "low performance expected.");

 FUNC_0("%s\n", VAR_6);

done:
 VAR_3->scan_nonprivbb = VAR_2;
 return 0;
}
