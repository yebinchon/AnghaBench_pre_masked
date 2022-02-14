
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct or51211_state {TYPE_1__* config; } ;
struct firmware {int* data; int size; } ;
struct dvb_frontend {struct or51211_state* demodulator_priv; } ;
struct TYPE_2__ {int demod_address; int (* reset ) (struct dvb_frontend*) ;} ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct or51211_state*,int,int*,int) ;
 scalar_t__ FUNC_2 (struct or51211_state*,int,int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int* VAR_0 ;
 int FUNC_6 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_7 (struct dvb_frontend* VAR_1,
      const struct firmware *VAR_2)
{
 struct or51211_state* VAR_3 = VAR_1->demodulator_priv;
 u8 VAR_4[585];
 int VAR_5;

 FUNC_0("Firmware is %zu bytes\n", VAR_2->size);


 VAR_4[0] = 17;
 if (FUNC_2(VAR_3,0x50,VAR_4,1)) {
  FUNC_5("error eprom addr\n");
  return -1;
 }
 if (FUNC_1(VAR_3,0x50,&VAR_4[145],192)) {
  FUNC_5("error eprom\n");
  return -1;
 }


 for (VAR_5 = 0; VAR_5 < 145; VAR_5++)
  VAR_4[VAR_5] = VAR_2->data[VAR_5];

 for (VAR_5 = 0; VAR_5 < 248; VAR_5++)
  VAR_4[VAR_5+337] = VAR_2->data[145+VAR_5];

 VAR_3->config->reset(VAR_1);

 if (FUNC_2(VAR_3,VAR_3->config->demod_address,VAR_4,585)) {
  FUNC_5("error 1\n");
  return -1;
 }
 FUNC_3(1);

 if (FUNC_2(VAR_3,VAR_3->config->demod_address,
      &VAR_2->data[393],8125)) {
  FUNC_5("error 2\n");
  return -1;
 }
 FUNC_3(1);

 if (FUNC_2(VAR_3,VAR_3->config->demod_address,VAR_0,2)) {
  FUNC_5("error 3\n");
  return -1;
 }


 FUNC_3(10);
 if (FUNC_2(VAR_3,VAR_3->config->demod_address,VAR_0,2)) {
  FUNC_5("error 4\n");
  return -1;
 }
 FUNC_3(10);

 FUNC_4("Done.\n");
 return 0;
}
