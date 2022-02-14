
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda_state {int dummy; } ;
struct dvb_frontend {struct tda_state* tuner_priv; } ;


 int FUNC_0 (struct tda_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct tda_state *VAR_1 = VAR_0->tuner_priv;

 FUNC_0(VAR_1);
 return 0;
}
