
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxjscu_cmd {int command; int result_len; int * result; int * parameter; scalar_t__ parameter_len; int * member_4; int * member_3; int member_2; int member_1; int member_0; } ;
struct drx_demod_instance {struct i2c_device_addr* my_i2c_dev_addr; } ;
struct drx_cfg_mpeg_output {int enable_mpeg_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct drx_demod_instance*,struct drx_cfg_mpeg_output*) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct i2c_device_addr*,struct drxjscu_cmd*) ;
 int FUNC_4 (struct drx_demod_instance*,int) ;

__attribute__((used)) static int FUNC_5(struct drx_demod_instance *VAR_18, bool VAR_19)
{
 struct i2c_device_addr *VAR_20 = VAR_18->my_i2c_dev_addr;
 struct drxjscu_cmd VAR_21 = { 0,
                      0,
                      0,
                     ((void*)0),
                     ((void*)0)
 };
 struct drx_cfg_mpeg_output VAR_22;
 int VAR_23;
 u16 VAR_24 = 0;





 VAR_21.command = VAR_15 |
     VAR_14;
 VAR_21.parameter_len = 0;
 VAR_21.result_len = 1;
 VAR_21.parameter = ((void*)0);
 VAR_21.result = &VAR_24;
 VAR_23 = FUNC_3(VAR_20, &VAR_21);
 if (VAR_23 != 0) {
  FUNC_2("error %d\n", VAR_23);
  goto rw_error;
 }


 VAR_23 = FUNC_1(VAR_20, VAR_1, VAR_0, 0);
 if (VAR_23 != 0) {
  FUNC_2("error %d\n", VAR_23);
  goto rw_error;
 }
 VAR_23 = FUNC_1(VAR_20, VAR_17, VAR_16, 0);
 if (VAR_23 != 0) {
  FUNC_2("error %d\n", VAR_23);
  goto rw_error;
 }
 if (VAR_19) {
  VAR_23 = FUNC_1(VAR_20, VAR_5, VAR_4, 0);
  if (VAR_23 != 0) {
   FUNC_2("error %d\n", VAR_23);
   goto rw_error;
  }
  VAR_23 = FUNC_4(VAR_18, 0);
  if (VAR_23 != 0) {
   FUNC_2("error %d\n", VAR_23);
   goto rw_error;
  }
 } else {
  VAR_23 = FUNC_1(VAR_20, VAR_9, VAR_8, 0);
  if (VAR_23 != 0) {
   FUNC_2("error %d\n", VAR_23);
   goto rw_error;
  }
  VAR_23 = FUNC_1(VAR_20, VAR_7, VAR_6, 0);
  if (VAR_23 != 0) {
   FUNC_2("error %d\n", VAR_23);
   goto rw_error;
  }
  VAR_23 = FUNC_1(VAR_20, VAR_11, VAR_10, 0);
  if (VAR_23 != 0) {
   FUNC_2("error %d\n", VAR_23);
   goto rw_error;
  }
  VAR_23 = FUNC_1(VAR_20, VAR_13, VAR_12, 0);
  if (VAR_23 != 0) {
   FUNC_2("error %d\n", VAR_23);
   goto rw_error;
  }
  VAR_23 = FUNC_1(VAR_20, VAR_3, VAR_2, 0);
  if (VAR_23 != 0) {
   FUNC_2("error %d\n", VAR_23);
   goto rw_error;
  }
 }

 VAR_22.enable_mpeg_output = 0;
 VAR_23 = FUNC_0(VAR_18, &VAR_22);
 if (VAR_23 != 0) {
  FUNC_2("error %d\n", VAR_23);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_23;
}
