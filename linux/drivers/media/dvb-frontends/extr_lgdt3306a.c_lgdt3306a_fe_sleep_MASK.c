
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int dummy; } ;
struct dvb_frontend {struct lgdt3306a_state* demodulator_priv; } ;


 int FUNC_0 (struct lgdt3306a_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct lgdt3306a_state *VAR_1 = VAR_0->demodulator_priv;

 return FUNC_0(VAR_1);
}
