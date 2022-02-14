
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mn88472_dev {int i2c_write_max; int ts_mode; int ts_clk; int active; int * regmap; } ;
struct i2c_client {int dev; } ;
struct firmware {int size; int * data; } ;
struct dvb_frontend {struct i2c_client* demodulator_priv; } ;


 int VAR_0 ;

 char* VAR_1 ;



 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,char const*) ;
 struct mn88472_dev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int,int *,int) ;
 int FUNC_6 (int ,int,unsigned int*) ;
 int FUNC_7 (int ,int,unsigned int) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_2)
{
 struct i2c_client *VAR_3 = VAR_2->demodulator_priv;
 struct mn88472_dev *VAR_4 = FUNC_3(VAR_3);
 int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;
 const struct firmware *VAR_9;
 const char *VAR_10 = VAR_1;

 FUNC_0(&VAR_3->dev, "\n");


 VAR_5 = FUNC_7(VAR_4->regmap[2], 0x05, 0x00);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_7(VAR_4->regmap[2], 0x0b, 0x00);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_7(VAR_4->regmap[2], 0x0c, 0x00);
 if (VAR_5)
  goto err;


 VAR_5 = FUNC_6(VAR_4->regmap[0], 0xf5, &VAR_8);
 if (VAR_5)
  goto err;
 if (!(VAR_8 & 0x01))
  goto warm;

 VAR_5 = FUNC_9(&VAR_9, VAR_10, &VAR_3->dev);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "firmware file '%s' not found\n", VAR_10);
  goto err;
 }

 FUNC_2(&VAR_3->dev, "downloading firmware from file '%s'\n", VAR_10);

 VAR_5 = FUNC_7(VAR_4->regmap[0], 0xf5, 0x03);
 if (VAR_5)
  goto err_release_firmware;

 for (VAR_7 = VAR_9->size; VAR_7 > 0; VAR_7 -= (VAR_4->i2c_write_max - 1)) {
  VAR_6 = FUNC_4(VAR_4->i2c_write_max - 1, VAR_7);
  VAR_5 = FUNC_5(VAR_4->regmap[0], 0xf6,
     &VAR_9->data[VAR_9->size - VAR_7],
     VAR_6);
  if (VAR_5) {
   FUNC_1(&VAR_3->dev, "firmware download failed %d\n",
    VAR_5);
   goto err_release_firmware;
  }
 }


 VAR_5 = FUNC_6(VAR_4->regmap[0], 0xf8, &VAR_8);
 if (VAR_5)
  goto err_release_firmware;
 if (VAR_8 & 0x10) {
  VAR_5 = -VAR_0;
  FUNC_1(&VAR_3->dev, "firmware did not run\n");
  goto err_release_firmware;
 }

 VAR_5 = FUNC_7(VAR_4->regmap[0], 0xf5, 0x00);
 if (VAR_5)
  goto err_release_firmware;

 FUNC_8(VAR_9);
warm:

 switch (VAR_4->ts_mode) {
 case 129:
  VAR_8 = 0x1d;
  break;
 case 130:
  VAR_8 = 0x00;
  break;
 default:
  VAR_5 = -VAR_0;
  goto err;
 }
 VAR_5 = FUNC_7(VAR_4->regmap[2], 0x08, VAR_8);
 if (VAR_5)
  goto err;

 switch (VAR_4->ts_clk) {
 case 128:
  VAR_8 = 0xe3;
  break;
 case 131:
  VAR_8 = 0xe1;
  break;
 default:
  VAR_5 = -VAR_0;
  goto err;
 }
 VAR_5 = FUNC_7(VAR_4->regmap[0], 0xd9, VAR_8);
 if (VAR_5)
  goto err;

 VAR_4->active = 1;

 return 0;
err_release_firmware:
 FUNC_8(VAR_9);
err:
 FUNC_0(&VAR_3->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
