
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; int member_16; int member_17; int member_18; int member_19; int member_20; int member_21; int member_22; int member_23; int member_24; int member_25; int member_26; int member_27; int member_28; int member_29; int member_30; int member_31; } ;
typedef TYPE_4__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct rtl2832_dev {TYPE_3__* pdata; int regmap; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct TYPE_6__ {int (* get_if_frequency ) (struct dvb_frontend*,int*) ;int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_7__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int bandwidth_hz; int inversion; int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; struct rtl2832_dev* demodulator_priv; } ;
typedef int bw_params ;
struct TYPE_8__ {unsigned long long clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,TYPE_4__*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 int FUNC_5 (struct rtl2832_dev*,int ,int) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_4)
{
 struct rtl2832_dev *VAR_5 = VAR_4->demodulator_priv;
 struct i2c_client *VAR_6 = VAR_5->client;
 struct dtv_frontend_properties *VAR_7 = &VAR_4->dtv_property_cache;
 int VAR_8, VAR_9, VAR_10;
 u64 VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15;
 static u8 VAR_16[3][32] = {

  {
  0xf5, 0xff, 0x15, 0x38, 0x5d, 0x6d, 0x52, 0x07, 0xfa, 0x2f,
  0x53, 0xf5, 0x3f, 0xca, 0x0b, 0x91, 0xea, 0x30, 0x63, 0xb2,
  0x13, 0xda, 0x0b, 0xc4, 0x18, 0x7e, 0x16, 0x66, 0x08, 0x67,
  0x19, 0xe0,
  },


  {
  0xe7, 0xcc, 0xb5, 0xba, 0xe8, 0x2f, 0x67, 0x61, 0x00, 0xaf,
  0x86, 0xf2, 0xbf, 0x59, 0x04, 0x11, 0xb6, 0x33, 0xa4, 0x30,
  0x15, 0x10, 0x0a, 0x42, 0x18, 0xf8, 0x17, 0xd9, 0x07, 0x22,
  0x19, 0x10,
  },


  {
  0x09, 0xf6, 0xd2, 0xa7, 0x9a, 0xc9, 0x27, 0x77, 0x06, 0xbf,
  0xec, 0xf4, 0x4f, 0x0b, 0xfc, 0x01, 0x63, 0x35, 0x54, 0xa7,
  0x16, 0x66, 0x08, 0xb4, 0x19, 0x6e, 0x19, 0x65, 0x05, 0xc8,
  0x19, 0xe0,
  },
 };

 FUNC_0(&VAR_6->dev, "frequency=%u bandwidth_hz=%u inversion=%u\n",
  VAR_7->frequency, VAR_7->bandwidth_hz, VAR_7->inversion);


 if (VAR_4->ops.tuner_ops.set_params)
  VAR_4->ops.tuner_ops.set_params(VAR_4);


 if (VAR_4->ops.tuner_ops.get_if_frequency) {
  u32 VAR_17;

  VAR_8 = VAR_4->ops.tuner_ops.get_if_frequency(VAR_4, &VAR_17);
  if (VAR_8)
   goto err;

  VAR_8 = FUNC_4(VAR_4, VAR_17);
  if (VAR_8)
   goto err;
 }

 switch (VAR_7->bandwidth_hz) {
 case 6000000:
  VAR_9 = 0;
  VAR_11 = 48000000;
  break;
 case 7000000:
  VAR_9 = 1;
  VAR_11 = 56000000;
  break;
 case 8000000:
  VAR_9 = 2;
  VAR_11 = 64000000;
  break;
 default:
  FUNC_1(&VAR_6->dev, "invalid bandwidth_hz %u\n",
   VAR_7->bandwidth_hz);
  VAR_8 = -VAR_3;
  goto err;
 }

 for (VAR_10 = 0; VAR_10 < sizeof(VAR_16[0]); VAR_10++) {
  VAR_8 = FUNC_3(VAR_5->regmap,
     0x11c + VAR_10, &VAR_16[VAR_9][VAR_10], 1);
  if (VAR_8)
   goto err;
 }





 VAR_12 = VAR_5->pdata->clk * 7ULL;
 VAR_12 *= 0x400000;
 VAR_12 = FUNC_2(VAR_12, VAR_11);
 VAR_14 = VAR_12 & 0x3ffffff;
 VAR_8 = FUNC_5(VAR_5, VAR_1, VAR_14);
 if (VAR_8)
  goto err;





 VAR_12 = VAR_11 << 20;
 VAR_13 = VAR_5->pdata->clk * 7ULL;
 VAR_12 = FUNC_2(VAR_12, VAR_13);
 VAR_12 = -VAR_12;
 VAR_15 = VAR_12 & 0xfffff;
 VAR_8 = FUNC_5(VAR_5, VAR_0, VAR_15);
 if (VAR_8)
  goto err;


 VAR_8 = FUNC_5(VAR_5, VAR_2, 0x1);
 if (VAR_8)
  goto err;

 VAR_8 = FUNC_5(VAR_5, VAR_2, 0x0);
 if (VAR_8)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_6->dev, "failed=%d\n", VAR_8);
 return VAR_8;
}
