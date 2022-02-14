
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb6100_state {int bandwidth; int reference; } ;
struct dvb_frontend {struct stb6100_state* tuner_priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0)
{
 struct stb6100_state *VAR_1 = VAR_0->tuner_priv;
 int VAR_2 = 27000000;





 VAR_1->bandwidth = 36000000;
 VAR_1->reference = VAR_2 / 1000;


 return 0;
}
