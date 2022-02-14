
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct or51211_state {int initialized; struct or51211_config* config; } ;
struct or51211_config {int (* request_firmware ) (struct dvb_frontend*,struct firmware const**,int ) ;int demod_address; } ;
struct firmware {int dummy; } ;
struct dvb_frontend {struct or51211_state* demodulator_priv; } ;


 int VAR_0 ;
 unsigned char* VAR_1 ;
 int FUNC_0 (char*,unsigned char*) ;
 scalar_t__ FUNC_1 (struct or51211_state*,int ,unsigned char*,int) ;
 scalar_t__ FUNC_2 (struct or51211_state*,int ,unsigned char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dvb_frontend*,struct firmware const*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct dvb_frontend*,struct firmware const**,int ) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend* VAR_2)
{
 struct or51211_state* VAR_3 = VAR_2->demodulator_priv;
 const struct or51211_config* VAR_4 = VAR_3->config;
 const struct firmware* VAR_5;
 unsigned char VAR_6[] = {0x04,0x00,0x30,0x00,0x00};
 unsigned char VAR_7[14];
 int VAR_8,VAR_9;

 if (!VAR_3->initialized) {

  FUNC_5("Waiting for firmware upload (%s)...\n",
   VAR_0);
  VAR_8 = VAR_4->request_firmware(VAR_2, &VAR_5,
            VAR_0);
  FUNC_5("Got Hotplug firmware\n");
  if (VAR_8) {
   FUNC_6("No firmware uploaded (timeout or file not found?)\n");
   return VAR_8;
  }

  VAR_8 = FUNC_4(VAR_2, VAR_5);
  FUNC_7(VAR_5);
  if (VAR_8) {
   FUNC_6("Writing firmware to device failed!\n");
   return VAR_8;
  }
  FUNC_5("Firmware upload complete.\n");
  if (FUNC_2(VAR_3,VAR_3->config->demod_address,
       VAR_1,3)) {
   FUNC_6("Load DVR Error 5\n");
   return -1;
  }



  VAR_7[0] = 0x04;
  VAR_7[1] = 0x00;
  VAR_7[2] = 0x03;
  VAR_7[3] = 0x00;
  FUNC_3(30);
  if (FUNC_2(VAR_3,VAR_3->config->demod_address,
       VAR_7,3)) {
   FUNC_6("Load DVR Error A\n");
   return -1;
  }
  FUNC_3(3);
  if (FUNC_1(VAR_3,VAR_3->config->demod_address,
      &VAR_7[10],2)) {
   FUNC_6("Load DVR Error B\n");
   return -1;
  }

  VAR_7[0] = 0x04;
  VAR_7[1] = 0x00;
  VAR_7[2] = 0x01;
  VAR_7[3] = 0x00;
  FUNC_3(20);
  if (FUNC_2(VAR_3,VAR_3->config->demod_address,
       VAR_7,3)) {
   FUNC_6("Load DVR Error C\n");
   return -1;
  }
  FUNC_3(3);
  if (FUNC_1(VAR_3,VAR_3->config->demod_address,
      &VAR_7[12],2)) {
   FUNC_6("Load DVR Error D\n");
   return -1;
  }

  for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
   VAR_7[VAR_9]=0xed;

  for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {
   FUNC_3(30);
   VAR_6[4] = VAR_9+1;
   if (FUNC_2(VAR_3,VAR_3->config->demod_address,
        VAR_6,5)) {
    FUNC_6("Load DVR Error 6 - %d\n", VAR_9);
    return -1;
   }
   FUNC_3(3);

   if (FUNC_1(VAR_3,VAR_3->config->demod_address,
       &VAR_7[VAR_9*2],2)) {
    FUNC_6("Load DVR Error 7 - %d\n", VAR_9);
    return -1;
   }

   if ((int)VAR_7[VAR_9*2+1]!=VAR_9+1){
     VAR_9--;
   }
  }
  FUNC_0("read_fwbits %10ph\n", VAR_7);

  FUNC_5("ver TU%02x%02x%02x VSB mode %02x Status %02x\n",
   VAR_7[2], VAR_7[4], VAR_7[6], VAR_7[12],
   VAR_7[10]);

  VAR_7[0] = 0x04;
  VAR_7[1] = 0x00;
  VAR_7[2] = 0x03;
  VAR_7[3] = 0x00;
  FUNC_3(20);
  if (FUNC_2(VAR_3,VAR_3->config->demod_address,
       VAR_7,3)) {
   FUNC_6("Load DVR Error 8\n");
   return -1;
  }
  FUNC_3(20);
  if (FUNC_1(VAR_3,VAR_3->config->demod_address,
      &VAR_7[8],2)) {
   FUNC_6("Load DVR Error 9\n");
   return -1;
  }
  VAR_3->initialized = 1;
 }

 return 0;
}
