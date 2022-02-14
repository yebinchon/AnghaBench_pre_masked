
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_18__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_28__ {int (* get_if_frequency ) (struct dvb_frontend*,int*) ;int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_29__ {TYPE_1__ tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct TYPE_27__ {TYPE_17__* stat; } ;
struct TYPE_25__ {TYPE_15__* stat; } ;
struct TYPE_23__ {TYPE_13__* stat; } ;
struct TYPE_21__ {TYPE_11__* stat; } ;
struct TYPE_19__ {TYPE_9__* stat; } ;
struct TYPE_35__ {TYPE_7__* stat; } ;
struct TYPE_33__ {TYPE_5__* stat; } ;
struct TYPE_31__ {TYPE_3__* stat; } ;
struct dtv_frontend_properties {int delivery_system; TYPE_18__ post_bit_count; TYPE_16__ post_bit_error; TYPE_14__ pre_bit_count; TYPE_12__ pre_bit_error; TYPE_10__ block_count; TYPE_8__ block_error; TYPE_6__ cnr; TYPE_4__ strength; } ;
struct dvb_frontend {TYPE_2__ ops; struct drxk_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct drxk_state {scalar_t__ m_drxk_state; int m_itut_annex_c; int m_has_dvbt; int m_has_dvbc; struct dtv_frontend_properties props; } ;
struct TYPE_36__ {void* scale; } ;
struct TYPE_34__ {void* scale; } ;
struct TYPE_32__ {void* scale; } ;
struct TYPE_30__ {int scale; } ;
struct TYPE_26__ {void* scale; } ;
struct TYPE_24__ {void* scale; } ;
struct TYPE_22__ {void* scale; } ;
struct TYPE_20__ {void* scale; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drxk_state*,int ) ;
 int FUNC_3 (struct drxk_state*) ;
 int FUNC_4 (struct drxk_state*,int ,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct dvb_frontend*,int) ;
 int FUNC_8 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_10)
{
 struct dtv_frontend_properties *VAR_11 = &VAR_10->dtv_property_cache;
 u32 VAR_12 = VAR_11->delivery_system, VAR_13;
 struct drxk_state *VAR_14 = VAR_10->demodulator_priv;
 u32 VAR_15;

 FUNC_0(1, "\n");

 if (VAR_14->m_drxk_state == VAR_0)
  return -VAR_4;

 if (VAR_14->m_drxk_state == VAR_1)
  return -VAR_2;

 if (!VAR_10->ops.tuner_ops.get_if_frequency) {
  FUNC_1("Error: get_if_frequency() not defined at tuner. Can't work without it!\n");
  return -VAR_3;
 }

 if (VAR_10->ops.i2c_gate_ctrl)
  VAR_10->ops.i2c_gate_ctrl(VAR_10, 1);
 if (VAR_10->ops.tuner_ops.set_params)
  VAR_10->ops.tuner_ops.set_params(VAR_10);
 if (VAR_10->ops.i2c_gate_ctrl)
  VAR_10->ops.i2c_gate_ctrl(VAR_10, 0);

 VAR_13 = VAR_14->props.delivery_system;
 VAR_14->props = *VAR_11;

 if (VAR_13 != VAR_12) {
  FUNC_3(VAR_14);
  switch (VAR_12) {
  case 130:
  case 129:
   if (!VAR_14->m_has_dvbc)
    return -VAR_3;
   VAR_14->m_itut_annex_c = (VAR_12 == 129) ?
      1 : 0;
   if (VAR_14->m_itut_annex_c)
    FUNC_2(VAR_14, VAR_9);
   else
    FUNC_2(VAR_14, VAR_8);
   break;
  case 128:
   if (!VAR_14->m_has_dvbt)
    return -VAR_3;
   FUNC_2(VAR_14, VAR_7);
   break;
  default:
   return -VAR_3;
  }
 }

 VAR_10->ops.tuner_ops.get_if_frequency(VAR_10, &VAR_15);
 FUNC_4(VAR_14, 0, VAR_15);


 VAR_11->strength.stat[0].scale = VAR_6;
 VAR_11->cnr.stat[0].scale = VAR_5;
 VAR_11->block_error.stat[0].scale = VAR_5;
 VAR_11->block_count.stat[0].scale = VAR_5;
 VAR_11->pre_bit_error.stat[0].scale = VAR_5;
 VAR_11->pre_bit_count.stat[0].scale = VAR_5;
 VAR_11->post_bit_error.stat[0].scale = VAR_5;
 VAR_11->post_bit_count.stat[0].scale = VAR_5;



 return 0;
}
