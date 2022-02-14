
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int sb_lock; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (struct drm_i915_private*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_i915_private *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;
 u32 VAR_17 = 172800 * 1000;
 u32 VAR_18 = 64;
 u32 VAR_19;
 u32 VAR_20;

 if ((FUNC_1(VAR_0) & VAR_1) == 0)
  return 0;

 FUNC_3(&VAR_13->sb_lock);

 VAR_20 = FUNC_2(VAR_13, VAR_6, VAR_2);
 if (VAR_20 & VAR_7) {
  FUNC_4(&VAR_13->sb_lock);
  return 0;
 }

 VAR_20 = FUNC_2(VAR_13, VAR_8, VAR_2);
 VAR_14 = (VAR_20 & VAR_9) >>
  VAR_10;
 VAR_15 = (VAR_20 & VAR_11) >>
  VAR_12;

 VAR_20 = FUNC_2(VAR_13, VAR_3, VAR_2);
 VAR_16 = (VAR_20 & VAR_4) >>
  VAR_5;

 FUNC_4(&VAR_13->sb_lock);

 VAR_19 = (VAR_14 + 2) * VAR_18 + VAR_15;

 return FUNC_0(VAR_17,
     VAR_19 << VAR_16);
}
