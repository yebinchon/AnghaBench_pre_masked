
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_5 ;
 int FUNC_3 (struct drm_i915_private*,int*,int*,int,int,int ,int ) ;
 int FUNC_4 (struct drm_i915_private*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_8, u32 VAR_9)
{
 u32 VAR_10 = VAR_9 & VAR_3 &
  ~VAR_4;
 u32 VAR_11 = VAR_9 & VAR_4;
 u32 VAR_12 = 0, VAR_13 = 0;

 if (VAR_10) {
  u32 VAR_14;

  VAR_14 = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_14);

  FUNC_3(VAR_8, &VAR_12, &VAR_13,
       VAR_10, VAR_14, VAR_5,
       VAR_7);
 }

 if (VAR_11) {
  u32 VAR_15;

  VAR_15 = FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_15);

  FUNC_3(VAR_8, &VAR_12, &VAR_13,
       VAR_11, VAR_15, VAR_5,
       VAR_6);
 }

 if (VAR_12)
  FUNC_4(VAR_8, VAR_12, VAR_13);

 if (VAR_9 & VAR_2)
  FUNC_2(VAR_8);
}
