
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {int hi_cfg_timing_div; int hi_cfg_bridge_delay; int hi_cfg_transmit; int hi_cfg_ctrl; int hi_cfg_wake_up_key; } ;
struct drx_demod_instance {struct i2c_device_addr* my_i2c_dev_addr; scalar_t__ my_common_attr; scalar_t__ my_ext_attr; } ;
struct drx_common_attr {int sys_clock_freq; int osc_clock_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_device_addr*,int,int,int ) ;
 int FUNC_1 (struct drx_demod_instance const*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(const struct drx_demod_instance *VAR_8)
{
 struct drxj_data *VAR_9 = (struct drxj_data *) (((void*)0));
 struct drx_common_attr *VAR_10 = (struct drx_common_attr *) (((void*)0));
 struct i2c_device_addr *VAR_11 = (struct i2c_device_addr *)(((void*)0));
 int VAR_12;

 VAR_9 = (struct drxj_data *) VAR_8->my_ext_attr;
 VAR_10 = (struct drx_common_attr *) VAR_8->my_common_attr;
 VAR_11 = VAR_8->my_i2c_dev_addr;


 VAR_12 = FUNC_0(VAR_11, 0x4301D7, 0x801, 0);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }



 VAR_9->hi_cfg_timing_div =
     (u16) ((VAR_10->sys_clock_freq / 1000) * VAR_2) / 1000;

 if ((VAR_9->hi_cfg_timing_div) > VAR_3)
  VAR_9->hi_cfg_timing_div = VAR_3;



 VAR_9->hi_cfg_bridge_delay =
     (u16) ((VAR_10->osc_clock_freq / 1000) * VAR_1) /
     1000;

 if ((VAR_9->hi_cfg_bridge_delay) > VAR_5)
  VAR_9->hi_cfg_bridge_delay = VAR_5;

 VAR_9->hi_cfg_bridge_delay += ((VAR_9->hi_cfg_bridge_delay) <<
          VAR_4);



 VAR_9->hi_cfg_wake_up_key = VAR_0;

 VAR_9->hi_cfg_ctrl = (VAR_6);

 VAR_9->hi_cfg_transmit = VAR_7;

 VAR_12 = FUNC_1(VAR_8);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }

 return 0;

rw_error:
 return VAR_12;
}
