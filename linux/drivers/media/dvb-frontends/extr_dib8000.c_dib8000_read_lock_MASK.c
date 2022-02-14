
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int revision; } ;


 int FUNC_0 (struct dib8000_state*,int) ;

__attribute__((used)) static u16 FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dib8000_state *VAR_1 = VAR_0->demodulator_priv;

 if (VAR_1->revision == 0x8090)
  return FUNC_0(VAR_1, 570);
 return FUNC_0(VAR_1, 568);
}
