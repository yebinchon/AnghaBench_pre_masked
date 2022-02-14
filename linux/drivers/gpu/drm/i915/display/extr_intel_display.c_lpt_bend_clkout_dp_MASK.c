
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int sb_lock; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ) ;
 int FUNC_4 (struct drm_i915_private*,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_4, int VAR_5)
{
 u32 VAR_6;
 int VAR_7 = FUNC_1(VAR_5);

 if (FUNC_2(VAR_5 % 5 != 0))
  return;

 if (FUNC_2(VAR_7 >= FUNC_0(VAR_3)))
  return;

 FUNC_5(&VAR_4->sb_lock);

 if (VAR_5 % 10 != 0)
  VAR_6 = 0xAAAAAAAB;
 else
  VAR_6 = 0x00000000;
 FUNC_4(VAR_4, VAR_1, VAR_6, VAR_0);

 VAR_6 = FUNC_3(VAR_4, VAR_2, VAR_0);
 VAR_6 &= 0xffff0000;
 VAR_6 |= VAR_3[VAR_7];
 FUNC_4(VAR_4, VAR_2, VAR_6, VAR_0);

 FUNC_6(&VAR_4->sb_lock);
}
