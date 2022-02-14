
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int dummy; } ;
struct dib0090_state {int* i2c_write_buffer; int* i2c_read_buffer; int i2c_buffer_lock; TYPE_2__* msg; int i2c; TYPE_1__* config; } ;
struct TYPE_5__ {int* buf; int len; scalar_t__ flags; int addr; } ;
struct TYPE_4__ {int i2c_address; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static u16 FUNC_6(struct dib0090_state *VAR_1, u8 VAR_2)
{
 u16 VAR_3;

 if (FUNC_3(&VAR_1->i2c_buffer_lock) < 0) {
  FUNC_0("could not acquire lock\n");
  return 0;
 }

 VAR_1->i2c_write_buffer[0] = VAR_2;

 FUNC_2(VAR_1->msg, 0, 2 * sizeof(struct i2c_msg));
 VAR_1->msg[0].addr = VAR_1->config->i2c_address;
 VAR_1->msg[0].flags = 0;
 VAR_1->msg[0].buf = VAR_1->i2c_write_buffer;
 VAR_1->msg[0].len = 1;
 VAR_1->msg[1].addr = VAR_1->config->i2c_address;
 VAR_1->msg[1].flags = VAR_0;
 VAR_1->msg[1].buf = VAR_1->i2c_read_buffer;
 VAR_1->msg[1].len = 2;

 if (FUNC_1(VAR_1->i2c, VAR_1->msg, 2) != 2) {
  FUNC_5("DiB0090 I2C read failed\n");
  VAR_3 = 0;
 } else
  VAR_3 = (VAR_1->i2c_read_buffer[0] << 8)
   | VAR_1->i2c_read_buffer[1];

 FUNC_4(&VAR_1->i2c_buffer_lock);
 return VAR_3;
}
