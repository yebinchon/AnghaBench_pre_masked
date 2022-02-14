
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tda_state {int IF; } ;
struct dvb_frontend {struct tda_state* tuner_priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct tda_state *VAR_2 = VAR_0->tuner_priv;

 *VAR_1 = VAR_2->IF;
 return 0;
}
