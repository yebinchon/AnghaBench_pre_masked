
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef void* u8 ;
struct TYPE_3__ {int param; int app; int core; int boot; } ;
struct mip4_ts {void** product_name; int product_id; void** ic_name; int max_x; void** max_y; int ppm_x; void** ppm_y; int event_format; void** event_size; TYPE_2__* client; void* node_key; void* key_num; void* node_y; void* node_x; TYPE_1__ fw_version; int fw_name; } ;
typedef int cmd ;
struct TYPE_4__ {int dev; int addr; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (void**) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;
 int FUNC_5 (struct mip4_ts*) ;
 int FUNC_6 (struct mip4_ts*,void**,int,void**,int) ;
 int FUNC_7 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_8(struct mip4_ts *VAR_10)
{
 union i2c_smbus_data VAR_11;
 int VAR_12;
 u8 VAR_13[2];
 u8 VAR_14[14];





 if (FUNC_4(VAR_10->client->adapter, VAR_10->client->addr,
      0, VAR_2, 0, VAR_1, &VAR_11) < 0) {
  FUNC_1(&VAR_10->client->dev, "nothing at this address\n");
  return -VAR_0;
 }


 VAR_13[0] = VAR_4;
 VAR_13[1] = VAR_8;
 VAR_12 = FUNC_6(VAR_10, VAR_13, sizeof(VAR_13),
         VAR_10->product_name, sizeof(VAR_10->product_name));
 if (VAR_12)
  FUNC_2(&VAR_10->client->dev,
    "Failed to retrieve product name: %d\n", VAR_12);
 else
  FUNC_0(&VAR_10->client->dev, "product name: %.*s\n",
   (int)sizeof(VAR_10->product_name), VAR_10->product_name);


 VAR_13[0] = VAR_4;
 VAR_13[1] = VAR_7;
 VAR_12 = FUNC_6(VAR_10, VAR_13, sizeof(VAR_13), VAR_14, 2);
 if (VAR_12) {
  FUNC_2(&VAR_10->client->dev,
    "Failed to retrieve product id: %d\n", VAR_12);
 } else {
  VAR_10->product_id = FUNC_3(&VAR_14[0]);
  FUNC_0(&VAR_10->client->dev, "product id: %04X\n", VAR_10->product_id);
 }


 FUNC_7(VAR_10->fw_name, sizeof(VAR_10->fw_name),
  "melfas_mip4_%04X.fw", VAR_10->product_id);
 FUNC_0(&VAR_10->client->dev, "firmware name: %s\n", VAR_10->fw_name);


 VAR_13[0] = VAR_4;
 VAR_13[1] = VAR_6;
 VAR_12 = FUNC_6(VAR_10, VAR_13, sizeof(VAR_13),
         VAR_10->ic_name, sizeof(VAR_10->ic_name));
 if (VAR_12)
  FUNC_2(&VAR_10->client->dev,
    "Failed to retrieve IC name: %d\n", VAR_12);
 else
  FUNC_0(&VAR_10->client->dev, "IC name: %.*s\n",
   (int)sizeof(VAR_10->ic_name), VAR_10->ic_name);


 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12)
  FUNC_2(&VAR_10->client->dev,
   "Failed to retrieve FW version: %d\n", VAR_12);
 else
  FUNC_0(&VAR_10->client->dev, "F/W Version: %04X %04X %04X %04X\n",
    VAR_10->fw_version.boot, VAR_10->fw_version.core,
    VAR_10->fw_version.app, VAR_10->fw_version.param);


 VAR_13[0] = VAR_4;
 VAR_13[1] = VAR_9;
 VAR_12 = FUNC_6(VAR_10, VAR_13, sizeof(VAR_13), VAR_14, 14);
 if (VAR_12) {
  FUNC_2(&VAR_10->client->dev,
    "Failed to retrieve touchscreen parameters: %d\n",
    VAR_12);
 } else {
  VAR_10->max_x = FUNC_3(&VAR_14[0]);
  VAR_10->max_y = FUNC_3(&VAR_14[2]);
  FUNC_0(&VAR_10->client->dev, "max_x: %d, max_y: %d\n",
   VAR_10->max_x, VAR_10->max_y);

  VAR_10->node_x = VAR_14[4];
  VAR_10->node_y = VAR_14[5];
  VAR_10->node_key = VAR_14[6];
  FUNC_0(&VAR_10->client->dev,
   "node_x: %d, node_y: %d, node_key: %d\n",
   VAR_10->node_x, VAR_10->node_y, VAR_10->node_key);

  VAR_10->ppm_x = VAR_14[12];
  VAR_10->ppm_y = VAR_14[13];
  FUNC_0(&VAR_10->client->dev, "ppm_x: %d, ppm_y: %d\n",
   VAR_10->ppm_x, VAR_10->ppm_y);


  if (VAR_10->node_key > 0)
   VAR_10->key_num = VAR_10->node_key;
 }


 VAR_13[0] = VAR_3;
 VAR_13[1] = VAR_5;
 VAR_12 = FUNC_6(VAR_10, VAR_13, sizeof(VAR_13), VAR_14, 7);
 if (VAR_12) {
  FUNC_2(&VAR_10->client->dev,
   "Failed to retrieve device type: %d\n", VAR_12);
  VAR_10->event_format = 0xff;
 } else {
  VAR_10->event_format = FUNC_3(&VAR_14[4]);
  VAR_10->event_size = VAR_14[6];
  FUNC_0(&VAR_10->client->dev, "event_format: %d, event_size: %d\n",
   VAR_10->event_format, VAR_10->event_size);

  if (VAR_10->event_format == 2 || VAR_10->event_format > 3)
   FUNC_2(&VAR_10->client->dev,
     "Unknown event format %d\n", VAR_10->event_format);
 }

 return 0;
}
