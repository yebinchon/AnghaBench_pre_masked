
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
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (struct drm_i915_private*,int ,int ) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ,int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_7,
     bool VAR_8, bool VAR_9)
{
 u32 VAR_10, VAR_11;

 if (FUNC_1(VAR_9 && !VAR_8, "FDI requires downspread\n"))
  VAR_8 = 1;
 if (FUNC_1(FUNC_0(VAR_7) &&
     VAR_9, "LP PCH doesn't have FDI\n"))
  VAR_9 = 0;

 FUNC_6(&VAR_7->sb_lock);

 VAR_11 = FUNC_2(VAR_7, VAR_4, VAR_3);
 VAR_11 &= ~VAR_5;
 VAR_11 |= VAR_6;
 FUNC_3(VAR_7, VAR_4, VAR_11, VAR_3);

 FUNC_8(24);

 if (VAR_8) {
  VAR_11 = FUNC_2(VAR_7, VAR_4, VAR_3);
  VAR_11 &= ~VAR_6;
  FUNC_3(VAR_7, VAR_4, VAR_11, VAR_3);

  if (VAR_9) {
   FUNC_5(VAR_7);
   FUNC_4(VAR_7);
  }
 }

 VAR_10 = FUNC_0(VAR_7) ? VAR_1 : VAR_0;
 VAR_11 = FUNC_2(VAR_7, VAR_10, VAR_3);
 VAR_11 |= VAR_2;
 FUNC_3(VAR_7, VAR_10, VAR_11, VAR_3);

 FUNC_7(&VAR_7->sb_lock);
}
