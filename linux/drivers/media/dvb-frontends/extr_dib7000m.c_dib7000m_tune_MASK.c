
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dtv_frontend_properties {int transmission_mode; int bandwidth_hz; } ;
struct dvb_frontend {struct dib7000m_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct dib7000m_state {scalar_t__ timf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int FUNC_1 (struct dib7000m_state*,int) ;
 int FUNC_2 (struct dib7000m_state*,int ) ;
 int FUNC_3 (struct dib7000m_state*,struct dtv_frontend_properties*,int ) ;
 int FUNC_4 (struct dib7000m_state*,int ) ;
 int FUNC_5 (struct dib7000m_state*) ;
 int FUNC_6 (struct dib7000m_state*,int,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct dib7000m_state *VAR_3 = VAR_1->demodulator_priv;
 int VAR_4 = 0;
 u16 VAR_5;


 FUNC_3(VAR_3, VAR_2, 0);


 VAR_4 |= FUNC_6(VAR_3, 898, 0x4000);
 VAR_4 |= FUNC_6(VAR_3, 898, 0x0000);
 FUNC_7(45);

 FUNC_4(VAR_3, VAR_0);

 VAR_4 |= FUNC_6(VAR_3, 29, (0 << 14) | (4 << 10) | (0 << 9) | (3 << 5) | (1 << 4) | (0x3));


 if (VAR_3->timf == 0)
  FUNC_7(200);



 VAR_5 = (6 << 8) | 0x80;
 switch (VAR_2->transmission_mode) {
  case 130: VAR_5 |= (7 << 12); break;
  case 129: VAR_5 |= (8 << 12); break;
  default:
  case 128: VAR_5 |= (9 << 12); break;
 }
 VAR_4 |= FUNC_6(VAR_3, 26, VAR_5);


 VAR_5 = (0 << 4);
 switch (VAR_2->transmission_mode) {
  case 130: VAR_5 |= 0x6; break;
  case 129: VAR_5 |= 0x7; break;
  default:
  case 128: VAR_5 |= 0x8; break;
 }
 VAR_4 |= FUNC_6(VAR_3, 32, VAR_5);


 VAR_5 = (0 << 4);
 switch (VAR_2->transmission_mode) {
  case 130: VAR_5 |= 0x6; break;
  case 129: VAR_5 |= 0x7; break;
  default:
  case 128: VAR_5 |= 0x8; break;
 }
 VAR_4 |= FUNC_6(VAR_3, 33, VAR_5);


 if ((FUNC_1(VAR_3, 535) >> 6) & 0x1)
  FUNC_5(VAR_3);

 FUNC_2(VAR_3, FUNC_0(VAR_2->bandwidth_hz));
 return VAR_4;
}
