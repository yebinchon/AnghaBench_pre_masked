
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct drm_i915_private*,int ,int ) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_8 (struct drm_connector*) ;
 struct drm_i915_private* FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_connector*) ;

__attribute__((used)) static bool FUNC_11(struct drm_connector *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct drm_i915_private *VAR_8 = FUNC_9(VAR_7);
 u32 VAR_9;
 bool VAR_10 = 0;
 int VAR_11, VAR_12 = 0;

 if (FUNC_1(VAR_8))
  return FUNC_8(VAR_6);

 if (FUNC_5(VAR_8))
  return FUNC_10(VAR_6);






 if (FUNC_4(VAR_8))
  VAR_12 = 2;
 else
  VAR_12 = 1;

 for (VAR_11 = 0; VAR_11 < VAR_12 ; VAR_11++) {

  FUNC_6(VAR_8,
           VAR_0,
           VAR_0);

  if (FUNC_7(VAR_8, VAR_4,
         VAR_0, 1000))
   FUNC_0("timed out waiting for FORCE_DETECT to go off");
 }

 VAR_9 = FUNC_2(VAR_5);
 if ((VAR_9 & VAR_2) != VAR_3)
  VAR_10 = 1;


 FUNC_3(VAR_5, VAR_1);

 FUNC_6(VAR_8, VAR_0, 0);

 return VAR_10;
}
