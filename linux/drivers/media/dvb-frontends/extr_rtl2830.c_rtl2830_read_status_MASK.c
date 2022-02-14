
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_18__ {TYPE_8__* stat; } ;
struct TYPE_16__ {TYPE_6__* stat; } ;
struct TYPE_14__ {TYPE_4__* stat; } ;
struct TYPE_12__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_9__ post_bit_count; TYPE_7__ post_bit_error; TYPE_5__ cnr; TYPE_3__ strength; } ;
struct TYPE_10__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct rtl2830_dev {int fe_status; unsigned int post_bit_error; int post_bit_count; scalar_t__ sleeping; TYPE_1__ fe; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_17__ {int uvalue; void* scale; } ;
struct TYPE_15__ {unsigned int uvalue; void* scale; } ;
struct TYPE_13__ {int svalue; void* scale; } ;
struct TYPE_11__ {unsigned int uvalue; void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 struct rtl2830_dev* FUNC_2 (struct i2c_client*) ;
 int const FUNC_3 (unsigned int) ;
 int FUNC_4 (struct i2c_client*,int,int*,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_11, enum fe_status *VAR_12)
{
 struct i2c_client *VAR_13 = VAR_11->demodulator_priv;
 struct rtl2830_dev *VAR_14 = FUNC_2(VAR_13);
 struct dtv_frontend_properties *VAR_15 = &VAR_14->fe.dtv_property_cache;
 int VAR_16, VAR_17;
 unsigned int VAR_18;
 u8 VAR_19, VAR_20[2];

 *VAR_12 = 0;

 if (VAR_14->sleeping)
  return 0;

 VAR_16 = FUNC_4(VAR_13, 0x351, &VAR_19, 1);
 if (VAR_16)
  goto err;

 VAR_19 = (VAR_19 >> 3) & 0x0f;
 if (VAR_19 == 11) {
  *VAR_12 |= VAR_3 | VAR_1 |
   VAR_5 | VAR_4 | VAR_2;
 } else if (VAR_19 == 10) {
  *VAR_12 |= VAR_3 | VAR_1 |
   VAR_5;
 }

 VAR_14->fe_status = *VAR_12;


 if (VAR_14->fe_status & VAR_3) {

  VAR_16 = FUNC_4(VAR_13, 0x359, VAR_20, 2);
  if (VAR_16)
   goto err;

  VAR_17 = VAR_20[0] << 8 | VAR_20[1] << 0;
  VAR_17 = FUNC_5(VAR_17, 13);
  VAR_18 = FUNC_0(-4 * VAR_17 + 32767, 0x0000, 0xffff);

  FUNC_1(&VAR_13->dev, "IF AGC=%d\n", VAR_17);

  VAR_15->strength.stat[0].scale = VAR_9;
  VAR_15->strength.stat[0].uvalue = VAR_18;
 } else {
  VAR_15->strength.stat[0].scale = VAR_8;
 }


 if (VAR_14->fe_status & VAR_5) {
  unsigned int VAR_21, VAR_22;


  static const u32 VAR_23[3][4] = {
   {70705899, 70705899, 70705899, 70705899},
   {82433173, 82433173, 87483115, 94445660},
   {92888734, 92888734, 95487525, 99770748},
  };

  VAR_16 = FUNC_4(VAR_13, 0x33c, &VAR_19, 1);
  if (VAR_16)
   goto err;

  VAR_22 = (VAR_19 >> 2) & 0x03;
  if (VAR_22 > 3 - 1)
   goto err;

  VAR_21 = (VAR_19 >> 4) & 0x07;
  if (VAR_21 > 4 - 1)
   goto err;

  VAR_16 = FUNC_4(VAR_13, 0x40c, VAR_20, 2);
  if (VAR_16)
   goto err;

  VAR_18 = VAR_20[0] << 8 | VAR_20[1] << 0;
  if (VAR_18)
   VAR_17 = (VAR_23[VAR_22][VAR_21] -
          FUNC_3(VAR_18)) / ((1 << 24) / 10000);
  else
   VAR_17 = 0;

  FUNC_1(&VAR_13->dev, "CNR raw=%u\n", VAR_18);

  VAR_15->cnr.stat[0].scale = VAR_7;
  VAR_15->cnr.stat[0].svalue = VAR_17;
 } else {
  VAR_15->cnr.stat[0].scale = VAR_8;
 }


 if (VAR_14->fe_status & VAR_2) {
  VAR_16 = FUNC_4(VAR_13, 0x34e, VAR_20, 2);
  if (VAR_16)
   goto err;

  VAR_18 = VAR_20[0] << 8 | VAR_20[1] << 0;
  VAR_14->post_bit_error += VAR_18;
  VAR_14->post_bit_count += 1000000;

  FUNC_1(&VAR_13->dev, "BER errors=%u total=1000000\n", VAR_18);

  VAR_15->post_bit_error.stat[0].scale = VAR_6;
  VAR_15->post_bit_error.stat[0].uvalue = VAR_14->post_bit_error;
  VAR_15->post_bit_count.stat[0].scale = VAR_6;
  VAR_15->post_bit_count.stat[0].uvalue = VAR_14->post_bit_count;
 } else {
  VAR_15->post_bit_error.stat[0].scale = VAR_8;
  VAR_15->post_bit_count.stat[0].scale = VAR_8;
 }


 return VAR_16;
err:
 FUNC_1(&VAR_13->dev, "failed=%d\n", VAR_16);
 return VAR_16;
}
