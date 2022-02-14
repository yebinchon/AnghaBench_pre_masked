
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_i915_private {int bridge_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_2 (int ,unsigned int,int*) ;
 scalar_t__ FUNC_3 (int ,unsigned int,int) ;

int FUNC_4(struct drm_i915_private *VAR_4, bool VAR_5)
{
 unsigned VAR_6 = FUNC_1(VAR_4) >= 6 ? VAR_3 : VAR_1;
 u16 VAR_7;

 if (FUNC_2(VAR_4->bridge_dev, VAR_6, &VAR_7)) {
  FUNC_0("failed to read control word\n");
  return -VAR_0;
 }

 if (!!(VAR_7 & VAR_2) == !VAR_5)
  return 0;

 if (VAR_5)
  VAR_7 &= ~VAR_2;
 else
  VAR_7 |= VAR_2;

 if (FUNC_3(VAR_4->bridge_dev, VAR_6, VAR_7)) {
  FUNC_0("failed to write control word\n");
  return -VAR_0;
 }

 return 0;
}
