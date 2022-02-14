
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ts2020_reg_val {int member_0; int member_1; int reg; int val; } ;
struct TYPE_6__ {int work; } ;
struct ts2020_priv {scalar_t__ tuner; int clk_out_div; int clk_out; TYPE_3__ stat_work; int regmap; scalar_t__ loop_through; } ;
struct TYPE_5__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ strength; } ;
struct dvb_frontend {struct ts2020_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_4__ {scalar_t__ uvalue; int scale; } ;


 int FUNC_0 (struct ts2020_reg_val const*) ;
 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct ts2020_priv *VAR_4 = VAR_2->tuner_priv;
 int VAR_5;
 u8 VAR_6;

 if (VAR_4->tuner == VAR_1) {
  FUNC_1(VAR_4->regmap, 0x42, 0x73);
  FUNC_1(VAR_4->regmap, 0x05, VAR_4->clk_out_div);
  FUNC_1(VAR_4->regmap, 0x20, 0x27);
  FUNC_1(VAR_4->regmap, 0x07, 0x02);
  FUNC_1(VAR_4->regmap, 0x11, 0xff);
  FUNC_1(VAR_4->regmap, 0x60, 0xf9);
  FUNC_1(VAR_4->regmap, 0x08, 0x01);
  FUNC_1(VAR_4->regmap, 0x00, 0x41);
 } else {
  static const struct ts2020_reg_val VAR_7[] = {
   {0x7d, 0x9d},
   {0x7c, 0x9a},
   {0x7a, 0x76},
   {0x3b, 0x01},
   {0x63, 0x88},
   {0x61, 0x85},
   {0x22, 0x30},
   {0x30, 0x40},
   {0x20, 0x23},
   {0x24, 0x02},
   {0x12, 0xa0},
  };

  FUNC_1(VAR_4->regmap, 0x00, 0x01);
  FUNC_1(VAR_4->regmap, 0x00, 0x03);

  switch (VAR_4->clk_out) {
  case 130:
   VAR_6 = 0x60;
   break;
  case 129:
   VAR_6 = 0x70;
   FUNC_1(VAR_4->regmap, 0x05, VAR_4->clk_out_div);
   break;
  case 128:
   VAR_6 = 0x6c;
   break;
  default:
   VAR_6 = 0x60;
   break;
  }

  FUNC_1(VAR_4->regmap, 0x42, VAR_6);

  if (VAR_4->loop_through)
   VAR_6 = 0xec;
  else
   VAR_6 = 0x6c;

  FUNC_1(VAR_4->regmap, 0x62, VAR_6);

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_7); VAR_5++)
   FUNC_1(VAR_4->regmap, VAR_7[VAR_5].reg,
         VAR_7[VAR_5].val);
 }


 VAR_3->strength.len = 1;
 VAR_3->strength.stat[0].scale = VAR_0;
 VAR_3->strength.stat[0].uvalue = 0;


 FUNC_2(&VAR_4->stat_work.work);
 return 0;
}
