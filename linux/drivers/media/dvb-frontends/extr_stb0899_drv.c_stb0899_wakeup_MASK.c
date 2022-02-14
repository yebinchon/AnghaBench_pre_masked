
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_state {int dummy; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stb0899_state*,int ,int) ;
 int FUNC_1 (struct stb0899_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5)
{
 int VAR_6;
 struct stb0899_state *VAR_7 = VAR_5->demodulator_priv;

 if ((VAR_6 = FUNC_1(VAR_7, VAR_4, VAR_1)))
  return VAR_6;

 if ((VAR_6 = FUNC_1(VAR_7, VAR_2, 0x00)))
  return VAR_6;
 if ((VAR_6 = FUNC_1(VAR_7, VAR_3, 0x00)))
  return VAR_6;


 FUNC_0(VAR_7, VAR_0, 1);

 return 0;
}
