
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_adapter {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int max_tmds_clock ;
typedef enum drm_dp_dual_mode_type { ____Placeholder_drm_dp_dual_mode_type } drm_dp_dual_mode_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int ,int*,int) ;

int FUNC_2(enum drm_dp_dual_mode_type VAR_3,
        struct i2c_adapter *VAR_4)
{
 uint8_t VAR_5;
 ssize_t VAR_6;


 if (VAR_3 == VAR_1)
  return 0;





 if (VAR_3 < VAR_2)
  return 165000;

 VAR_6 = FUNC_1(VAR_4, VAR_0,
        &VAR_5, sizeof(VAR_5));
 if (VAR_6 || VAR_5 == 0x00 || VAR_5 == 0xff) {
  FUNC_0("Failed to query max TMDS clock\n");
  return 165000;
 }

 return VAR_5 * 5000 / 2;
}
