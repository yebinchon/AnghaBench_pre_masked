
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ves1x93_state {scalar_t__ inversion; scalar_t__ frequency; } ;
struct dvb_frontend {struct ves1x93_state* demodulator_priv; } ;
struct dtv_frontend_properties {int symbol_rate; int fec_inner; int inversion; scalar_t__ frequency; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ves1x93_state*) ;
 int FUNC_1 (struct ves1x93_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3,
    struct dtv_frontend_properties *VAR_4)
{
 struct ves1x93_state* VAR_5 = VAR_3->demodulator_priv;
 int VAR_6;

 VAR_6 = ((int)((char)(FUNC_1 (VAR_5, 0x0a) << 1)))/2;
 VAR_6 = (VAR_6 * (int)(VAR_4->symbol_rate/1000/8))/16;

 VAR_4->frequency = VAR_5->frequency - VAR_6;





 if (VAR_5->inversion == VAR_0)
  VAR_4->inversion = (FUNC_1 (VAR_5, 0x0f) & 2) ?
    VAR_1 : VAR_2;
 VAR_4->fec_inner = FUNC_0(VAR_5);


 return 0;
}
