
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct si2168_dev {int warm; int firmware_name; scalar_t__ chip_id; char version; int active; } ;
struct si2168_cmd {char* args; } ;
struct i2c_client {int dev; } ;
struct firmware {int size; int* data; } ;
struct TYPE_16__ {int len; TYPE_7__* stat; } ;
struct TYPE_14__ {int len; TYPE_5__* stat; } ;
struct TYPE_12__ {int len; TYPE_3__* stat; } ;
struct TYPE_10__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_8__ block_error; TYPE_6__ post_bit_count; TYPE_4__ post_bit_error; TYPE_2__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* demodulator_priv; } ;
struct TYPE_15__ {void* scale; } ;
struct TYPE_13__ {void* scale; } ;
struct TYPE_11__ {void* scale; } ;
struct TYPE_9__ {void* scale; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct si2168_cmd*,char*,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int,...) ;
 int FUNC_4 (int *,char*,int ) ;
 struct si2168_dev* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,int,int *) ;
 int FUNC_8 (struct i2c_client*,struct si2168_cmd*) ;
 int FUNC_9 (struct dvb_frontend*,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_6)
{
 struct i2c_client *VAR_7 = VAR_6->demodulator_priv;
 struct si2168_dev *VAR_8 = FUNC_5(VAR_7);
 struct dtv_frontend_properties *VAR_9 = &VAR_6->dtv_property_cache;
 int VAR_10, VAR_11, VAR_12;
 const struct firmware *VAR_13;
 struct si2168_cmd VAR_14;

 FUNC_1(&VAR_7->dev, "\n");


 FUNC_0(&VAR_14, "\xc0\x12\x00\x0c\x00\x0d\x16\x00\x00\x00\x00\x00\x00",
   13, 0);
 VAR_10 = FUNC_8(VAR_7, &VAR_14);
 if (VAR_10)
  goto err;

 if (VAR_8->warm) {

  FUNC_0(&VAR_14, "\xc0\x06\x08\x0f\x00\x20\x21\x01", 8, 1);
  VAR_10 = FUNC_8(VAR_7, &VAR_14);
  if (VAR_10)
   goto err;

  FUNC_10(100);
  FUNC_0(&VAR_14, "\x85", 1, 1);
  VAR_10 = FUNC_8(VAR_7, &VAR_14);
  if (VAR_10)
   goto err;

  goto warm;
 }


 FUNC_0(&VAR_14, "\xc0\x06\x01\x0f\x00\x20\x20\x01", 8, 1);
 VAR_10 = FUNC_8(VAR_7, &VAR_14);
 if (VAR_10)
  goto err;


 VAR_10 = FUNC_7(&VAR_13, VAR_8->firmware_name, &VAR_7->dev);
 if (VAR_10) {

  if (VAR_8->chip_id == VAR_5) {
   VAR_8->firmware_name = VAR_4;
   VAR_10 = FUNC_7(&VAR_13, VAR_8->firmware_name,
            &VAR_7->dev);
  }

  if (VAR_10 == 0) {
   FUNC_4(&VAR_7->dev,
     "please install firmware file '%s'\n",
     VAR_3);
  } else {
   FUNC_2(&VAR_7->dev,
     "firmware file '%s' not found\n",
     VAR_8->firmware_name);
   goto err_release_firmware;
  }
 }

 FUNC_3(&VAR_7->dev, "downloading firmware from file '%s'\n",
   VAR_8->firmware_name);

 if ((VAR_13->size % 17 == 0) && (VAR_13->data[0] > 5)) {

  for (VAR_12 = VAR_13->size; VAR_12 > 0; VAR_12 -= 17) {
   VAR_11 = VAR_13->data[VAR_13->size - VAR_12];
   if (VAR_11 > VAR_2) {
    VAR_10 = -VAR_0;
    break;
   }
   FUNC_0(&VAR_14, &VAR_13->data[(VAR_13->size - VAR_12) + 1],
     VAR_11, 1);
   VAR_10 = FUNC_8(VAR_7, &VAR_14);
   if (VAR_10)
    break;
  }
 } else if (VAR_13->size % 8 == 0) {

  for (VAR_12 = VAR_13->size; VAR_12 > 0; VAR_12 -= 8) {
   FUNC_0(&VAR_14, &VAR_13->data[VAR_13->size - VAR_12], 8, 1);
   VAR_10 = FUNC_8(VAR_7, &VAR_14);
   if (VAR_10)
    break;
  }
 } else {

  VAR_10 = -VAR_0;
 }

 if (VAR_10) {
  FUNC_2(&VAR_7->dev, "firmware download failed %d\n", VAR_10);
  goto err_release_firmware;
 }

 FUNC_6(VAR_13);

 FUNC_0(&VAR_14, "\x01\x01", 2, 1);
 VAR_10 = FUNC_8(VAR_7, &VAR_14);
 if (VAR_10)
  goto err;


 FUNC_0(&VAR_14, "\x11", 1, 10);
 VAR_10 = FUNC_8(VAR_7, &VAR_14);
 if (VAR_10)
  goto err;

 VAR_8->version = (VAR_14.args[9] + '@') << 24 | (VAR_14.args[6] - '0') << 16 |
         (VAR_14.args[7] - '0') << 8 | (VAR_14.args[8]) << 0;
 FUNC_3(&VAR_7->dev, "firmware version: %c %d.%d.%d\n",
   VAR_8->version >> 24 & 0xff, VAR_8->version >> 16 & 0xff,
   VAR_8->version >> 8 & 0xff, VAR_8->version >> 0 & 0xff);


 VAR_10 = FUNC_9(VAR_6, 1);
 if (VAR_10)
  goto err;

 VAR_8->warm = 1;
warm:

 VAR_9->cnr.len = 1;
 VAR_9->cnr.stat[0].scale = VAR_1;
 VAR_9->post_bit_error.len = 1;
 VAR_9->post_bit_error.stat[0].scale = VAR_1;
 VAR_9->post_bit_count.len = 1;
 VAR_9->post_bit_count.stat[0].scale = VAR_1;
 VAR_9->block_error.len = 1;
 VAR_9->block_error.stat[0].scale = VAR_1;

 VAR_8->active = 1;

 return 0;
err_release_firmware:
 FUNC_6(VAR_13);
err:
 FUNC_1(&VAR_7->dev, "failed=%d\n", VAR_10);
 return VAR_10;
}
