
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct i2c_client {int dev; } ;
struct TYPE_7__ {int (* get_if_frequency ) (struct dvb_frontend*,scalar_t__*) ;int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_8__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int frequency; int bandwidth_hz; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; struct af9033_dev* demodulator_priv; } ;
struct TYPE_9__ {scalar_t__ clock; scalar_t__ adc_multiplier; int spec_inv; } ;
struct af9033_dev {int bandwidth_hz; int regmap; TYPE_3__ cfg; struct i2c_client* client; } ;
struct TYPE_10__ {scalar_t__ clock; int bandwidth_hz; int* val; unsigned int adc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 unsigned int FUNC_1 (int,unsigned int) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int ,int,int*,int) ;
 int FUNC_5 (int ,int,int,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct dvb_frontend*) ;
 int FUNC_8 (struct dvb_frontend*,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_4)
{
 struct af9033_dev *VAR_5 = VAR_4->demodulator_priv;
 struct i2c_client *VAR_6 = VAR_5->client;
 struct dtv_frontend_properties *VAR_7 = &VAR_4->dtv_property_cache;
 int VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;
 u8 VAR_12, VAR_13[3], VAR_14;
 u32 VAR_15;

 FUNC_2(&VAR_6->dev, "frequency=%u bandwidth_hz=%u\n",
  VAR_7->frequency, VAR_7->bandwidth_hz);


 switch (VAR_7->bandwidth_hz) {
 case 6000000:
  VAR_14 = 0x00;
  break;
 case 7000000:
  VAR_14 = 0x01;
  break;
 case 8000000:
  VAR_14 = 0x02;
  break;
 default:
  FUNC_2(&VAR_6->dev, "invalid bandwidth_hz\n");
  VAR_8 = -VAR_1;
  goto err;
 }


 if (VAR_4->ops.tuner_ops.set_params)
  VAR_4->ops.tuner_ops.set_params(VAR_4);


 if (VAR_7->bandwidth_hz != VAR_5->bandwidth_hz) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
   if (VAR_3[VAR_9].clock == VAR_5->cfg.clock &&
       VAR_3[VAR_9].bandwidth_hz == VAR_7->bandwidth_hz) {
    break;
   }
  }
  if (VAR_9 == FUNC_0(VAR_3)) {
   FUNC_3(&VAR_6->dev,
    "Couldn't find config for clock %u\n",
    VAR_5->cfg.clock);
   VAR_8 = -VAR_1;
   goto err;
  }

  VAR_8 = FUNC_4(VAR_5->regmap, 0x800001, VAR_3[VAR_9].val,
     sizeof(VAR_3[VAR_9].val));
  if (VAR_8)
   goto err;
 }


 if (VAR_7->bandwidth_hz != VAR_5->bandwidth_hz) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {
   if (VAR_2[VAR_9].clock == VAR_5->cfg.clock)
    break;
  }
  if (VAR_9 == FUNC_0(VAR_2)) {
   FUNC_3(&VAR_6->dev,
    "Couldn't find ADC clock for clock %u\n",
    VAR_5->cfg.clock);
   VAR_8 = -VAR_1;
   goto err;
  }
  VAR_11 = VAR_2[VAR_9].adc;

  if (VAR_5->cfg.adc_multiplier == VAR_0)
   VAR_11 = 2 * VAR_11;


  if (VAR_4->ops.tuner_ops.get_if_frequency)
   VAR_4->ops.tuner_ops.get_if_frequency(VAR_4, &VAR_15);
  else
   VAR_15 = 0;

  VAR_10 = FUNC_1((u64)VAR_15 * 0x800000,
          VAR_11);

  if (!VAR_5->cfg.spec_inv && VAR_15)
   VAR_10 = 0x800000 - VAR_10;

  VAR_13[0] = (VAR_10 >> 0) & 0xff;
  VAR_13[1] = (VAR_10 >> 8) & 0xff;
  VAR_13[2] = (VAR_10 >> 16) & 0xff;
  VAR_8 = FUNC_4(VAR_5->regmap, 0x800029, VAR_13, 3);
  if (VAR_8)
   goto err;

  FUNC_2(&VAR_6->dev, "if_frequency_cw=%06x\n", VAR_10);

  VAR_5->bandwidth_hz = VAR_7->bandwidth_hz;
 }

 VAR_8 = FUNC_5(VAR_5->regmap, 0x80f904, 0x03,
     VAR_14);
 if (VAR_8)
  goto err;
 VAR_8 = FUNC_6(VAR_5->regmap, 0x800040, 0x00);
 if (VAR_8)
  goto err;
 VAR_8 = FUNC_6(VAR_5->regmap, 0x800047, 0x00);
 if (VAR_8)
  goto err;
 VAR_8 = FUNC_5(VAR_5->regmap, 0x80f999, 0x01, 0x00);
 if (VAR_8)
  goto err;

 if (VAR_7->frequency <= 230000000)
  VAR_12 = 0x00;
 else
  VAR_12 = 0x01;

 VAR_8 = FUNC_6(VAR_5->regmap, 0x80004b, VAR_12);
 if (VAR_8)
  goto err;

 VAR_8 = FUNC_6(VAR_5->regmap, 0x800000, 0x00);
 if (VAR_8)
  goto err;

 return 0;
err:
 FUNC_2(&VAR_6->dev, "failed=%d\n", VAR_8);
 return VAR_8;
}
