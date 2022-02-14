
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {int tuner_enable; } ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dib7000p_state *VAR_2 = VAR_0->demodulator_priv;
 u16 VAR_3;

 FUNC_2("sleep dib7090: %d\n", VAR_1);

 VAR_3 = FUNC_0(VAR_2, 1922);

 if (VAR_3 > 0xff)
  VAR_2->tuner_enable = VAR_3;

 if (VAR_1)
  VAR_3 &= 0x00ff;
 else {
  if (VAR_2->tuner_enable != 0)
   VAR_3 = VAR_2->tuner_enable;
 }

 FUNC_1(VAR_2, 1922, VAR_3);

 return 0;
}
