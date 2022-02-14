
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct m88rs2000_state {TYPE_1__* config; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_2__ {int (* set_ts_params ) (struct dvb_frontend*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct m88rs2000_state*,int) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_6,
     enum fe_status *VAR_7)
{
 struct m88rs2000_state *VAR_8 = VAR_6->demodulator_priv;
 u8 VAR_9 = FUNC_0(VAR_8, 0x8c);

 *VAR_7 = 0;

 if ((VAR_9 & 0xee) == 0xee) {
  *VAR_7 = VAR_1 | VAR_3 | VAR_5
   | VAR_4 | VAR_2;
  if (VAR_8->config->set_ts_params)
   VAR_8->config->set_ts_params(VAR_6, VAR_0);
 }
 return 0;
}
