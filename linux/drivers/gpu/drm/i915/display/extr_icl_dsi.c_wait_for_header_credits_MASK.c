
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_1,
        enum transcoder VAR_2)
{
 if (FUNC_2(FUNC_1(VAR_1, VAR_2) >=
   VAR_0, 100))
  FUNC_0("DSI header credits not released\n");
}
