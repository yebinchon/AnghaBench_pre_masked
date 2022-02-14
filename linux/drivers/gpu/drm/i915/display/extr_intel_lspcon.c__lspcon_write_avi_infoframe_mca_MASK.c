
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct drm_dp_aux {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct drm_dp_aux*,scalar_t__,int*,int) ;
 int FUNC_3 (struct drm_dp_aux*,scalar_t__,int*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct drm_dp_aux *VAR_4,
         const u8 *VAR_5, ssize_t VAR_6)
{
 int VAR_7;
 u32 VAR_8 = 0;
 u32 VAR_9;
 u16 VAR_10;
 const u8 *VAR_11 = VAR_5;

 VAR_10 = VAR_3;
 while (VAR_8 < VAR_6) {

  for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {
   VAR_7 = FUNC_3(VAR_4, VAR_10, (void *)VAR_11, 1);
   if (VAR_7 == 1) {
    break;
   } else if (VAR_9 < 4) {
    FUNC_4(50);
    continue;
   } else {
    FUNC_1("DPCD write failed at:0x%x\n", VAR_10);
    return 0;
   }
  }
  VAR_8++; VAR_10++; VAR_11++;
 }

 VAR_8 = 0;
 VAR_10 = VAR_0;
 VAR_7 = FUNC_2(VAR_4, VAR_10, &VAR_8, 1);
 if (VAR_7 < 0) {
  FUNC_1("DPCD read failed, address 0x%x\n", VAR_10);
  return 0;
 }


 VAR_8 &= ~VAR_1;
 VAR_8 |= VAR_2;

 VAR_7 = FUNC_3(VAR_4, VAR_10, &VAR_8, 1);
 if (VAR_7 < 0) {
  FUNC_1("DPCD read failed, address 0x%x\n", VAR_10);
  return 0;
 }

 VAR_8 = 0;
 VAR_7 = FUNC_2(VAR_4, VAR_10, &VAR_8, 1);
 if (VAR_7 < 0) {
  FUNC_1("DPCD read failed, address 0x%x\n", VAR_10);
  return 0;
 }

 if (VAR_8 == VAR_1)
  FUNC_0("AVI IF handled by FW\n");

 return 1;
}
