
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si2165_state {int dummy; } ;
struct dvb_frontend {struct si2165_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct si2165_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_3)
{
 int VAR_4;
 struct si2165_state *VAR_5 = VAR_3->demodulator_priv;


 VAR_4 = FUNC_0(VAR_5, VAR_1, 0x00);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_5, VAR_0, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 return 0;
}
