
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int sb_lock; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drm_i915_private*,int ,int ) ;
 int FUNC_2 (struct drm_i915_private*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_i915_private *VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_0, VAR_1);

 FUNC_3(&VAR_5->sb_lock);

 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_2);
 VAR_6 |= VAR_4;
 FUNC_2(VAR_5, VAR_3, VAR_6, VAR_2);

 FUNC_4(&VAR_5->sb_lock);
}
