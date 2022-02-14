
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct si2165_state {int dummy; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int delivery_system; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; struct si2165_state* demodulator_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_1 (struct si2165_state*,int ,int *) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct si2165_state*) ;
 int FUNC_5 (struct si2165_state*,int ,int ) ;
 int FUNC_6 (struct si2165_state*,int ,int) ;
 int FUNC_7 (struct si2165_state*,int ,int) ;
 int FUNC_8 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_7)
{
 struct si2165_state *VAR_8 = VAR_7->demodulator_priv;
 struct dtv_frontend_properties *VAR_9 = &VAR_7->dtv_property_cache;
 u32 VAR_10 = VAR_9->delivery_system;
 int VAR_11;
 u8 VAR_12[3];


 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 switch (VAR_10) {
 case 128:
  VAR_11 = FUNC_3(VAR_7);
  if (VAR_11 < 0)
   return VAR_11;
  break;
 case 129:
  VAR_11 = FUNC_2(VAR_7);
  if (VAR_11 < 0)
   return VAR_11;
  break;
 default:
  return -VAR_0;
 }


 VAR_11 = FUNC_6(VAR_8, VAR_1, 0xf4000000);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_7->ops.tuner_ops.set_params)
  VAR_7->ops.tuner_ops.set_params(VAR_7);


 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_1(VAR_8, VAR_5, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_7(VAR_8, VAR_5, 0x00);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_7(VAR_8, VAR_3, 0x00);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_6(VAR_8, VAR_2, 0x00000000);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_5(VAR_8, VAR_6,
        FUNC_0(VAR_6));
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_7(VAR_8, VAR_4, 0x01);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_8, VAR_5, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
