
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8083_state {int dummy; } ;
struct dvb_frontend {struct tda8083_state* demodulator_priv; } ;
struct dtv_frontend_properties {int fec_inner; int inversion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tda8083_state*) ;
 int FUNC_1 (struct tda8083_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2,
    struct dtv_frontend_properties *VAR_3)
{
 struct tda8083_state* VAR_4 = VAR_2->demodulator_priv;



 VAR_3->inversion = (FUNC_1 (VAR_4, 0x0e) & 0x80) ?
   VAR_1 : VAR_0;
 VAR_3->fec_inner = FUNC_0(VAR_4);


 return 0;
}
