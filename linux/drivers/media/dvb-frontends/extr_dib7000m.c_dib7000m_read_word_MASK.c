
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct i2c_msg {int dummy; } ;
struct dib7000m_state {int* i2c_write_buffer; int i2c_addr; int* i2c_read_buffer; int i2c_buffer_lock; TYPE_1__* msg; int i2c_adap; } ;
struct TYPE_3__ {int addr; int* buf; int len; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u16 FUNC_5(struct dib7000m_state *VAR_1, u16 VAR_2)
{
 u16 VAR_3;

 if (FUNC_3(&VAR_1->i2c_buffer_lock) < 0) {
  FUNC_0("could not acquire lock\n");
  return 0;
 }

 VAR_1->i2c_write_buffer[0] = (VAR_2 >> 8) | 0x80;
 VAR_1->i2c_write_buffer[1] = VAR_2 & 0xff;

 FUNC_2(VAR_1->msg, 0, 2 * sizeof(struct i2c_msg));
 VAR_1->msg[0].addr = VAR_1->i2c_addr >> 1;
 VAR_1->msg[0].flags = 0;
 VAR_1->msg[0].buf = VAR_1->i2c_write_buffer;
 VAR_1->msg[0].len = 2;
 VAR_1->msg[1].addr = VAR_1->i2c_addr >> 1;
 VAR_1->msg[1].flags = VAR_0;
 VAR_1->msg[1].buf = VAR_1->i2c_read_buffer;
 VAR_1->msg[1].len = 2;

 if (FUNC_1(VAR_1->i2c_adap, VAR_1->msg, 2) != 2)
  FUNC_0("i2c read error on %d\n", VAR_2);

 VAR_3 = (VAR_1->i2c_read_buffer[0] << 8) | VAR_1->i2c_read_buffer[1];
 FUNC_4(&VAR_1->i2c_buffer_lock);

 return VAR_3;
}
