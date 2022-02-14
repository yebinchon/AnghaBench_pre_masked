
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct dvb_frontend *VAR_0)
{
 struct dib7000p_state *VAR_1 = VAR_0->demodulator_priv;
 u16 VAR_2;
 s32 VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7 = 0;

 VAR_2 = FUNC_0(VAR_1, 479);
 VAR_5 = (VAR_2 >> 4) & 0xff;
 VAR_6 = ((VAR_2 & 0xf) << 2);
 VAR_2 = FUNC_0(VAR_1, 480);
 VAR_6 += ((VAR_2 >> 14) & 0x3);
 if ((VAR_6 & 0x20) != 0)
  VAR_6 -= 0x40;

 VAR_3 = (VAR_2 >> 6) & 0xFF;
 VAR_4 = (VAR_2 & 0x3F);
 if ((VAR_4 & 0x20) != 0)
  VAR_4 -= 0x40;

 if (VAR_3 != 0)
  VAR_7 = FUNC_1(2) * 10 * VAR_4 + 10 * FUNC_1(VAR_3);
 else
  VAR_7 = FUNC_1(2) * 10 * VAR_4 - 100;

 if (VAR_5 != 0)
  VAR_7 -= FUNC_1(2) * 10 * VAR_6 + 10 * FUNC_1(VAR_5);
 else
  VAR_7 -= FUNC_1(2) * 10 * VAR_6 - 100;

 return VAR_7;
}
