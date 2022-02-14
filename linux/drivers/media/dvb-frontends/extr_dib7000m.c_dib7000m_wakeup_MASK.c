
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib7000m_state* demodulator_priv; } ;
struct dib7000m_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dib7000m_state*,int ) ;
 int FUNC_1 (struct dib7000m_state*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2)
{
 struct dib7000m_state *VAR_3 = VAR_2->demodulator_priv;

 FUNC_1(VAR_3, VAR_0);

 if (FUNC_0(VAR_3, VAR_1) != 0)
  FUNC_2("could not start Slow ADC\n");

 return 0;
}
