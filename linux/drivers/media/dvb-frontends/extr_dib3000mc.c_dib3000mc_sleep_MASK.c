
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib3000mc_state* demodulator_priv; } ;
struct dib3000mc_state {int dummy; } ;


 int FUNC_0 (struct dib3000mc_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dib3000mc_state *VAR_1 = VAR_0->demodulator_priv;

 FUNC_0(VAR_1, 1031, 0xFFFF);
 FUNC_0(VAR_1, 1032, 0xFFFF);
 FUNC_0(VAR_1, 1033, 0xFFF0);

 return 0;
}
