
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct lgdt3305_state {int current_modulation; int snr; } ;
struct dvb_frontend {struct lgdt3305_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (struct lgdt3305_state*,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_9, u16 *VAR_10)
{
 struct lgdt3305_state *VAR_11 = VAR_9->demodulator_priv;
 u32 VAR_12;
 u32 VAR_13;

 switch (VAR_11->current_modulation) {
 case 128:
  VAR_12 = ((FUNC_2(VAR_11, VAR_3) & 0x0f) << 16) |
   (FUNC_2(VAR_11, VAR_4) << 8) |
   (FUNC_2(VAR_11, VAR_5) & 0xff);
  VAR_13 = 73957994;

  break;
 case 129:
 case 130:
  VAR_12 = (FUNC_2(VAR_11, VAR_1) << 8) |
   (FUNC_2(VAR_11, VAR_2) & 0xff);

  VAR_13 = (VAR_11->current_modulation == 129) ?
   97939837 : 98026066;

  break;
 default:
  return -VAR_0;
 }
 VAR_11->snr = FUNC_0(VAR_12, VAR_13);

 *VAR_10 = (VAR_11->snr / ((1 << 24) / 10));
 FUNC_1("noise = 0x%08x, snr = %d.%02d dB\n", VAR_12,
        VAR_11->snr >> 24, (((VAR_11->snr >> 8) & 0xffff) * 100) >> 16);

 return 0;
}
