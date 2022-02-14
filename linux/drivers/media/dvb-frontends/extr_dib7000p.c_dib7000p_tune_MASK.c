
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dtv_frontend_properties {int transmission_mode; int frequency; int bandwidth_hz; } ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_2__ {scalar_t__ spur_protect; } ;
struct dib7000p_state {scalar_t__ timf; TYPE_1__ cfg; scalar_t__ sfn_workaround_active; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int FUNC_1 (struct dib7000p_state*,int) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dib7000p_state*,int ) ;
 int FUNC_4 (struct dib7000p_state*,struct dtv_frontend_properties*,int ) ;
 int FUNC_5 (struct dib7000p_state*,int,int ) ;
 int FUNC_6 (struct dib7000p_state*) ;
 int FUNC_7 (struct dib7000p_state*,int,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct dib7000p_state *VAR_3 = VAR_1->demodulator_priv;
 u16 VAR_4 = 0;

 if (VAR_2 != ((void*)0))
  FUNC_4(VAR_3, VAR_2, 0);
 else
  return -VAR_0;


 FUNC_7(VAR_3, 770, 0x4000);
 FUNC_7(VAR_3, 770, 0x0000);
 FUNC_9(45);


 VAR_4 = (0 << 14) | (4 << 10) | (0 << 9) | (3 << 5) | (1 << 4) | (0x3);
 if (VAR_3->sfn_workaround_active) {
  FUNC_8("SFN workaround is active\n");
  VAR_4 |= (1 << 9);
  FUNC_7(VAR_3, 166, 0x4000);
 } else {
  FUNC_7(VAR_3, 166, 0x0000);
 }
 FUNC_7(VAR_3, 29, VAR_4);


 if (VAR_3->timf == 0)
  FUNC_9(200);




 VAR_4 = (6 << 8) | 0x80;
 switch (VAR_2->transmission_mode) {
 case 130:
  VAR_4 |= (2 << 12);
  break;
 case 129:
  VAR_4 |= (3 << 12);
  break;
 default:
 case 128:
  VAR_4 |= (4 << 12);
  break;
 }
 FUNC_7(VAR_3, 26, VAR_4);


 VAR_4 = (0 << 4);
 switch (VAR_2->transmission_mode) {
 case 130:
  VAR_4 |= 0x6;
  break;
 case 129:
  VAR_4 |= 0x7;
  break;
 default:
 case 128:
  VAR_4 |= 0x8;
  break;
 }
 FUNC_7(VAR_3, 32, VAR_4);


 VAR_4 = (0 << 4);
 switch (VAR_2->transmission_mode) {
 case 130:
  VAR_4 |= 0x6;
  break;
 case 129:
  VAR_4 |= 0x7;
  break;
 default:
 case 128:
  VAR_4 |= 0x8;
  break;
 }
 FUNC_7(VAR_3, 33, VAR_4);

 VAR_4 = FUNC_1(VAR_3, 509);
 if (!((VAR_4 >> 6) & 0x1)) {

  VAR_4 = FUNC_1(VAR_3, 771);
  FUNC_7(VAR_3, 771, VAR_4 | (1 << 1));
  FUNC_7(VAR_3, 771, VAR_4);
  FUNC_9(40);
  VAR_4 = FUNC_1(VAR_3, 509);
 }

 if ((VAR_4 >> 6) & 0x1) {
  FUNC_6(VAR_3);

  VAR_4 = FUNC_1(VAR_3, 26);
  FUNC_7(VAR_3, 26, (VAR_4 & ~(0xf << 12)) | ((((VAR_4 >> 12) & 0xf) + 5) << 12));
 }

 if (VAR_3->cfg.spur_protect)
  FUNC_5(VAR_3, VAR_2->frequency / 1000, FUNC_0(VAR_2->bandwidth_hz));

 FUNC_3(VAR_3, FUNC_0(VAR_2->bandwidth_hz));

 FUNC_2(VAR_1);

 return 0;
}
