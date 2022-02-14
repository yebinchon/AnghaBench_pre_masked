
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {int current_rf; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0, u32 * VAR_1)
{
 struct dib0090_state *VAR_2 = VAR_0->tuner_priv;

 *VAR_1 = 1000 * VAR_2->current_rf;
 return 0;
}
