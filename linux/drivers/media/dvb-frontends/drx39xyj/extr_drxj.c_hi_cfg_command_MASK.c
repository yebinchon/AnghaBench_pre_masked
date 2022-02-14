
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxj_hi_cmd {int param6; int param5; int param4; int param3; int param2; int param1; int cmd; } ;
struct drxj_data {int hi_cfg_ctrl; int hi_cfg_transmit; int hi_cfg_wake_up_key; int hi_cfg_bridge_delay; int hi_cfg_timing_div; } ;
struct drx_demod_instance {int my_i2c_dev_addr; scalar_t__ my_ext_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct drxj_hi_cmd*,int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(const struct drx_demod_instance *VAR_3)
{
 struct drxj_data *VAR_4 = (struct drxj_data *) (((void*)0));
 struct drxj_hi_cmd VAR_5;
 u16 VAR_6 = 0;
 int VAR_7;

 VAR_4 = (struct drxj_data *) VAR_3->my_ext_attr;

 VAR_5.cmd = VAR_0;
 VAR_5.param1 = VAR_1;
 VAR_5.param2 = VAR_4->hi_cfg_timing_div;
 VAR_5.param3 = VAR_4->hi_cfg_bridge_delay;
 VAR_5.param4 = VAR_4->hi_cfg_wake_up_key;
 VAR_5.param5 = VAR_4->hi_cfg_ctrl;
 VAR_5.param6 = VAR_4->hi_cfg_transmit;

 VAR_7 = FUNC_0(VAR_3->my_i2c_dev_addr, &VAR_5, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_1("error %d\n", VAR_7);
  goto rw_error;
 }


 VAR_4->hi_cfg_ctrl &= (~(VAR_2));

 return 0;

rw_error:
 return VAR_7;
}
