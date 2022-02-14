
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int wbd_ref; } ;


 int FUNC_0 (struct dib8000_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u16 VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_0->demodulator_priv;
 if (VAR_1 > 4095)
  VAR_1 = 4095;
 VAR_2->wbd_ref = VAR_1;
 return FUNC_0(VAR_2, 106, VAR_1);
}
