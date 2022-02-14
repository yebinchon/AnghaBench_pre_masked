
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct or51211_state {TYPE_1__* config; } ;
struct dvb_frontend {struct or51211_state* demodulator_priv; } ;
struct TYPE_2__ {int demod_address; int (* setmode ) (struct dvb_frontend*,int) ;} ;


 int* VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (struct or51211_state*,int ,int*,int) ;
 scalar_t__ FUNC_2 (struct or51211_state*,int ,int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int* VAR_1 ;
 int FUNC_5 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend* VAR_2, int VAR_3)
{
 struct or51211_state* VAR_4 = VAR_2->demodulator_priv;
 u8 VAR_5[14];

 VAR_4->config->setmode(VAR_2, VAR_3);

 if (FUNC_2(VAR_4,VAR_4->config->demod_address,VAR_1,2)) {
  FUNC_4("error 1\n");
  return -1;
 }


 FUNC_3(10);
 if (FUNC_2(VAR_4,VAR_4->config->demod_address,VAR_1,2)) {
  FUNC_4("error 2\n");
  return -1;
 }

 FUNC_3(10);
 if (FUNC_2(VAR_4,VAR_4->config->demod_address,VAR_0,3)) {
  FUNC_4("error 3\n");
  return -1;
 }

 VAR_5[0] = 0x04;
 VAR_5[1] = 0x00;
 VAR_5[2] = 0x03;
 VAR_5[3] = 0x00;
 FUNC_3(20);
 if (FUNC_2(VAR_4,VAR_4->config->demod_address,VAR_5,3)) {
  FUNC_4("error 5\n");
 }
 FUNC_3(3);
 if (FUNC_1(VAR_4,VAR_4->config->demod_address,&VAR_5[10],2)) {
  FUNC_4("error 6\n");
  return -1;
 }
 FUNC_0("rec status %02x %02x\n", VAR_5[10], VAR_5[11]);

 return 0;
}
