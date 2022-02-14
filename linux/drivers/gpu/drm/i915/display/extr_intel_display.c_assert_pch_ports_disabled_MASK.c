
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct drm_i915_private*,int,int ,int ) ;
 int FUNC_2 (struct drm_i915_private*,int,int ,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int ,int*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int ,int*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_11,
          enum pipe VAR_12)
{
 enum pipe VAR_13;

 FUNC_1(VAR_11, VAR_12, VAR_8, VAR_1);
 FUNC_1(VAR_11, VAR_12, VAR_9, VAR_2);
 FUNC_1(VAR_11, VAR_12, VAR_10, VAR_3);

 FUNC_0(FUNC_3(VAR_11, VAR_0, &VAR_13) &&
   VAR_13 == VAR_12,
   "PCH VGA enabled on transcoder %c, should be disabled\n",
   FUNC_5(VAR_12));

 FUNC_0(FUNC_4(VAR_11, VAR_7, &VAR_13) &&
   VAR_13 == VAR_12,
   "PCH LVDS enabled on transcoder %c, should be disabled\n",
   FUNC_5(VAR_12));


 FUNC_2(VAR_11, VAR_12, VAR_8, VAR_4);
 FUNC_2(VAR_11, VAR_12, VAR_9, VAR_5);
 FUNC_2(VAR_11, VAR_12, VAR_10, VAR_6);
}
