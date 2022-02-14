
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct i2c_msg {int dummy; } ;
struct TYPE_3__ {int* buf; int len; int flags; void* addr; } ;
struct dib0090_fw_state {int* i2c_read_buffer; int i2c_buffer_lock; TYPE_1__ msg; int i2c; void** i2c_write_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static u16 FUNC_6(struct dib0090_fw_state *VAR_1, u8 VAR_2)
{
 u16 VAR_3;

 if (FUNC_3(&VAR_1->i2c_buffer_lock) < 0) {
  FUNC_0("could not acquire lock\n");
  return 0;
 }

 VAR_1->i2c_write_buffer[0] = VAR_2;

 FUNC_2(&VAR_1->msg, 0, sizeof(struct i2c_msg));
 VAR_1->msg.addr = VAR_2;
 VAR_1->msg.flags = VAR_0;
 VAR_1->msg.buf = VAR_1->i2c_read_buffer;
 VAR_1->msg.len = 2;
 if (FUNC_1(VAR_1->i2c, &VAR_1->msg, 1) != 1) {
  FUNC_5("DiB0090 I2C read failed\n");
  VAR_3 = 0;
 } else
  VAR_3 = (VAR_1->i2c_read_buffer[0] << 8)
   | VAR_1->i2c_read_buffer[1];

 FUNC_4(&VAR_1->i2c_buffer_lock);
 return VAR_3;
}
