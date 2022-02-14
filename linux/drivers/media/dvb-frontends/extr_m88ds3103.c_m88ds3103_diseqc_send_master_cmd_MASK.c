
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m88ds3103_dev {int regmap; TYPE_1__* cfg; int warm; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct m88ds3103_dev* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int msg; } ;
struct TYPE_2__ {int envelope_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 unsigned long VAR_4 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct m88ds3103_dev*,int,int,int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int ,int,int ,int) ;
 int FUNC_5 (int ,int,unsigned int*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_5,
  struct dvb_diseqc_master_cmd *VAR_6)
{
 struct m88ds3103_dev *VAR_7 = VAR_5->demodulator_priv;
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 unsigned int VAR_10;
 unsigned long VAR_11;

 FUNC_0(&VAR_8->dev, "msg=%*ph\n",
  VAR_6->msg_len, VAR_6->msg);

 if (!VAR_7->warm) {
  VAR_9 = -VAR_0;
  goto err;
 }

 if (VAR_6->msg_len < 3 || VAR_6->msg_len > 6) {
  VAR_9 = -VAR_1;
  goto err;
 }

 VAR_10 = VAR_7->cfg->envelope_mode << 5;
 VAR_9 = FUNC_2(VAR_7, 0xa2, 0xe0, VAR_10);
 if (VAR_9)
  goto err;

 VAR_9 = FUNC_4(VAR_7->regmap, 0xa3, VAR_6->msg,
   VAR_6->msg_len);
 if (VAR_9)
  goto err;

 VAR_9 = FUNC_6(VAR_7->regmap, 0xa1,
   (VAR_6->msg_len - 1) << 3 | 0x07);
 if (VAR_9)
  goto err;



 VAR_11 = VAR_4 + FUNC_3(120);


 VAR_10 = VAR_6->msg_len * 13500;
 FUNC_8(VAR_10 - 4000, VAR_10);

 for (VAR_10 = 1; !FUNC_7(VAR_4, VAR_11) && VAR_10;) {
  VAR_9 = FUNC_5(VAR_7->regmap, 0xa1, &VAR_10);
  if (VAR_9)
   goto err;
  VAR_10 = (VAR_10 >> 6) & 0x1;
 }

 if (VAR_10 == 0) {
  FUNC_0(&VAR_8->dev, "diseqc tx took %u ms\n",
   FUNC_1(VAR_4) -
   (FUNC_1(VAR_11) - 120));
 } else {
  FUNC_0(&VAR_8->dev, "diseqc tx timeout\n");

  VAR_9 = FUNC_2(VAR_7, 0xa1, 0xc0, 0x40);
  if (VAR_9)
   goto err;
 }

 VAR_9 = FUNC_2(VAR_7, 0xa2, 0xc0, 0x80);
 if (VAR_9)
  goto err;

 if (VAR_10 == 1) {
  VAR_9 = -VAR_2;
  goto err;
 }

 return 0;
err:
 FUNC_0(&VAR_8->dev, "failed=%d\n", VAR_9);
 return VAR_9;
}
