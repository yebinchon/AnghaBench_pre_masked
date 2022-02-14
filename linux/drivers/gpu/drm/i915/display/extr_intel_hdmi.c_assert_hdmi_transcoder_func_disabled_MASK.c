
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_1,
         enum transcoder VAR_2)
{
 FUNC_2(FUNC_0(FUNC_1(VAR_2)) &
      VAR_0,
      "HDMI transcoder function enabled, expecting disabled\n");
}
