
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct drm_device*,int,int*) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct drm_device *VAR_9, u32 VAR_10, u32 VAR_11)
{
 int VAR_12;
 static bool VAR_13 = 1;
 u32 VAR_14;

 if (VAR_13) {
  if (FUNC_5(VAR_9, VAR_10, &VAR_14) == 0)
   FUNC_0("0x%08x: 0x%08x (before)\n", VAR_10, VAR_14);
  FUNC_0("0x%08x: 0x%08x\n", VAR_10, VAR_11);
 }

 VAR_12 = FUNC_6((FUNC_2(VAR_8) & VAR_1) == 0, 1000);
 if (VAR_12) {
  FUNC_1("timeout waiting for SB to idle before write\n");
  return VAR_12;
 }

 FUNC_3(VAR_0, VAR_10);
 FUNC_3(VAR_3, VAR_11);
 FUNC_3(VAR_8,
     FUNC_4(VAR_7, VAR_6) |
     FUNC_4(VAR_5, VAR_4) |
     FUNC_4(0xf, VAR_2));

 VAR_12 = FUNC_6((FUNC_2(VAR_8) & VAR_1) == 0, 1000);
 if (VAR_12) {
  FUNC_1("timeout waiting for SB to idle after write\n");
  return VAR_12;
 }

 if (VAR_13) {
  if (FUNC_5(VAR_9, VAR_10, &VAR_14) == 0)
   FUNC_0("0x%08x: 0x%08x (after)\n", VAR_10, VAR_14);
 }

 return 0;
}
