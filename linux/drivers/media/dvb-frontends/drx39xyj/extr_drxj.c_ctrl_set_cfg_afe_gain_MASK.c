
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {int standard; int qam_pga_cfg; int vsb_pga_cfg; } ;
struct drxj_cfg_afe_gain {int standard; int gain; } ;
struct drx_demod_instance {scalar_t__ my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct drx_demod_instance *VAR_3, struct drxj_cfg_afe_gain *VAR_4)
{
 struct i2c_device_addr *VAR_5 = ((void*)0);
 struct drxj_data *VAR_6 = ((void*)0);
 int VAR_7;
 u8 VAR_8 = 0;


 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_5 = VAR_3->my_i2c_dev_addr;
 VAR_6 = (struct drxj_data *) VAR_3->my_ext_attr;

 switch (VAR_4->standard) {
 case 131:

 case 130:
 case 129:
 case 128:


  break;
 default:
  return -VAR_0;
 }




 if (VAR_4->gain >= 329)
  VAR_8 = 15;
 else if (VAR_4->gain <= 147)
  VAR_8 = 0;
 else
  VAR_8 = (VAR_4->gain - 140 + 6) / 13;


 if (VAR_6->standard == VAR_4->standard) {
   VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_8, 0);
   if (VAR_7 != 0) {
    FUNC_1("error %d\n", VAR_7);
    goto rw_error;
   }
  }


 switch (VAR_4->standard) {
 case 131:
  VAR_6->vsb_pga_cfg = VAR_8 * 13 + 140;
  break;

 case 130:
 case 129:
 case 128:
  VAR_6->qam_pga_cfg = VAR_8 * 13 + 140;
  break;

 default:
  return -VAR_1;
 }

 return 0;
rw_error:
 return VAR_7;
}
