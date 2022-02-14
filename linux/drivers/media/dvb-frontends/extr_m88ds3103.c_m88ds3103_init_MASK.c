
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


struct m88ds3103_dev {int warm; scalar_t__ chip_id; int regmap; TYPE_1__* cfg; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct firmware {int size; int * data; } ;
struct TYPE_17__ {int len; TYPE_7__* stat; } ;
struct TYPE_15__ {int len; TYPE_5__* stat; } ;
struct TYPE_13__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_8__ post_bit_count; TYPE_6__ post_bit_error; TYPE_4__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct m88ds3103_dev* demodulator_priv; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_18__ {TYPE_2__ info; } ;
struct TYPE_16__ {void* scale; } ;
struct TYPE_14__ {void* scale; } ;
struct TYPE_12__ {void* scale; } ;
struct TYPE_10__ {int i2c_wr_max; } ;


 int VAR_0 ;
 void* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_9__ VAR_5 ;
 int FUNC_3 (struct m88ds3103_dev*,int,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int,int *,int) ;
 int FUNC_6 (int ,int,unsigned int*) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_6)
{
 struct m88ds3103_dev *VAR_7 = VAR_6->demodulator_priv;
 struct i2c_client *VAR_8 = VAR_7->client;
 struct dtv_frontend_properties *VAR_9 = &VAR_6->dtv_property_cache;
 int VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13;
 const struct firmware *VAR_14;
 const char *VAR_15;

 FUNC_0(&VAR_8->dev, "\n");


 VAR_7->warm = 0;


 VAR_10 = FUNC_3(VAR_7, 0x08, 0x01, 0x01);
 if (VAR_10)
  goto err;
 VAR_10 = FUNC_3(VAR_7, 0x04, 0x01, 0x00);
 if (VAR_10)
  goto err;
 VAR_10 = FUNC_3(VAR_7, 0x23, 0x10, 0x00);
 if (VAR_10)
  goto err;


 VAR_10 = FUNC_6(VAR_7->regmap, 0xb9, &VAR_13);
 if (VAR_10)
  goto err;

 FUNC_0(&VAR_8->dev, "firmware=%02x\n", VAR_13);

 if (VAR_13)
  goto warm;


 VAR_10 = FUNC_7(VAR_7->regmap, 0x07, 0xe0);
 if (VAR_10)
  goto err;
 VAR_10 = FUNC_7(VAR_7->regmap, 0x07, 0x00);
 if (VAR_10)
  goto err;


 FUNC_2(&VAR_8->dev, "found a '%s' in cold state\n",
   VAR_5.info.name);

 if (VAR_7->chip_id == VAR_3)
  VAR_15 = VAR_4;
 else
  VAR_15 = VAR_2;

 VAR_10 = FUNC_9(&VAR_14, VAR_15, &VAR_8->dev);
 if (VAR_10) {
  FUNC_1(&VAR_8->dev, "firmware file '%s' not found\n", VAR_15);
  goto err;
 }

 FUNC_2(&VAR_8->dev, "downloading firmware from file '%s'\n", VAR_15);

 VAR_10 = FUNC_7(VAR_7->regmap, 0xb2, 0x01);
 if (VAR_10)
  goto err_release_firmware;

 for (VAR_12 = VAR_14->size; VAR_12 > 0; VAR_12 -= (VAR_7->cfg->i2c_wr_max - 1)) {
  VAR_11 = FUNC_4(VAR_7->cfg->i2c_wr_max - 1, VAR_12);
  VAR_10 = FUNC_5(VAR_7->regmap, 0xb0,
     &VAR_14->data[VAR_14->size - VAR_12],
     VAR_11);
  if (VAR_10) {
   FUNC_1(&VAR_8->dev, "firmware download failed %d\n",
    VAR_10);
   goto err_release_firmware;
  }
 }

 VAR_10 = FUNC_7(VAR_7->regmap, 0xb2, 0x00);
 if (VAR_10)
  goto err_release_firmware;

 FUNC_8(VAR_14);

 VAR_10 = FUNC_6(VAR_7->regmap, 0xb9, &VAR_13);
 if (VAR_10)
  goto err;

 if (!VAR_13) {
  VAR_10 = -VAR_0;
  FUNC_2(&VAR_8->dev, "firmware did not run\n");
  goto err;
 }

 FUNC_2(&VAR_8->dev, "found a '%s' in warm state\n",
   VAR_5.info.name);
 FUNC_2(&VAR_8->dev, "firmware version: %X.%X\n",
   (VAR_13 >> 4) & 0xf, (VAR_13 >> 0 & 0xf));

warm:

 VAR_7->warm = 1;


 VAR_9->cnr.len = 1;
 VAR_9->cnr.stat[0].scale = VAR_1;
 VAR_9->post_bit_error.len = 1;
 VAR_9->post_bit_error.stat[0].scale = VAR_1;
 VAR_9->post_bit_count.len = 1;
 VAR_9->post_bit_count.stat[0].scale = VAR_1;

 return 0;
err_release_firmware:
 FUNC_8(VAR_14);
err:
 FUNC_0(&VAR_8->dev, "failed=%d\n", VAR_10);
 return VAR_10;
}
