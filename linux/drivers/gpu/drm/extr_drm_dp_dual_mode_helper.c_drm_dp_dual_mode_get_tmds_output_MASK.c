
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tmds_oen ;
struct i2c_adapter {int dummy; } ;
typedef int ssize_t ;
typedef enum drm_dp_dual_mode_type { ____Placeholder_drm_dp_dual_mode_type } drm_dp_dual_mode_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct i2c_adapter*,int ,int*,int) ;

int FUNC_2(enum drm_dp_dual_mode_type VAR_3,
         struct i2c_adapter *VAR_4,
         bool *VAR_5)
{
 uint8_t VAR_6;
 ssize_t VAR_7;

 if (VAR_3 < VAR_2) {
  *VAR_5 = 1;
  return 0;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_1,
        &VAR_6, sizeof(VAR_6));
 if (VAR_7) {
  FUNC_0("Failed to query state of TMDS output buffers\n");
  return VAR_7;
 }

 *VAR_5 = !(VAR_6 & VAR_0);

 return 0;
}
