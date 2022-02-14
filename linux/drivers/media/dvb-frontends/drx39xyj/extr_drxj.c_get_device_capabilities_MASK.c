
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {int has_lna; int has_ntsc; int has_btsc; int has_oob; int has_smatx; int has_smarx; int has_gpio; int has_irqn; scalar_t__ mfx; } ;
struct drx_demod_instance {struct i2c_device_addr* my_i2c_dev_addr; scalar_t__ my_ext_attr; scalar_t__ my_common_attr; } ;
struct drx_common_attr {int osc_clock_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_2 (struct i2c_device_addr*,int ,int ,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct drx_demod_instance *VAR_8)
{
 struct drx_common_attr *VAR_9 = (struct drx_common_attr *) (((void*)0));
 struct drxj_data *VAR_10 = (struct drxj_data *) ((void*)0);
 struct i2c_device_addr *VAR_11 = (struct i2c_device_addr *)(((void*)0));
 u16 VAR_12 = 0;
 u32 VAR_13 = 0;
 u16 VAR_14 = 0;
 int VAR_15;

 VAR_9 = (struct drx_common_attr *) VAR_8->my_common_attr;
 VAR_10 = (struct drxj_data *) VAR_8->my_ext_attr;
 VAR_11 = VAR_8->my_i2c_dev_addr;

 VAR_15 = FUNC_2(VAR_11, VAR_5, VAR_4, 0);
 if (VAR_15 != 0) {
  FUNC_3("error %d\n", VAR_15);
  goto rw_error;
 }
 VAR_15 = FUNC_1(VAR_11, VAR_2, &VAR_12, 0);
 if (VAR_15 != 0) {
  FUNC_3("error %d\n", VAR_15);
  goto rw_error;
 }
 VAR_15 = FUNC_2(VAR_11, VAR_5, VAR_6, 0);
 if (VAR_15 != 0) {
  FUNC_3("error %d\n", VAR_15);
  goto rw_error;
 }

 switch ((VAR_12 & VAR_1)) {
 case 0:

  break;
 case 1:

  VAR_9->osc_clock_freq = 27000;
  break;
 case 2:

  VAR_9->osc_clock_freq = 20250;
  break;
 case 3:

  VAR_9->osc_clock_freq = 4000;
  break;
 default:
  return -VAR_0;
 }





 VAR_15 = FUNC_0(VAR_11, VAR_7, &VAR_13, 0);
 if (VAR_15 != 0) {
  FUNC_3("error %d\n", VAR_15);
  goto rw_error;
 }
 VAR_10->mfx = (u8) ((VAR_13 >> 29) & 0xF);

 switch ((VAR_13 >> 12) & 0xFF) {
 case 0x31:
  VAR_15 = FUNC_2(VAR_11, VAR_5, VAR_4, 0);
  if (VAR_15 != 0) {
   FUNC_3("error %d\n", VAR_15);
   goto rw_error;
  }
  VAR_15 = FUNC_1(VAR_11, VAR_3, &VAR_14, 0);
  if (VAR_15 != 0) {
   FUNC_3("error %d\n", VAR_15);
   goto rw_error;
  }
  VAR_14 = (VAR_14 >> 10) & 0xf;
  VAR_15 = FUNC_2(VAR_11, VAR_5, VAR_6, 0);
  if (VAR_15 != 0) {
   FUNC_3("error %d\n", VAR_15);
   goto rw_error;
  }

  VAR_10->has_lna = 1;
  VAR_10->has_ntsc = 0;
  VAR_10->has_btsc = 0;
  VAR_10->has_oob = 0;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 0;
  VAR_10->has_gpio = 0;
  VAR_10->has_irqn = 0;
  break;
 case 0x33:
  VAR_10->has_lna = 0;
  VAR_10->has_ntsc = 0;
  VAR_10->has_btsc = 0;
  VAR_10->has_oob = 0;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 0;
  VAR_10->has_gpio = 0;
  VAR_10->has_irqn = 0;
  break;
 case 0x45:
  VAR_10->has_lna = 1;
  VAR_10->has_ntsc = 1;
  VAR_10->has_btsc = 0;
  VAR_10->has_oob = 0;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 1;
  VAR_10->has_gpio = 1;
  VAR_10->has_irqn = 0;
  break;
 case 0x46:
  VAR_10->has_lna = 0;
  VAR_10->has_ntsc = 1;
  VAR_10->has_btsc = 0;
  VAR_10->has_oob = 0;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 1;
  VAR_10->has_gpio = 1;
  VAR_10->has_irqn = 0;
  break;
 case 0x41:
  VAR_10->has_lna = 1;
  VAR_10->has_ntsc = 1;
  VAR_10->has_btsc = 1;
  VAR_10->has_oob = 0;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 1;
  VAR_10->has_gpio = 1;
  VAR_10->has_irqn = 0;
  break;
 case 0x43:
  VAR_10->has_lna = 0;
  VAR_10->has_ntsc = 1;
  VAR_10->has_btsc = 1;
  VAR_10->has_oob = 0;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 1;
  VAR_10->has_gpio = 1;
  VAR_10->has_irqn = 0;
  break;
 case 0x32:
  VAR_10->has_lna = 1;
  VAR_10->has_ntsc = 0;
  VAR_10->has_btsc = 0;
  VAR_10->has_oob = 1;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 1;
  VAR_10->has_gpio = 1;
  VAR_10->has_irqn = 1;
  break;
 case 0x34:
  VAR_10->has_lna = 0;
  VAR_10->has_ntsc = 1;
  VAR_10->has_btsc = 1;
  VAR_10->has_oob = 1;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 1;
  VAR_10->has_gpio = 1;
  VAR_10->has_irqn = 1;
  break;
 case 0x42:
  VAR_10->has_lna = 1;
  VAR_10->has_ntsc = 1;
  VAR_10->has_btsc = 1;
  VAR_10->has_oob = 1;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 1;
  VAR_10->has_gpio = 1;
  VAR_10->has_irqn = 1;
  break;
 case 0x44:
  VAR_10->has_lna = 0;
  VAR_10->has_ntsc = 1;
  VAR_10->has_btsc = 1;
  VAR_10->has_oob = 1;
  VAR_10->has_smatx = 1;
  VAR_10->has_smarx = 1;
  VAR_10->has_gpio = 1;
  VAR_10->has_irqn = 1;
  break;
 default:

  return -VAR_0;
  break;
 }

 return 0;
rw_error:
 return VAR_15;
}
