
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct regmap {int dummy; } ;
struct mn88443x_priv {struct regmap* regmap_t; struct regmap* regmap_s; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {scalar_t__ delivery_system; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; struct mn88443x_priv* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct mn88443x_priv*) ;
 int FUNC_1 (struct mn88443x_priv*,struct dtv_frontend_properties*) ;
 int FUNC_2 (struct mn88443x_priv*) ;
 int FUNC_3 (struct mn88443x_priv*) ;
 int FUNC_4 (struct mn88443x_priv*) ;
 int FUNC_5 (struct mn88443x_priv*,struct dtv_frontend_properties*) ;
 int FUNC_6 (struct mn88443x_priv*) ;
 int FUNC_7 (struct regmap*,int ,int,int) ;
 int FUNC_8 (struct regmap*,int ,int) ;
 int FUNC_9 (struct dvb_frontend*,int) ;
 int FUNC_10 (struct dvb_frontend*) ;
 int FUNC_11 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_12(struct dvb_frontend *VAR_17)
{
 struct mn88443x_priv *VAR_18 = VAR_17->demodulator_priv;
 struct dtv_frontend_properties *VAR_19 = &VAR_17->dtv_property_cache;
 struct regmap *VAR_20 = VAR_18->regmap_s;
 struct regmap *VAR_21 = VAR_18->regmap_t;
 u8 VAR_22 = 0, VAR_23 = 0;

 if (VAR_19->delivery_system == VAR_2) {
  FUNC_2(VAR_18);
  FUNC_4(VAR_18);

  VAR_22 = VAR_5;
  VAR_23 = VAR_13;
 } else if (VAR_19->delivery_system == VAR_3) {
  FUNC_0(VAR_18);
  FUNC_6(VAR_18);

  FUNC_3(VAR_18);

  VAR_22 = VAR_6;
  VAR_23 = VAR_14;
 }

 FUNC_7(VAR_21, VAR_4,
      VAR_7 | VAR_8,
      VAR_22 | VAR_9);
 FUNC_8(VAR_21, VAR_10, 0);
 FUNC_7(VAR_21, VAR_11,
      VAR_12 | VAR_15,
      VAR_23 | VAR_16);

 FUNC_8(VAR_21, VAR_1, 0x95);
 FUNC_8(VAR_20, VAR_0, 0x80);

 if (VAR_19->delivery_system == VAR_2)
  FUNC_1(VAR_18, VAR_19);
 else if (VAR_19->delivery_system == VAR_3)
  FUNC_5(VAR_18, VAR_19);

 if (VAR_17->ops.tuner_ops.set_params) {
  if (VAR_17->ops.i2c_gate_ctrl)
   VAR_17->ops.i2c_gate_ctrl(VAR_17, 1);
  VAR_17->ops.tuner_ops.set_params(VAR_17);
  if (VAR_17->ops.i2c_gate_ctrl)
   VAR_17->ops.i2c_gate_ctrl(VAR_17, 0);
 }

 return 0;
}
