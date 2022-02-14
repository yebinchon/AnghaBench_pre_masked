
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dib7000p_state*,int ) ;
 int FUNC_1 (struct dib7000p_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3)
{
 struct dib7000p_state *VAR_4 = VAR_3->demodulator_priv;
 if (VAR_4->version == VAR_2)
  return FUNC_1(VAR_4, VAR_0);
 return FUNC_0(VAR_4, VAR_1) | FUNC_1(VAR_4, VAR_0);
}
