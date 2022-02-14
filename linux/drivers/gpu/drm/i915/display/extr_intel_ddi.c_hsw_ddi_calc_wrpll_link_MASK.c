
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;



__attribute__((used)) static int FUNC_4(struct drm_i915_private *VAR_8,
       i915_reg_t VAR_9)
{
 int VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u32 VAR_14;

 VAR_14 = FUNC_0(VAR_9);
 switch (VAR_14 & VAR_7) {
 case 128:





  if (FUNC_1(VAR_8) && !FUNC_2(VAR_8)) {
   if (FUNC_0(VAR_0) & VAR_1)
    VAR_10 = 24;
   else
    VAR_10 = 135;
   break;
  }

 case 129:





  VAR_10 = 135;
  break;
 case 130:
  VAR_10 = 2700;
  break;
 default:
  FUNC_3(VAR_14);
  return 0;
 }

 VAR_13 = VAR_14 & VAR_6;
 VAR_12 = (VAR_14 & VAR_4) >> VAR_5;
 VAR_11 = (VAR_14 & VAR_2) >> VAR_3;


 return (VAR_10 * VAR_11 * 100) / (VAR_12 * VAR_13);
}
