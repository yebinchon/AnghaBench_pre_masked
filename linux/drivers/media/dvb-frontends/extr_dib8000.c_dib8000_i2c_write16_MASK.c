
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct i2c_device {int addr; int* i2c_write_buffer; int i2c_buffer_lock; int adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_device *VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct i2c_msg VAR_5 = {.addr = VAR_2->addr >> 1, .flags = 0, .len = 4};
 int VAR_6 = 0;

 if (FUNC_2(VAR_2->i2c_buffer_lock) < 0) {
  FUNC_0("could not acquire lock\n");
  return -VAR_0;
 }

 VAR_5.buf = VAR_2->i2c_write_buffer;
 VAR_5.buf[0] = (VAR_3 >> 8) & 0xff;
 VAR_5.buf[1] = VAR_3 & 0xff;
 VAR_5.buf[2] = (VAR_4 >> 8) & 0xff;
 VAR_5.buf[3] = VAR_4 & 0xff;

 VAR_6 = FUNC_1(VAR_2->adap, &VAR_5, 1) != 1 ? -VAR_1 : 0;
 FUNC_3(VAR_2->i2c_buffer_lock);

 return VAR_6;
}
