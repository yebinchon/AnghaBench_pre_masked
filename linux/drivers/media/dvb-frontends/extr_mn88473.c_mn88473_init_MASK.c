
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct mn88473_dev {int i2c_wr_max; int active; int * regmap; } ;
struct i2c_client {int dev; } ;
struct firmware {int size; int * data; } ;
struct TYPE_15__ {int len; TYPE_11__* stat; } ;
struct TYPE_13__ {int len; TYPE_9__* stat; } ;
struct TYPE_23__ {int len; TYPE_7__* stat; } ;
struct TYPE_21__ {int len; TYPE_5__* stat; } ;
struct TYPE_19__ {int len; TYPE_3__* stat; } ;
struct TYPE_17__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_12__ block_count; TYPE_10__ block_error; TYPE_8__ post_bit_count; TYPE_6__ post_bit_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* demodulator_priv; } ;
struct TYPE_24__ {void* scale; } ;
struct TYPE_22__ {void* scale; } ;
struct TYPE_20__ {void* scale; } ;
struct TYPE_18__ {void* scale; } ;
struct TYPE_16__ {void* scale; } ;
struct TYPE_14__ {void* scale; } ;


 int VAR_0 ;
 void* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,char const*) ;
 struct mn88473_dev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int,int *,int) ;
 int FUNC_6 (int ,int,unsigned int*) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->demodulator_priv;
 struct mn88473_dev *VAR_5 = FUNC_3(VAR_4);
 struct dtv_frontend_properties *VAR_6 = &VAR_3->dtv_property_cache;
 int VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;
 const struct firmware *VAR_11;
 const char *VAR_12 = VAR_2;

 FUNC_0(&VAR_4->dev, "\n");


 VAR_7 = FUNC_6(VAR_5->regmap[0], 0xf5, &VAR_10);
 if (VAR_7)
  goto err;

 if (!(VAR_10 & 0x01))
  goto warm;


 VAR_7 = FUNC_9(&VAR_11, VAR_12, &VAR_4->dev);
 if (VAR_7) {
  FUNC_1(&VAR_4->dev, "firmware file '%s' not found\n", VAR_12);
  goto err;
 }

 FUNC_2(&VAR_4->dev, "downloading firmware from file '%s'\n", VAR_12);

 VAR_7 = FUNC_7(VAR_5->regmap[0], 0xf5, 0x03);
 if (VAR_7)
  goto err_release_firmware;

 for (VAR_9 = VAR_11->size; VAR_9 > 0; VAR_9 -= (VAR_5->i2c_wr_max - 1)) {
  VAR_8 = FUNC_4(VAR_5->i2c_wr_max - 1, VAR_9);
  VAR_7 = FUNC_5(VAR_5->regmap[0], 0xf6,
     &VAR_11->data[VAR_11->size - VAR_9], VAR_8);
  if (VAR_7) {
   FUNC_1(&VAR_4->dev, "firmware download failed %d\n",
    VAR_7);
   goto err_release_firmware;
  }
 }

 FUNC_8(VAR_11);


 VAR_7 = FUNC_6(VAR_5->regmap[0], 0xf8, &VAR_10);
 if (VAR_7)
  goto err;

 if (VAR_10 & 0x10) {
  FUNC_1(&VAR_4->dev, "firmware parity check failed\n");
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_7 = FUNC_7(VAR_5->regmap[0], 0xf5, 0x00);
 if (VAR_7)
  goto err;
warm:

 VAR_7 = FUNC_7(VAR_5->regmap[2], 0x09, 0x08);
 if (VAR_7)
  goto err;
 VAR_7 = FUNC_7(VAR_5->regmap[2], 0x08, 0x1d);
 if (VAR_7)
  goto err;

 VAR_5->active = 1;


 VAR_6->strength.len = 1;
 VAR_6->strength.stat[0].scale = VAR_1;
 VAR_6->cnr.len = 1;
 VAR_6->cnr.stat[0].scale = VAR_1;
 VAR_6->post_bit_error.len = 1;
 VAR_6->post_bit_error.stat[0].scale = VAR_1;
 VAR_6->post_bit_count.len = 1;
 VAR_6->post_bit_count.stat[0].scale = VAR_1;
 VAR_6->block_error.len = 1;
 VAR_6->block_error.stat[0].scale = VAR_1;
 VAR_6->block_count.len = 1;
 VAR_6->block_count.stat[0].scale = VAR_1;

 return 0;
err_release_firmware:
 FUNC_8(VAR_11);
err:
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_7);
 return VAR_7;
}
