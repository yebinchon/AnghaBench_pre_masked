
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct drm_device *VAR_9, u32 VAR_10, u32 *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_4((FUNC_1(VAR_8) & VAR_1) == 0, 1000);
 if (VAR_12) {
  FUNC_0("timeout waiting for SB to idle before read\n");
  return VAR_12;
 }

 FUNC_2(VAR_0, VAR_10);
 FUNC_2(VAR_8,
     FUNC_3(VAR_7, VAR_6) |
     FUNC_3(VAR_5, VAR_4) |
     FUNC_3(0xf, VAR_2));

 VAR_12 = FUNC_4((FUNC_1(VAR_8) & VAR_1) == 0, 1000);
 if (VAR_12) {
  FUNC_0("timeout waiting for SB to idle after read\n");
  return VAR_12;
 }

 *VAR_11 = FUNC_1(VAR_3);

 return 0;
}
