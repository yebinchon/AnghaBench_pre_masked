
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int,char*,int ,...) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_i915_private*,int ,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_1,
         enum pipe VAR_2, enum port VAR_3,
         i915_reg_t VAR_4)
{
 enum pipe VAR_5;
 bool VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_4, &VAR_5);

 FUNC_1(VAR_6 && VAR_5 == VAR_2,
   "PCH HDMI %c enabled on transcoder %c, should be disabled\n",
   FUNC_4(VAR_3), FUNC_3(VAR_2));

 FUNC_1(FUNC_0(VAR_1) && !VAR_6 && VAR_5 == VAR_0,
   "IBX PCH HDMI %c still using transcoder B\n",
   FUNC_4(VAR_3));
}
