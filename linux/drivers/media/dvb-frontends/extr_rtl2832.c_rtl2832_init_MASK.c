
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct rtl2832_reg_value {int member_1; int value; int reg; int member_0; } ;
struct TYPE_11__ {int len; TYPE_9__* stat; } ;
struct TYPE_19__ {int len; TYPE_7__* stat; } ;
struct TYPE_17__ {int len; TYPE_5__* stat; } ;
struct TYPE_15__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_10__ post_bit_count; TYPE_8__ post_bit_error; TYPE_6__ cnr; TYPE_4__ strength; } ;
struct TYPE_12__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct rtl2832_dev {int sleeping; TYPE_2__* pdata; TYPE_1__ fe; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct rtl2832_dev* demodulator_priv; } ;
struct TYPE_20__ {void* scale; } ;
struct TYPE_18__ {void* scale; } ;
struct TYPE_16__ {void* scale; } ;
struct TYPE_14__ {void* scale; } ;
struct TYPE_13__ {int tuner; } ;


 int FUNC_0 (struct rtl2832_reg_value*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 void* VAR_42 ;
 int FUNC_1 (int *,char*,...) ;
 struct rtl2832_reg_value* VAR_43 ;
 struct rtl2832_reg_value* VAR_44 ;
 struct rtl2832_reg_value* VAR_45 ;
 struct rtl2832_reg_value* VAR_46 ;
 struct rtl2832_reg_value* VAR_47 ;
 struct rtl2832_reg_value* VAR_48 ;
 int FUNC_2 (struct rtl2832_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_49)
{
 struct rtl2832_dev *VAR_50 = VAR_49->demodulator_priv;
 struct i2c_client *VAR_51 = VAR_50->client;
 struct dtv_frontend_properties *VAR_52 = &VAR_50->fe.dtv_property_cache;
 const struct rtl2832_reg_value *VAR_53;
 int VAR_54, VAR_55, VAR_56;

 struct rtl2832_reg_value VAR_57[] = {
  {VAR_1, 0x1},
  {VAR_2, 0x1},
  {VAR_25, 0x2800},
  {VAR_12, 0x10},
  {VAR_13, 0x20},
  {VAR_14, 0x20},
  {VAR_15, 0x40},
  {VAR_16, 0x22},
  {VAR_17, 0x32},
  {VAR_18, 0x37},
  {VAR_19, 0x39},
  {VAR_6, 0x0},
  {VAR_7, 0x0},
  {VAR_0, 0x2a},
  {VAR_24, 0x6},
  {VAR_22, 0x0},
  {VAR_3, 0x8},
  {VAR_4, 0x8},
  {VAR_26, 0x4},
  {VAR_27, 0xb0},
  {VAR_28, 0x78},
  {VAR_29, 0x28},
  {VAR_30, 0x59},
  {VAR_31, 0x83},
  {VAR_32, 0xd4},
  {VAR_33, 0x65},
  {VAR_34, 0x43},
  {VAR_9, 0x1},
  {VAR_10, 0x4},
  {VAR_11, 0x7},
  {VAR_8, 0xa},
  {VAR_23, 0x1},
  {VAR_35, 0x0},
  {VAR_3, 0x9},
  {VAR_4, 0x9},
  {VAR_21, 0x0},
  {VAR_20, 0x0},
  {VAR_39, 0x4},
  {VAR_38, 0x7},
  {VAR_40, 0x6},
  {VAR_37, 0x5},
  {VAR_5, 0x1},
 };

 FUNC_1(&VAR_51->dev, "\n");

 VAR_55 = FUNC_2(VAR_50, VAR_36, 0x0);
 if (VAR_55)
  goto err;

 for (VAR_54 = 0; VAR_54 < FUNC_0(VAR_57); VAR_54++) {
  VAR_55 = FUNC_2(VAR_50, VAR_57[VAR_54].reg,
   VAR_57[VAR_54].value);
  if (VAR_55)
   goto err;
 }


 FUNC_1(&VAR_51->dev, "load settings for tuner=%02x\n",
  VAR_50->pdata->tuner);
 switch (VAR_50->pdata->tuner) {
 case 132:
  VAR_56 = FUNC_0(VAR_45);
  VAR_53 = VAR_45;
  break;
 case 134:
 case 133:
  VAR_56 = FUNC_0(VAR_44);
  VAR_53 = VAR_44;
  break;
 case 128:
  VAR_56 = FUNC_0(VAR_48);
  VAR_53 = VAR_48;
  break;
 case 135:
  VAR_56 = FUNC_0(VAR_43);
  VAR_53 = VAR_43;
  break;
 case 131:
 case 130:
  VAR_56 = FUNC_0(VAR_46);
  VAR_53 = VAR_46;
  break;
 case 129:
  VAR_56 = FUNC_0(VAR_47);
  VAR_53 = VAR_47;
  break;
 default:
  VAR_55 = -VAR_41;
  goto err;
 }

 for (VAR_54 = 0; VAR_54 < VAR_56; VAR_54++) {
  VAR_55 = FUNC_2(VAR_50, VAR_53[VAR_54].reg, VAR_53[VAR_54].value);
  if (VAR_55)
   goto err;
 }


 VAR_52->strength.len = 1;
 VAR_52->strength.stat[0].scale = VAR_42;
 VAR_52->cnr.len = 1;
 VAR_52->cnr.stat[0].scale = VAR_42;
 VAR_52->post_bit_error.len = 1;
 VAR_52->post_bit_error.stat[0].scale = VAR_42;
 VAR_52->post_bit_count.len = 1;
 VAR_52->post_bit_count.stat[0].scale = VAR_42;
 VAR_50->sleeping = 0;

 return 0;
err:
 FUNC_1(&VAR_51->dev, "failed=%d\n", VAR_55);
 return VAR_55;
}
