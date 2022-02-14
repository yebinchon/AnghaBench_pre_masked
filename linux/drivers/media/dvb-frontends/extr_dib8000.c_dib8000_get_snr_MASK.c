
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int revision; } ;


 int FUNC_0 (struct dib8000_state*,int) ;

__attribute__((used)) static u32 FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dib8000_state *VAR_1 = VAR_0->demodulator_priv;
 u32 VAR_2, VAR_3, VAR_4;
 u16 VAR_5;

 if (VAR_1->revision != 0x8090)
  VAR_5 = FUNC_0(VAR_1, 542);
 else
  VAR_5 = FUNC_0(VAR_1, 544);
 VAR_2 = (VAR_5 >> 6) & 0xff;
 VAR_4 = (VAR_5 & 0x3f);
 if ((VAR_4 & 0x20) != 0)
  VAR_4 -= 0x40;
 VAR_2 <<= VAR_4+16;

 if (VAR_1->revision != 0x8090)
  VAR_5 = FUNC_0(VAR_1, 543);
 else
  VAR_5 = FUNC_0(VAR_1, 545);
 VAR_3 = (VAR_5 >> 6) & 0xff;
 VAR_4 = (VAR_5 & 0x3f);
 if ((VAR_4 & 0x20) != 0)
  VAR_4 -= 0x40;
 VAR_3 <<= VAR_4+16;

 if (VAR_2 > 0) {
  u32 VAR_6 = (VAR_3/VAR_2) << 16;
  return VAR_6 + ((VAR_3 << 16) - VAR_2*VAR_6) / VAR_2;
 }
 return 0xffffffff;
}
