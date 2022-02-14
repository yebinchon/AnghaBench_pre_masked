
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int runtime_pm; int gt; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_i915_private*,int) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*,int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_8, void *VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_9;
 u32 VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 irqreturn_t VAR_15 = VAR_6;

 if (!FUNC_10(VAR_10))
  return VAR_6;


 FUNC_4(&VAR_10->runtime_pm);


 VAR_13 = FUNC_1(VAR_0);
 FUNC_2(VAR_0, VAR_13 & ~VAR_2);






 if (!FUNC_0(VAR_10)) {
  VAR_14 = FUNC_1(VAR_7);
  FUNC_2(VAR_7, 0);
 }



 VAR_12 = FUNC_1(VAR_4);
 if (VAR_12) {
  FUNC_2(VAR_4, VAR_12);
  VAR_15 = VAR_5;
  if (FUNC_3(VAR_10) >= 6)
   FUNC_7(&VAR_10->gt, VAR_12);
  else
   FUNC_6(&VAR_10->gt, VAR_12);
 }

 VAR_11 = FUNC_1(VAR_1);
 if (VAR_11) {
  FUNC_2(VAR_1, VAR_11);
  VAR_15 = VAR_5;
  if (FUNC_3(VAR_10) >= 7)
   FUNC_11(VAR_10, VAR_11);
  else
   FUNC_9(VAR_10, VAR_11);
 }

 if (FUNC_3(VAR_10) >= 6) {
  u32 VAR_16 = FUNC_1(VAR_3);
  if (VAR_16) {
   FUNC_2(VAR_3, VAR_16);
   VAR_15 = VAR_5;
   FUNC_8(VAR_10, VAR_16);
  }
 }

 FUNC_2(VAR_0, VAR_13);
 if (!FUNC_0(VAR_10))
  FUNC_2(VAR_7, VAR_14);


 FUNC_5(&VAR_10->runtime_pm);

 return VAR_15;
}
