
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int dummy; } ;
struct dib0070_state {int* i2c_write_buffer; int i2c_buffer_lock; TYPE_2__* msg; int i2c; TYPE_1__* cfg; } ;
struct TYPE_5__ {int* buf; int len; scalar_t__ flags; int addr; } ;
struct TYPE_4__ {int i2c_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct dib0070_state *VAR_2, u8 VAR_3, u16 VAR_4)
{
 int VAR_5;

 if (FUNC_3(&VAR_2->i2c_buffer_lock) < 0) {
  FUNC_0("could not acquire lock\n");
  return -VAR_0;
 }
 VAR_2->i2c_write_buffer[0] = VAR_3;
 VAR_2->i2c_write_buffer[1] = VAR_4 >> 8;
 VAR_2->i2c_write_buffer[2] = VAR_4 & 0xff;

 FUNC_2(VAR_2->msg, 0, sizeof(struct i2c_msg));
 VAR_2->msg[0].addr = VAR_2->cfg->i2c_address;
 VAR_2->msg[0].flags = 0;
 VAR_2->msg[0].buf = VAR_2->i2c_write_buffer;
 VAR_2->msg[0].len = 3;

 if (FUNC_1(VAR_2->i2c, VAR_2->msg, 1) != 1) {
  FUNC_5("DiB0070 I2C write failed\n");
  VAR_5 = -VAR_1;
 } else
  VAR_5 = 0;

 FUNC_4(&VAR_2->i2c_buffer_lock);
 return VAR_5;
}
