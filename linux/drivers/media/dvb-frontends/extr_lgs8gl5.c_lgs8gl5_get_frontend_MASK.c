
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgs8gl5_state {int dummy; } ;
struct dvb_frontend {struct lgs8gl5_state* demodulator_priv; } ;
struct dtv_frontend_properties {int bandwidth_hz; int hierarchy; int modulation; int transmission_mode; int guard_interval; int code_rate_LP; int code_rate_HP; int inversion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lgs8gl5_state*,int ) ;

__attribute__((used)) static int
FUNC_1(struct dvb_frontend *VAR_10,
       struct dtv_frontend_properties *VAR_11)
{
 struct lgs8gl5_state *VAR_12 = VAR_10->demodulator_priv;

 u8 VAR_13 = FUNC_0(VAR_12, VAR_7);

 VAR_11->inversion = (VAR_13 & VAR_8) ? VAR_5 : VAR_4;

 VAR_11->code_rate_HP = VAR_0;
 VAR_11->code_rate_LP = VAR_1;
 VAR_11->guard_interval = VAR_2;
 VAR_11->transmission_mode = VAR_9;
 VAR_11->modulation = VAR_6;
 VAR_11->hierarchy = VAR_3;
 VAR_11->bandwidth_hz = 8000000;

 return 0;
}
