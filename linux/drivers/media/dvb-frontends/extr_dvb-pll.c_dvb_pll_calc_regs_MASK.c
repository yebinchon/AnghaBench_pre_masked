
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_pll_priv {int frequency; int bandwidth; int pll_i2c_address; } ;
struct dtv_frontend_properties {int bandwidth_hz; int frequency; } ;
struct dvb_frontend {struct dvb_pll_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1,
        u8 *VAR_2, int VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_1->dtv_property_cache;
 struct dvb_pll_priv *VAR_5 = VAR_1->tuner_priv;
 int VAR_6;
 u32 VAR_7 = 0;

 if (VAR_3 < 5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2 + 1, VAR_4->frequency);
 if (VAR_6 < 0)
  return VAR_6;
 else
  VAR_7 = VAR_6;

 VAR_2[0] = VAR_5->pll_i2c_address;

 VAR_5->frequency = VAR_7;
 VAR_5->bandwidth = VAR_4->bandwidth_hz;

 return 5;
}
