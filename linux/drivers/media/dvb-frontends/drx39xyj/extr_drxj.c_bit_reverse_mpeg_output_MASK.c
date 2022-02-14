
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {scalar_t__ bit_reverse_mpeg_outout; } ;
struct drx_demod_instance {scalar_t__ my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int *,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int ,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct drx_demod_instance *VAR_2)
{
 struct drxj_data *VAR_3 = (struct drxj_data *) (((void*)0));
 struct i2c_device_addr *VAR_4 = (struct i2c_device_addr *)(((void*)0));
 int VAR_5;
 u16 VAR_6 = 0;

 VAR_4 = VAR_2->my_i2c_dev_addr;
 VAR_3 = (struct drxj_data *) VAR_2->my_ext_attr;

 VAR_5 = FUNC_0(VAR_4, VAR_1, &VAR_6, 0);
 if (VAR_5 != 0) {
  FUNC_2("error %d\n", VAR_5);
  goto rw_error;
 }


 VAR_6 &= (~VAR_0);

 if (VAR_3->bit_reverse_mpeg_outout)
  VAR_6 |= VAR_0;

 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_6, 0);
 if (VAR_5 != 0) {
  FUNC_2("error %d\n", VAR_5);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_5;
}
