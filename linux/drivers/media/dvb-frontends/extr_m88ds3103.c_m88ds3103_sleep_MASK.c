
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m88ds3103_dev {scalar_t__ chip_id; int delivery_system; scalar_t__ fe_status; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct m88ds3103_dev* demodulator_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct m88ds3103_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2)
{
 struct m88ds3103_dev *VAR_3 = VAR_2->demodulator_priv;
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;
 unsigned int VAR_6;

 FUNC_0(&VAR_4->dev, "\n");

 VAR_3->fe_status = 0;
 VAR_3->delivery_system = VAR_1;


 if (VAR_3->chip_id == VAR_0)
  VAR_6 = 0x29;
 else
  VAR_6 = 0x27;
 VAR_5 = FUNC_1(VAR_3, VAR_6, 0x01, 0x00);
 if (VAR_5)
  goto err;


 VAR_5 = FUNC_1(VAR_3, 0x08, 0x01, 0x00);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_1(VAR_3, 0x04, 0x01, 0x01);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_1(VAR_3, 0x23, 0x10, 0x10);
 if (VAR_5)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
