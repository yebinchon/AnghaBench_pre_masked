
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct i2c_device {int addr; int* i2c_write_buffer; int* i2c_read_buffer; int i2c_buffer_lock; int adap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u16 FUNC_4(struct i2c_device *VAR_1, u16 VAR_2)
{
 u16 VAR_3;
 struct i2c_msg VAR_4[2] = {
  {.addr = VAR_1->addr >> 1, .flags = 0, .len = 2},
  {.addr = VAR_1->addr >> 1, .flags = VAR_0, .len = 2},
 };

 if (FUNC_2(VAR_1->i2c_buffer_lock) < 0) {
  FUNC_0("could not acquire lock\n");
  return 0;
 }

 VAR_4[0].buf = VAR_1->i2c_write_buffer;
 VAR_4[0].buf[0] = VAR_2 >> 8;
 VAR_4[0].buf[1] = VAR_2 & 0xff;
 VAR_4[1].buf = VAR_1->i2c_read_buffer;

 if (FUNC_1(VAR_1->adap, VAR_4, 2) != 2)
  FUNC_0("i2c read error on %d\n", VAR_2);

 VAR_3 = (VAR_4[1].buf[0] << 8) | VAR_4[1].buf[1];
 FUNC_3(VAR_1->i2c_buffer_lock);
 return VAR_3;
}
