
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int uncore; } ;


 int FUNC_0 (char*,int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int VAR_20 ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 int FUNC_9 (struct drm_i915_private*,int ,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct drm_i915_private *VAR_21)
{
 u32 VAR_22;

 FUNC_3(&VAR_21->uncore, VAR_0);

 FUNC_1(VAR_5, 1000000);
 FUNC_1(VAR_13, 59400);
 FUNC_1(VAR_4, 245000);
 FUNC_1(VAR_12, 66000);
 FUNC_1(VAR_2, 350000);

 FUNC_1(VAR_7, 10);

 FUNC_1(VAR_1,
     VAR_10 |
     VAR_8 |
     VAR_9 |
     VAR_6 |
     VAR_11 |
     VAR_3);

 FUNC_6(VAR_21);


 VAR_22 = VAR_17 | VAR_18 | VAR_16;
 FUNC_9(VAR_21, VAR_19, VAR_22);

 VAR_22 = FUNC_8(VAR_21, VAR_15);

 FUNC_7(VAR_21);


 FUNC_2((VAR_22 & VAR_14) == 0, "GPLL not enabled\n");

 FUNC_0("GPLL enabled? %s\n", FUNC_10(VAR_22 & VAR_14));
 FUNC_0("GPU status: 0x%08x\n", VAR_22);

 FUNC_5(VAR_21, VAR_20);

 FUNC_4(&VAR_21->uncore, VAR_0);
}
