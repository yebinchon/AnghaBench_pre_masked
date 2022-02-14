
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxjscu_cmd {int command; int result_len; int * result; int * parameter; scalar_t__ parameter_len; int * member_4; int * member_3; int member_2; int member_1; int member_0; } ;
struct drx_demod_instance {struct drx_common_attr* my_common_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
struct drx_common_attr {int mpeg_cfg; } ;
struct drx_cfg_mpeg_output {int enable_mpeg_output; } ;
typedef int cfg_mpeg_output ;


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
 int FUNC_2 (struct drx_cfg_mpeg_output*,int *,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct i2c_device_addr*,struct drxjscu_cmd*) ;
 int FUNC_5 (struct drx_demod_instance*,int) ;

__attribute__((used)) static int FUNC_6(struct drx_demod_instance *VAR_18, bool VAR_19)
{
 struct drxjscu_cmd VAR_20 = { 0,
                      0,
                      0,
                     ((void*)0),
                     ((void*)0)
 };
 int VAR_21;
 struct i2c_device_addr *VAR_22 = VAR_18->my_i2c_dev_addr;
 struct drx_cfg_mpeg_output VAR_23;
 struct drx_common_attr *VAR_24 = VAR_18->my_common_attr;
 u16 VAR_25 = 0;






 VAR_21 = FUNC_1(VAR_22, VAR_1, VAR_0, 0);
 if (VAR_21 != 0) {
  FUNC_3("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_21 = FUNC_1(VAR_22, VAR_15, VAR_14, 0);
 if (VAR_21 != 0) {
  FUNC_3("error %d\n", VAR_21);
  goto rw_error;
 }

 VAR_20.command = VAR_17 |
     VAR_16;
 VAR_20.parameter_len = 0;
 VAR_20.result_len = 1;
 VAR_20.parameter = ((void*)0);
 VAR_20.result = &VAR_25;
 VAR_21 = FUNC_4(VAR_22, &VAR_20);
 if (VAR_21 != 0) {
  FUNC_3("error %d\n", VAR_21);
  goto rw_error;
 }

 if (VAR_19) {
  VAR_21 = FUNC_1(VAR_22, VAR_5, VAR_4, 0);
  if (VAR_21 != 0) {
   FUNC_3("error %d\n", VAR_21);
   goto rw_error;
  }
  VAR_21 = FUNC_5(VAR_18, 0);
  if (VAR_21 != 0) {
   FUNC_3("error %d\n", VAR_21);
   goto rw_error;
  }
 } else {
  VAR_21 = FUNC_1(VAR_22, VAR_9, VAR_8, 0);
  if (VAR_21 != 0) {
   FUNC_3("error %d\n", VAR_21);
   goto rw_error;
  }
  VAR_21 = FUNC_1(VAR_22, VAR_7, VAR_6, 0);
  if (VAR_21 != 0) {
   FUNC_3("error %d\n", VAR_21);
   goto rw_error;
  }
  VAR_21 = FUNC_1(VAR_22, VAR_11, VAR_10, 0);
  if (VAR_21 != 0) {
   FUNC_3("error %d\n", VAR_21);
   goto rw_error;
  }
  VAR_21 = FUNC_1(VAR_22, VAR_13, VAR_12, 0);
  if (VAR_21 != 0) {
   FUNC_3("error %d\n", VAR_21);
   goto rw_error;
  }
  VAR_21 = FUNC_1(VAR_22, VAR_3, VAR_2, 0);
  if (VAR_21 != 0) {
   FUNC_3("error %d\n", VAR_21);
   goto rw_error;
  }
 }

 FUNC_2(&VAR_23, &VAR_24->mpeg_cfg, sizeof(VAR_23));
 VAR_23.enable_mpeg_output = 0;

 VAR_21 = FUNC_0(VAR_18, &VAR_23);
 if (VAR_21 != 0) {
  FUNC_3("error %d\n", VAR_21);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_21;
}
