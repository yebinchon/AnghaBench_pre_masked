
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
typedef int reg ;
struct TYPE_9__ {int addr; int* buf; scalar_t__ len; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dib9000_state*,int,int,int const*,scalar_t__) ;
 int FUNC_1 (int ,TYPE_4__*,int) ;
 int FUNC_2 (int*,int const*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dib9000_state *VAR_5, u16 VAR_6, const u8 *VAR_7, u32 VAR_8, u16 VAR_9)
{
 u32 VAR_10 = 126;
 u32 VAR_11;
 int VAR_12;

 if (VAR_5->platform.risc.fw_is_running && (VAR_6 < 1024)) {
  if (FUNC_0
      (VAR_5, VAR_6, VAR_0 | VAR_2 | VAR_9, VAR_7, VAR_8) != 0)
   return -VAR_3;
  return 0;
 }

 FUNC_3(&VAR_5->msg[0], 0, sizeof(struct i2c_msg));
 VAR_5->msg[0].addr = VAR_5->i2c.i2c_addr >> 1;
 VAR_5->msg[0].flags = 0;
 VAR_5->msg[0].buf = VAR_5->i2c_write_buffer;
 VAR_5->msg[0].len = VAR_8 + 2;

 VAR_5->i2c_write_buffer[0] = (VAR_6 >> 8) & 0xff;
 VAR_5->i2c_write_buffer[1] = (VAR_6) & 0xff;

 if (VAR_9 & VAR_1)
  VAR_5->i2c_write_buffer[0] |= (1 << 5);
 if (VAR_9 & VAR_2)
  VAR_5->i2c_write_buffer[0] |= (1 << 4);

 do {
  VAR_11 = VAR_8 < VAR_10 ? VAR_8 : VAR_10;
  VAR_5->msg[0].len = VAR_11 + 2;
  FUNC_2(&VAR_5->i2c_write_buffer[2], VAR_7, VAR_11);

  VAR_12 = FUNC_1(VAR_5->i2c.i2c_adap, VAR_5->msg, 1) != 1 ? -VAR_4 : 0;

  VAR_7 += VAR_11;
  VAR_8 -= VAR_11;

  if (!(VAR_9 & VAR_2))
   VAR_6 += VAR_11 / 2;
 } while ((VAR_12 == 0) && VAR_8);

 return VAR_12;
}
