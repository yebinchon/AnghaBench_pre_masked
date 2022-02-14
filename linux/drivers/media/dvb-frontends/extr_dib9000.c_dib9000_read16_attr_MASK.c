
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct i2c_msg {int dummy; } ;
struct TYPE_8__ {int i2c_addr; int i2c_adap; } ;
struct TYPE_6__ {scalar_t__ fw_is_running; } ;
struct TYPE_7__ {TYPE_1__ risc; } ;
struct dib9000_state {int* i2c_write_buffer; TYPE_4__* msg; TYPE_3__ i2c; TYPE_2__ platform; } ;
struct TYPE_9__ {int addr; int* buf; int len; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dib9000_state*,int,int,int *,int ,int*,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dib9000_state *VAR_4, u16 VAR_5, u8 *VAR_6, u32 VAR_7, u16 VAR_8)
{
 u32 VAR_9 = 126;
 u32 VAR_10;
 int VAR_11;

 if (VAR_4->platform.risc.fw_is_running && (VAR_5 < 1024))
  return FUNC_0(VAR_4, VAR_5, VAR_8, ((void*)0), 0, VAR_6, VAR_7);

 FUNC_3(VAR_4->msg, 0, 2 * sizeof(struct i2c_msg));
 VAR_4->msg[0].addr = VAR_4->i2c.i2c_addr >> 1;
 VAR_4->msg[0].flags = 0;
 VAR_4->msg[0].buf = VAR_4->i2c_write_buffer;
 VAR_4->msg[0].len = 2;
 VAR_4->msg[1].addr = VAR_4->i2c.i2c_addr >> 1;
 VAR_4->msg[1].flags = VAR_3;
 VAR_4->msg[1].buf = VAR_6;
 VAR_4->msg[1].len = VAR_7;

 VAR_4->i2c_write_buffer[0] = VAR_5 >> 8;
 VAR_4->i2c_write_buffer[1] = VAR_5 & 0xff;

 if (VAR_8 & VAR_0)
  VAR_4->i2c_write_buffer[0] |= (1 << 5);
 if (VAR_8 & VAR_1)
  VAR_4->i2c_write_buffer[0] |= (1 << 4);

 do {
  VAR_10 = VAR_7 < VAR_9 ? VAR_7 : VAR_9;
  VAR_4->msg[1].len = VAR_10;
  VAR_4->msg[1].buf = VAR_6;
  VAR_11 = FUNC_2(VAR_4->i2c.i2c_adap, VAR_4->msg, 2) != 2 ? -VAR_2 : 0;
  if (VAR_11 != 0) {
   FUNC_1("i2c read error on %d\n", VAR_5);
   return -VAR_2;
  }

  VAR_6 += VAR_10;
  VAR_7 -= VAR_10;

  if (!(VAR_8 & VAR_1))
   VAR_5 += VAR_10 / 2;
 } while ((VAR_11 == 0) && VAR_7);

 return 0;
}
