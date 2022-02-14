
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


struct rtl2830_reg_val_mask {int member_0; int member_1; int member_2; int reg; int mask; int val; } ;
struct TYPE_11__ {int len; TYPE_9__* stat; } ;
struct TYPE_19__ {int len; TYPE_7__* stat; } ;
struct TYPE_17__ {int len; TYPE_5__* stat; } ;
struct TYPE_15__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_10__ post_bit_count; TYPE_8__ post_bit_error; TYPE_6__ cnr; TYPE_4__ strength; } ;
struct TYPE_12__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct rtl2830_dev {int sleeping; TYPE_2__* pdata; TYPE_1__ fe; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* demodulator_priv; } ;
struct TYPE_20__ {void* scale; } ;
struct TYPE_18__ {void* scale; } ;
struct TYPE_16__ {void* scale; } ;
struct TYPE_14__ {void* scale; } ;
struct TYPE_13__ {int vtop; int krf; int agc_targ_val; int spec_inv; } ;


 int FUNC_0 (struct rtl2830_reg_val_mask*) ;
 void* VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 struct rtl2830_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int,char*,int) ;
 int FUNC_4 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->demodulator_priv;
 struct rtl2830_dev *VAR_3 = FUNC_2(VAR_2);
 struct dtv_frontend_properties *VAR_4 = &VAR_3->fe.dtv_property_cache;
 int VAR_5, VAR_6;
 struct rtl2830_reg_val_mask VAR_7[] = {
  {0x00d, 0x01, 0x03},
  {0x00d, 0x10, 0x10},
  {0x104, 0x00, 0x1e},
  {0x105, 0x80, 0x80},
  {0x110, 0x02, 0x03},
  {0x110, 0x08, 0x0c},
  {0x17b, 0x00, 0x40},
  {0x17d, 0x05, 0x0f},
  {0x17d, 0x50, 0xf0},
  {0x18c, 0x08, 0x0f},
  {0x18d, 0x00, 0xc0},
  {0x188, 0x05, 0x0f},
  {0x189, 0x00, 0xfc},
  {0x2d5, 0x02, 0x02},
  {0x2f1, 0x02, 0x06},
  {0x2f1, 0x20, 0xf8},
  {0x16d, 0x00, 0x01},
  {0x1a6, 0x00, 0x80},
  {0x106, VAR_3->pdata->vtop, 0x3f},
  {0x107, VAR_3->pdata->krf, 0x3f},
  {0x112, 0x28, 0xff},
  {0x103, VAR_3->pdata->agc_targ_val, 0xff},
  {0x00a, 0x02, 0x07},
  {0x140, 0x0c, 0x3c},
  {0x140, 0x40, 0xc0},
  {0x15b, 0x05, 0x07},
  {0x15b, 0x28, 0x38},
  {0x15c, 0x05, 0x07},
  {0x15c, 0x28, 0x38},
  {0x115, VAR_3->pdata->spec_inv, 0x01},
  {0x16f, 0x01, 0x07},
  {0x170, 0x18, 0x38},
  {0x172, 0x0f, 0x0f},
  {0x173, 0x08, 0x38},
  {0x175, 0x01, 0x07},
  {0x176, 0x00, 0xc0},
 };

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7); VAR_6++) {
  VAR_5 = FUNC_4(VAR_2, VAR_7[VAR_6].reg, VAR_7[VAR_6].mask,
       VAR_7[VAR_6].val);
  if (VAR_5)
   goto err;
 }

 VAR_5 = FUNC_3(VAR_2, 0x18f, "\x28\x00", 2);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_3(VAR_2, 0x195,
     "\x04\x06\x0a\x12\x0a\x12\x1e\x28", 8);
 if (VAR_5)
  goto err;




 VAR_5 = FUNC_4(VAR_2, 0x101, 0x04, 0x04);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_4(VAR_2, 0x101, 0x04, 0x00);
 if (VAR_5)
  goto err;


 VAR_4->strength.len = 1;
 VAR_4->strength.stat[0].scale = VAR_0;
 VAR_4->cnr.len = 1;
 VAR_4->cnr.stat[0].scale = VAR_0;
 VAR_4->post_bit_error.len = 1;
 VAR_4->post_bit_error.stat[0].scale = VAR_0;
 VAR_4->post_bit_count.len = 1;
 VAR_4->post_bit_count.stat[0].scale = VAR_0;

 VAR_3->sleeping = 0;

 return VAR_5;
err:
 FUNC_1(&VAR_2->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
