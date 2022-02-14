
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_9,
          enum transcoder VAR_10)
{
 u32 VAR_11, VAR_12;


 FUNC_6(VAR_9, (enum pipe) VAR_10);
 FUNC_5(VAR_9, VAR_3);


 VAR_11 = FUNC_1(FUNC_4(VAR_3));
 VAR_11 |= VAR_4;
 FUNC_2(FUNC_4(VAR_3), VAR_11);

 VAR_11 = VAR_5;
 VAR_12 = FUNC_1(FUNC_3(VAR_10));

 if ((VAR_12 & VAR_2) ==
     VAR_1)
  VAR_11 |= VAR_6;
 else
  VAR_11 |= VAR_7;

 FUNC_2(VAR_0, VAR_11);
 if (FUNC_7(VAR_9, VAR_0,
      VAR_8, 100))
  FUNC_0("Failed to enable PCH transcoder\n");
}
