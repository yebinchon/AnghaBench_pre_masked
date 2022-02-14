
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct i2c_device_addr {int user_data; int i2c_dev_id; int i2c_addr; } ;
struct drx_demod_instance {struct i2c_device_addr* my_i2c_dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct i2c_device_addr*,int,scalar_t__*,struct i2c_device_addr*,int,scalar_t__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct drx_demod_instance *VAR_3)
{
 struct i2c_device_addr *VAR_4 = (struct i2c_device_addr *)(((void*)0));
 u8 VAR_5 = 0;
 u16 VAR_6 = 0;
 struct i2c_device_addr VAR_7;

 VAR_4 = VAR_3->my_i2c_dev_addr;
 VAR_7.i2c_addr = VAR_1;
 VAR_7.i2c_dev_id = VAR_4->i2c_dev_id;
 VAR_7.user_data = VAR_4->user_data;





 do {
  VAR_5 = 0;
  FUNC_0(&VAR_7, 1, &VAR_5,
          (struct i2c_device_addr *)(((void*)0)), 0,
         (u8 *)(((void*)0)));
  FUNC_1(10);
  VAR_6++;
 } while ((FUNC_0
    ((struct i2c_device_addr *) (((void*)0)), 0, (u8 *)(((void*)0)), VAR_4, 1,
     &VAR_5)
    != 0) && (VAR_6 < VAR_0));


 FUNC_1(10);

 if (VAR_6 == VAR_0)
  return -VAR_2;

 return 0;
}
