
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int sb_lock; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct drm_i915_private*,int,int ) ;
 int FUNC_2 (struct drm_i915_private*,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

void FUNC_6(struct drm_i915_private *VAR_7)
{
 u32 VAR_8, VAR_9;

 FUNC_3(&VAR_7->sb_lock);

 VAR_8 = FUNC_0(VAR_7) ? VAR_1 : VAR_0;
 VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_3);
 VAR_9 &= ~VAR_2;
 FUNC_2(VAR_7, VAR_8, VAR_9, VAR_3);

 VAR_9 = FUNC_1(VAR_7, VAR_4, VAR_3);
 if (!(VAR_9 & VAR_5)) {
  if (!(VAR_9 & VAR_6)) {
   VAR_9 |= VAR_6;
   FUNC_2(VAR_7, VAR_4, VAR_9, VAR_3);
   FUNC_5(32);
  }
  VAR_9 |= VAR_5;
  FUNC_2(VAR_7, VAR_4, VAR_9, VAR_3);
 }

 FUNC_4(&VAR_7->sb_lock);
}
