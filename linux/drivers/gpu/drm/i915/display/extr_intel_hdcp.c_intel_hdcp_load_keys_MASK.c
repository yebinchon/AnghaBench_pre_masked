
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_7 ;
 int FUNC_6 (int *,int ,int,int,int,int,int*) ;
 int FUNC_7 (struct drm_i915_private*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct drm_i915_private *VAR_8)
{
 int VAR_9;
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_6);
 if ((VAR_10 & VAR_3) && (VAR_10 & VAR_4))
  return 0;





 if (FUNC_5(VAR_8) || FUNC_3(VAR_8))
  if (!(FUNC_1(VAR_6) & VAR_3))
   return -VAR_0;
 if (FUNC_4(VAR_8)) {
  VAR_9 = FUNC_7(VAR_8,
           VAR_7, 1);
  if (VAR_9) {
   FUNC_0("Failed to initiate HDCP key load (%d)\n",
             VAR_9);
   return VAR_9;
  }
 } else {
  FUNC_2(VAR_2, VAR_5);
 }


 VAR_9 = FUNC_6(&VAR_8->uncore, VAR_6,
     VAR_3, VAR_3,
     10, 1, &VAR_10);
 if (VAR_9)
  return VAR_9;
 else if (!(VAR_10 & VAR_4))
  return -VAR_0;


 FUNC_2(VAR_2, VAR_1);

 return 0;
}
