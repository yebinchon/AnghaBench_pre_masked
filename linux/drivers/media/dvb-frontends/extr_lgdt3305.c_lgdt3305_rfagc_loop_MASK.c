
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lgdt3305_state {TYPE_1__* cfg; } ;
struct dtv_frontend_properties {int modulation; } ;
struct TYPE_2__ {scalar_t__ rf_agc_loop; int demod_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct lgdt3305_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lgdt3305_state *VAR_8,
          struct dtv_frontend_properties *VAR_9)
{
 u16 VAR_10, VAR_11, VAR_12;

 switch (VAR_9->modulation) {
 case 128:
  VAR_12 = 0x04c0;
  VAR_11 = 0x8000;
  VAR_10 = 0x8000;
  break;
 case 129:
 case 130:
  VAR_12 = 0x046b;
  VAR_11 = 0x8889;


  if (VAR_8->cfg->demod_chip == VAR_1)
   VAR_10 = 0x6666;
  else
   VAR_10 = 0x8888;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8->cfg->rf_agc_loop) {
  FUNC_0("agcdelay: 0x%04x, rfbw: 0x%04x\n", VAR_12, VAR_11);


  FUNC_1(VAR_8, VAR_2,
       VAR_12 >> 8);
  FUNC_1(VAR_8, VAR_3,
       VAR_12 & 0xff);

  FUNC_1(VAR_8, VAR_6,
       VAR_11 >> 8);
  FUNC_1(VAR_8, VAR_7,
       VAR_11 & 0xff);
 } else {
  FUNC_0("ifbw: 0x%04x\n", VAR_10);


  FUNC_1(VAR_8, VAR_4, VAR_10 >> 8);
  FUNC_1(VAR_8, VAR_5, VAR_10 & 0xff);
 }

 return 0;
}
