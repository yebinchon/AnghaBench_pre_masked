
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct or51211_state {int snr; TYPE_1__* config; } ;
struct dvb_frontend {struct or51211_state* demodulator_priv; } ;
struct TYPE_2__ {int demod_address; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int,int) ;
 scalar_t__ FUNC_2 (struct or51211_state*,int ,int*,int) ;
 scalar_t__ FUNC_3 (struct or51211_state*,int ,int*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend* VAR_0, u16* VAR_1)
{
 struct or51211_state* VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3[2];
 u8 VAR_4[3];


 VAR_4[0] = 0x04;
 VAR_4[1] = 0x00;
 VAR_4[2] = 0x04;

 if (FUNC_3(VAR_2,VAR_2->config->demod_address,VAR_4,3)) {
  FUNC_4("error writing snr reg\n");
  return -1;
 }
 if (FUNC_2(VAR_2,VAR_2->config->demod_address,VAR_3,2)) {
  FUNC_4("read_status read error\n");
  return -1;
 }

 VAR_2->snr = FUNC_0(VAR_3[0], 89599047);
 *VAR_1 = (VAR_2->snr) >> 16;

 FUNC_1("noise = 0x%02x, snr = %d.%02d dB\n", VAR_3[0],
  VAR_2->snr >> 24, (((VAR_2->snr>>8) & 0xffff) * 100) >> 16);

 return 0;
}
