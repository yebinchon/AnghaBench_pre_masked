
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct drm_i915_private*,int ,int,int*) ;

int
FUNC_3(struct drm_i915_private *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_2, 0x0, &VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to get panel details from OpRegion (%d)\n",
         VAR_6);
  return VAR_6;
 }

 VAR_6 = (VAR_5 >> 8) & 0xff;
 if (VAR_6 > 0x10) {
  FUNC_0("Invalid OpRegion panel type 0x%x\n", VAR_6);
  return -VAR_0;
 }


 if (VAR_6 == 0x0) {
  FUNC_0("No panel type in OpRegion\n");
  return -VAR_1;
 }






 if (!FUNC_1(VAR_3)) {
  FUNC_0("Ignoring OpRegion panel type (%d)\n", VAR_6 - 1);
  return -VAR_1;
 }

 return VAR_6 - 1;
}
