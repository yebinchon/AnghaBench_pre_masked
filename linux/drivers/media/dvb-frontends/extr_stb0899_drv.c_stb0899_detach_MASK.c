
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_state {int dummy; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct stb0899_state*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_1)
{
 struct stb0899_state *VAR_2 = VAR_1->demodulator_priv;


 FUNC_0(VAR_2, VAR_0, 0);
}
