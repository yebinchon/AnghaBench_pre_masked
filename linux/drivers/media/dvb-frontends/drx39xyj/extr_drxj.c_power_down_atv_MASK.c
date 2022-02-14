
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxjscu_cmd {int command; int result_len; int * result; int * parameter; scalar_t__ parameter_len; int * member_4; int * member_3; int member_2; int member_1; int member_0; } ;
struct drx_demod_instance {struct i2c_device_addr* my_i2c_dev_addr; } ;
typedef enum drx_standard { ____Placeholder_drx_standard } drx_standard ;


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
 int VAR_18 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_1 (struct drx_demod_instance*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct i2c_device_addr*,struct drxjscu_cmd*) ;
 int FUNC_4 (struct drx_demod_instance*,int) ;

__attribute__((used)) static int
FUNC_5(struct drx_demod_instance *VAR_19, enum drx_standard VAR_20, bool VAR_21)
{
 struct i2c_device_addr *VAR_22 = VAR_19->my_i2c_dev_addr;
 struct drxjscu_cmd VAR_23 = { 0,
                      0,
                      0,
                     ((void*)0),
                     ((void*)0)
 };
 int VAR_24;
 u16 VAR_25 = 0;




 VAR_23.command = VAR_18 |
     VAR_17;
 VAR_23.parameter_len = 0;
 VAR_23.result_len = 1;
 VAR_23.parameter = ((void*)0);
 VAR_23.result = &VAR_25;
 VAR_24 = FUNC_3(VAR_22, &VAR_23);
 if (VAR_24 != 0) {
  FUNC_2("error %d\n", VAR_24);
  goto rw_error;
 }

 VAR_24 = FUNC_0(VAR_22, VAR_4, (VAR_3 & (~VAR_2)), 0);
 if (VAR_24 != 0) {
  FUNC_2("error %d\n", VAR_24);
  goto rw_error;
 }

 VAR_24 = FUNC_0(VAR_22, VAR_1, VAR_0, 0);
 if (VAR_24 != 0) {
  FUNC_2("error %d\n", VAR_24);
  goto rw_error;
 }
 if (VAR_21) {
  VAR_24 = FUNC_0(VAR_22, VAR_8, VAR_7, 0);
  if (VAR_24 != 0) {
   FUNC_2("error %d\n", VAR_24);
   goto rw_error;
  }
  VAR_24 = FUNC_4(VAR_19, 0);
  if (VAR_24 != 0) {
   FUNC_2("error %d\n", VAR_24);
   goto rw_error;
  }
 } else {
  VAR_24 = FUNC_0(VAR_22, VAR_12, VAR_11, 0);
  if (VAR_24 != 0) {
   FUNC_2("error %d\n", VAR_24);
   goto rw_error;
  }
  VAR_24 = FUNC_0(VAR_22, VAR_10, VAR_9, 0);
  if (VAR_24 != 0) {
   FUNC_2("error %d\n", VAR_24);
   goto rw_error;
  }
  VAR_24 = FUNC_0(VAR_22, VAR_14, VAR_13, 0);
  if (VAR_24 != 0) {
   FUNC_2("error %d\n", VAR_24);
   goto rw_error;
  }
  VAR_24 = FUNC_0(VAR_22, VAR_16, VAR_15, 0);
  if (VAR_24 != 0) {
   FUNC_2("error %d\n", VAR_24);
   goto rw_error;
  }
  VAR_24 = FUNC_0(VAR_22, VAR_6, VAR_5, 0);
  if (VAR_24 != 0) {
   FUNC_2("error %d\n", VAR_24);
   goto rw_error;
  }
 }
 VAR_24 = FUNC_1(VAR_19);
 if (VAR_24 != 0) {
  FUNC_2("error %d\n", VAR_24);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_24;
}
