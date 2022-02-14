
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct m88rs2000_state {int dummy; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct m88rs2000_state*,int) ;
 int FUNC_2 (struct m88rs2000_state*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, s16 VAR_2)
{
 struct m88rs2000_state *VAR_3 = VAR_1->demodulator_priv;
 u32 VAR_4;
 s32 VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = (VAR_2 * 4096 + (s32)VAR_4 / 2) / (s32)VAR_4;
 if (VAR_5 < 0)
  VAR_5 += 4096;


 VAR_7 = FUNC_2(VAR_3, 0x9c, (u8)(VAR_5 >> 4));

 VAR_6 = FUNC_1(VAR_3, 0x9d);
 VAR_6 &= 0xf;
 VAR_6 |= (u8)(VAR_5 & 0xf) << 4;

 VAR_7 |= FUNC_2(VAR_3, 0x9d, VAR_6);

 return VAR_7;
}
