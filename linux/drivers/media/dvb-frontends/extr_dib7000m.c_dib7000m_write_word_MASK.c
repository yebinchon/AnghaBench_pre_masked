
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct i2c_msg {int dummy; } ;
struct dib7000m_state {int* i2c_write_buffer; int i2c_addr; int i2c_buffer_lock; TYPE_1__* msg; int i2c_adap; } ;
struct TYPE_3__ {int addr; int* buf; int len; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dib7000m_state *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5;

 if (FUNC_3(&VAR_2->i2c_buffer_lock) < 0) {
  FUNC_0("could not acquire lock\n");
  return -VAR_0;
 }

 VAR_2->i2c_write_buffer[0] = (VAR_3 >> 8) & 0xff;
 VAR_2->i2c_write_buffer[1] = VAR_3 & 0xff;
 VAR_2->i2c_write_buffer[2] = (VAR_4 >> 8) & 0xff;
 VAR_2->i2c_write_buffer[3] = VAR_4 & 0xff;

 FUNC_2(&VAR_2->msg[0], 0, sizeof(struct i2c_msg));
 VAR_2->msg[0].addr = VAR_2->i2c_addr >> 1;
 VAR_2->msg[0].flags = 0;
 VAR_2->msg[0].buf = VAR_2->i2c_write_buffer;
 VAR_2->msg[0].len = 4;

 VAR_5 = (FUNC_1(VAR_2->i2c_adap, VAR_2->msg, 1) != 1 ?
   -VAR_1 : 0);
 FUNC_4(&VAR_2->i2c_buffer_lock);
 return VAR_5;
}
