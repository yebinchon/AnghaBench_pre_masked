
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s921_state {int currentfreq; } ;
struct dvb_frontend {struct s921_state* demodulator_priv; } ;
struct dtv_frontend_properties {int delivery_system; int frequency; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_1,
        struct dtv_frontend_properties *VAR_2)
{
 struct s921_state *VAR_3 = VAR_1->demodulator_priv;


 VAR_2->frequency = VAR_3->currentfreq;
 VAR_2->delivery_system = VAR_0;

 return 0;
}
