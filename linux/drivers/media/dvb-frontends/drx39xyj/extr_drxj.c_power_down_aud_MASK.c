
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_addr {int dummy; } ;
struct TYPE_2__ {int audio_is_active; } ;
struct drxj_data {TYPE_1__ aud_data; } ;
struct drx_demod_instance {scalar_t__ my_ext_attr; scalar_t__ my_i2c_dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct drx_demod_instance *VAR_2)
{
 struct i2c_device_addr *VAR_3 = ((void*)0);
 struct drxj_data *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_3 = (struct i2c_device_addr *)VAR_2->my_i2c_dev_addr;
 VAR_4 = (struct drxj_data *) VAR_2->my_ext_attr;

 VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_0, 0);
 if (VAR_5 != 0) {
  FUNC_1("error %d\n", VAR_5);
  goto rw_error;
 }

 VAR_4->aud_data.audio_is_active = 0;

 return 0;
rw_error:
 return VAR_5;
}
