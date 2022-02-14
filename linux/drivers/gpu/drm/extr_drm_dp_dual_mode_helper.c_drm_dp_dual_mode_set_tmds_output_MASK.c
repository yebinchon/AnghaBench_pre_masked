
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int tmp ;
typedef int tmds_oen ;
struct i2c_adapter {int dummy; } ;
typedef int ssize_t ;
typedef enum drm_dp_dual_mode_type { ____Placeholder_drm_dp_dual_mode_type } drm_dp_dual_mode_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i2c_adapter*,int ,scalar_t__*,int) ;
 int FUNC_2 (struct i2c_adapter*,int ,scalar_t__*,int) ;

int FUNC_3(enum drm_dp_dual_mode_type VAR_4,
         struct i2c_adapter *VAR_5, bool VAR_6)
{
 uint8_t VAR_7 = VAR_6 ? 0 : VAR_0;
 ssize_t VAR_8;
 int VAR_9;

 if (VAR_4 < VAR_2)
  return 0;





 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  uint8_t VAR_10;

  VAR_8 = FUNC_2(VAR_5, VAR_1,
          &VAR_7, sizeof(VAR_7));
  if (VAR_8) {
   FUNC_0("Failed to %s TMDS output buffers (%d attempts)\n",
          VAR_6 ? "enable" : "disable",
          VAR_9 + 1);
   return VAR_8;
  }

  VAR_8 = FUNC_1(VAR_5, VAR_1,
         &VAR_10, sizeof(VAR_10));
  if (VAR_8) {
   FUNC_0("I2C read failed during TMDS output buffer %s (%d attempts)\n",
          VAR_6 ? "enabling" : "disabling",
          VAR_9 + 1);
   return VAR_8;
  }

  if (VAR_10 == VAR_7)
   return 0;
 }

 FUNC_0("I2C write value mismatch during TMDS output buffer %s\n",
        VAR_6 ? "enabling" : "disabling");

 return -VAR_3;
}
