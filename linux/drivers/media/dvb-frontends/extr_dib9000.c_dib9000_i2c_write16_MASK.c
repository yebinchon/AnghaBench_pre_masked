
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_device {int i2c_addr; int* i2c_write_buffer; int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_device *VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct i2c_msg VAR_4 = {
  .addr = VAR_1->i2c_addr >> 1, .flags = 0,
  .buf = VAR_1->i2c_write_buffer, .len = 4
 };

 VAR_1->i2c_write_buffer[0] = (VAR_2 >> 8) & 0xff;
 VAR_1->i2c_write_buffer[1] = VAR_2 & 0xff;
 VAR_1->i2c_write_buffer[2] = (VAR_3 >> 8) & 0xff;
 VAR_1->i2c_write_buffer[3] = VAR_3 & 0xff;

 return FUNC_0(VAR_1->i2c_adap, &VAR_4, 1) != 1 ? -VAR_0 : 0;
}
