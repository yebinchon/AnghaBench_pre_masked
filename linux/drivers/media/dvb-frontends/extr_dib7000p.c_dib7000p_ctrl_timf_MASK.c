
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {int timf; int current_bandwidth; } ;





 int FUNC_0 (struct dib7000p_state*,int ) ;
 int FUNC_1 (struct dib7000p_state*) ;

__attribute__((used)) static u32 FUNC_2(struct dvb_frontend *VAR_0, u8 VAR_1, u32 VAR_2)
{
 struct dib7000p_state *VAR_3 = VAR_0->demodulator_priv;
 switch (VAR_1) {
 case 129:
  VAR_3->timf = VAR_2;
  break;
 case 128:
  FUNC_1(VAR_3);
  break;
 case 130:
  break;
 }
 FUNC_0(VAR_3, VAR_3->current_bandwidth);
 return VAR_3->timf;
}
