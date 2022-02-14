
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct si2165_state {int has_dvbc; } ;
struct dtv_frontend_properties {scalar_t__ symbol_rate; int modulation; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct si2165_state* demodulator_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct si2165_state*,int) ;
 int FUNC_2 (struct si2165_state*,scalar_t__ const) ;
 int FUNC_3 (struct si2165_state*,int ,int ) ;
 int FUNC_4 (struct si2165_state*,int ,int) ;
 int FUNC_5 (struct si2165_state*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_4)
{
 struct si2165_state *VAR_5 = VAR_4->demodulator_priv;
 int VAR_6;
 struct dtv_frontend_properties *VAR_7 = &VAR_4->dtv_property_cache;
 const u32 VAR_8 = VAR_7->symbol_rate;
 u8 VAR_9;

 if (!VAR_5->has_dvbc)
  return -VAR_0;

 if (VAR_8 == 0)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5, 14);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_2(VAR_5, VAR_8);
 if (VAR_6 < 0)
  return VAR_6;

 switch (VAR_7->modulation) {
 case 128:
  VAR_9 = 0x3;
  break;
 case 132:
  VAR_9 = 0x7;
  break;
 case 130:
  VAR_9 = 0x8;
  break;
 case 129:
  VAR_9 = 0x9;
  break;
 case 133:
  VAR_9 = 0xa;
  break;
 case 131:
 default:
  VAR_9 = 0xb;
  break;
 }
 VAR_6 = FUNC_5(VAR_5, VAR_2, VAR_9);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_5, VAR_1, 0x007a1200);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_3, FUNC_0(VAR_3));
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
