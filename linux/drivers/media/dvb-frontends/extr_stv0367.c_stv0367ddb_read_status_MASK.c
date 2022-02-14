
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stv0367_state {int activedemod; } ;
struct TYPE_8__ {TYPE_3__* stat; } ;
struct TYPE_6__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_4__ block_error; TYPE_2__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv0367_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_7__ {void* scale; } ;
struct TYPE_5__ {void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;


 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3,
      enum fe_status *VAR_4)
{
 struct stv0367_state *VAR_5 = VAR_3->demodulator_priv;
 struct dtv_frontend_properties *VAR_6 = &VAR_3->dtv_property_cache;
 int VAR_7 = 0;

 switch (VAR_5->activedemod) {
 case 128:
  VAR_7 = FUNC_4(VAR_3, VAR_4);
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  break;
 default:
  break;
 }


 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_3);


 if (*VAR_4 & VAR_0)
  FUNC_2(VAR_3);
 else
  VAR_6->cnr.stat[0].scale = VAR_2;


 if (*VAR_4 & VAR_1)
  FUNC_3(VAR_3);
 else
  VAR_6->block_error.stat[0].scale = VAR_2;

 return 0;
}
