
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct itd1000_state {int dummy; } ;
struct dtv_frontend_properties {int symbol_rate; int frequency; } ;
struct dvb_frontend {struct itd1000_state* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct itd1000_state*,int ) ;
 int FUNC_1 (struct itd1000_state*,int ) ;
 int FUNC_2 (struct itd1000_state*,int ) ;
 int FUNC_3 (struct itd1000_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct itd1000_state *VAR_3 = VAR_1->tuner_priv;
 u8 VAR_4;

 FUNC_1(VAR_3, VAR_2->frequency);
 FUNC_2(VAR_3, VAR_2->symbol_rate);

 VAR_4 = FUNC_0(VAR_3, VAR_0) & 0x7f;
 FUNC_3(VAR_3, VAR_0, VAR_4 | (1 << 7));
 FUNC_3(VAR_3, VAR_0, VAR_4);

 return 0;
}
