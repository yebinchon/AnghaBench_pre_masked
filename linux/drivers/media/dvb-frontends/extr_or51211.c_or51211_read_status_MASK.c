
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct or51211_state {TYPE_1__* config; } ;
struct dvb_frontend {struct or51211_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_1 (struct or51211_state*,int ,unsigned char*,int) ;
 scalar_t__ FUNC_2 (struct or51211_state*,int ,unsigned char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_5, enum fe_status *VAR_6)
{
 struct or51211_state* VAR_7 = VAR_5->demodulator_priv;
 unsigned char VAR_8[2];
 unsigned char VAR_9[] = {0x04,0x00,0x03,0x00};
 *VAR_6 = 0;


 if (FUNC_2(VAR_7,VAR_7->config->demod_address,VAR_9,3)) {
  FUNC_4("write error\n");
  return -1;
 }
 FUNC_3(3);
 if (FUNC_1(VAR_7,VAR_7->config->demod_address,VAR_8,2)) {
  FUNC_4("read error\n");
  return -1;
 }
 FUNC_0("%x %x\n", VAR_8[0], VAR_8[1]);

 if (VAR_8[0] & 0x01) {
  *VAR_6 |= VAR_2;
  *VAR_6 |= VAR_0;
  *VAR_6 |= VAR_4;
  *VAR_6 |= VAR_3;
  *VAR_6 |= VAR_1;
 }
 return 0;
}
