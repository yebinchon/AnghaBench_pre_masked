
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5h1409_state {int current_modulation; int current_frequency; } ;
struct dvb_frontend {struct s5h1409_state* demodulator_priv; } ;
struct dtv_frontend_properties {int modulation; int frequency; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
    struct dtv_frontend_properties *VAR_1)
{
 struct s5h1409_state *VAR_2 = VAR_0->demodulator_priv;

 VAR_1->frequency = VAR_2->current_frequency;
 VAR_1->modulation = VAR_2->current_modulation;

 return 0;
}
