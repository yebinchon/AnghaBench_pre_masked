
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
struct firmware {int size; int* data; } ;
struct af9013_state {int regmap; struct i2c_client* client; } ;
struct TYPE_3__ {char const* name; } ;
struct TYPE_4__ {TYPE_1__ info; } ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,char const*,...) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int,int*,int) ;
 int FUNC_5 (int ,int,unsigned int*) ;
 int FUNC_6 (int ,int,unsigned int,int,int,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_10(struct af9013_state *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;
 u8 VAR_11[4];
 u16 VAR_12 = 0;
 const struct firmware *VAR_13;
 const char *VAR_14 = VAR_0;

 FUNC_0(&VAR_5->dev, "\n");


 VAR_6 = FUNC_5(VAR_4->regmap, 0x98be, &VAR_10);
 if (VAR_6)
  goto err;

 FUNC_0(&VAR_5->dev, "firmware status %02x\n", VAR_10);

 if (VAR_10 == 0x0c)
  return 0;

 FUNC_2(&VAR_5->dev, "found a '%s' in cold state, will try to load a firmware\n",
   VAR_3.info.name);


 VAR_6 = FUNC_9(&VAR_13, VAR_14, &VAR_5->dev);
 if (VAR_6) {
  FUNC_2(&VAR_5->dev, "firmware file '%s' not found %d\n",
    VAR_14, VAR_6);
  goto err;
 }

 FUNC_2(&VAR_5->dev, "downloading firmware from file '%s'\n",
   VAR_14);


 for (VAR_7 = 0; VAR_7 < VAR_13->size; VAR_7++)
  VAR_12 += VAR_13->data[VAR_7];

 VAR_11[0] = (VAR_12 >> 8) & 0xff;
 VAR_11[1] = (VAR_12 >> 0) & 0xff;
 VAR_11[2] = (VAR_13->size >> 8) & 0xff;
 VAR_11[3] = (VAR_13->size >> 0) & 0xff;
 VAR_6 = FUNC_4(VAR_4->regmap, 0x50fc, VAR_11, 4);
 if (VAR_6)
  goto err_release_firmware;



 for (VAR_9 = VAR_13->size; VAR_9 > 0; VAR_9 -= 16) {
  VAR_8 = FUNC_3(16, VAR_9);
  VAR_6 = FUNC_4(VAR_4->regmap,
     0x5100 + VAR_13->size - VAR_9,
     &VAR_13->data[VAR_13->size - VAR_9],
     VAR_8);
  if (VAR_6) {
   FUNC_1(&VAR_5->dev, "firmware download failed %d\n",
    VAR_6);
   goto err_release_firmware;
  }
 }

 FUNC_8(VAR_13);


 VAR_6 = FUNC_7(VAR_4->regmap, 0xe205, 0x01);
 if (VAR_6)
  goto err;


 VAR_6 = FUNC_6(VAR_4->regmap, 0x98be, VAR_10,
           (VAR_10 == 0x0c || VAR_10 == 0x04),
           5000, 1000000);
 if (VAR_6)
  goto err;

 FUNC_0(&VAR_5->dev, "firmware status %02x\n", VAR_10);

 if (VAR_10 == 0x04) {
  VAR_6 = -VAR_1;
  FUNC_1(&VAR_5->dev, "firmware did not run\n");
  goto err;
 } else if (VAR_10 != 0x0c) {
  VAR_6 = -VAR_1;
  FUNC_1(&VAR_5->dev, "firmware boot timeout\n");
  goto err;
 }

 FUNC_2(&VAR_5->dev, "found a '%s' in warm state\n",
   VAR_3.info.name);

 return 0;
err_release_firmware:
 FUNC_8(VAR_13);
err:
 FUNC_0(&VAR_5->dev, "failed %d\n", VAR_6);
 return VAR_6;
}
