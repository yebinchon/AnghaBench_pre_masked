
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5h1420_state {scalar_t__ tunedfreq; } ;
struct dvb_frontend {struct s5h1420_state* demodulator_priv; } ;
struct dtv_frontend_properties {int fec_inner; int symbol_rate; int inversion; scalar_t__ frequency; } ;


 int FUNC_0 (struct s5h1420_state*) ;
 scalar_t__ FUNC_1 (struct s5h1420_state*) ;
 int FUNC_2 (struct s5h1420_state*) ;
 int FUNC_3 (struct s5h1420_state*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend* VAR_0,
    struct dtv_frontend_properties *VAR_1)
{
 struct s5h1420_state* VAR_2 = VAR_0->demodulator_priv;

 VAR_1->frequency = VAR_2->tunedfreq + FUNC_1(VAR_2);
 VAR_1->inversion = FUNC_2(VAR_2);
 VAR_1->symbol_rate = FUNC_3(VAR_2);
 VAR_1->fec_inner = FUNC_0(VAR_2);

 return 0;
}
