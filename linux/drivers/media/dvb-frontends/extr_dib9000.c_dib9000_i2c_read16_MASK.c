
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_device {int i2c_addr; int* i2c_write_buffer; int* i2c_read_buffer; int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static u16 FUNC_2(struct i2c_device *VAR_1, u16 VAR_2)
{
 struct i2c_msg VAR_3[2] = {
  {.addr = VAR_1->i2c_addr >> 1, .flags = 0,
   .buf = VAR_1->i2c_write_buffer, .len = 2},
  {.addr = VAR_1->i2c_addr >> 1, .flags = VAR_0,
   .buf = VAR_1->i2c_read_buffer, .len = 2},
 };

 VAR_1->i2c_write_buffer[0] = VAR_2 >> 8;
 VAR_1->i2c_write_buffer[1] = VAR_2 & 0xff;

 if (FUNC_1(VAR_1->i2c_adap, VAR_3, 2) != 2) {
  FUNC_0("read register %x error\n", VAR_2);
  return 0;
 }

 return (VAR_1->i2c_read_buffer[0] << 8) | VAR_1->i2c_read_buffer[1];
}
