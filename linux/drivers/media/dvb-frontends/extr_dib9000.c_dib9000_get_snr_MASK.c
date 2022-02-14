
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct TYPE_3__ {int mem_mbx_lock; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; scalar_t__ i2c_read_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dib9000_state*,int ) ;
 int FUNC_1 (struct dib9000_state*,int ,int *,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u32 FUNC_5(struct dvb_frontend *VAR_2)
{
 struct dib9000_state *VAR_3 = VAR_2->demodulator_priv;
 u16 *VAR_4 = (u16 *)VAR_3->i2c_read_buffer;
 u32 VAR_5, VAR_6, VAR_7;
 u16 VAR_8;

 if (FUNC_3(&VAR_3->platform.risc.mem_mbx_lock) < 0) {
  FUNC_2("could not get the lock\n");
  return 0;
 }
 if (FUNC_0(VAR_3, VAR_1) < 0) {
  FUNC_4(&VAR_3->platform.risc.mem_mbx_lock);
  return 0;
 }
 FUNC_1(VAR_3, VAR_0, (u8 *) VAR_4, 16 * 2);
 FUNC_4(&VAR_3->platform.risc.mem_mbx_lock);

 VAR_8 = VAR_4[7];
 VAR_5 = (VAR_8 >> 4) & 0xff;
 VAR_7 = ((VAR_8 & 0xf) << 2);
 VAR_8 = VAR_4[8];
 VAR_7 += ((VAR_8 >> 14) & 0x3);
 if ((VAR_7 & 0x20) != 0)
  VAR_7 -= 0x40;
 VAR_5 <<= VAR_7 + 16;

 VAR_6 = (VAR_8 >> 6) & 0xFF;
 VAR_7 = (VAR_8 & 0x3F);
 if ((VAR_7 & 0x20) != 0)
  VAR_7 -= 0x40;
 VAR_6 <<= VAR_7 + 16;

 if (VAR_5 > 0) {
  u32 VAR_9 = (VAR_6 / VAR_5) << 16;
  return VAR_9 + ((VAR_6 << 16) - VAR_5 * VAR_9) / VAR_5;
 }
 return 0xffffffff;
}
