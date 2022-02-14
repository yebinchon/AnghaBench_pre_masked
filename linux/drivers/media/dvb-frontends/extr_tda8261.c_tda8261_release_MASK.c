
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8261_state {int dummy; } ;
struct dvb_frontend {struct tda8261_state* tuner_priv; } ;


 int FUNC_0 (struct tda8261_state*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct tda8261_state *VAR_1 = VAR_0->tuner_priv;

 VAR_0->tuner_priv = ((void*)0);
 FUNC_0(VAR_1);
}
