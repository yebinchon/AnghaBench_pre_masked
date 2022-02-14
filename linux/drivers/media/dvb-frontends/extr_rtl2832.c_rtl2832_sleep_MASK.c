
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl2832_dev {int sleeping; scalar_t__ fe_status; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct rtl2832_dev* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct rtl2832_dev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct rtl2832_dev *VAR_2 = VAR_1->demodulator_priv;
 struct i2c_client *VAR_3 = VAR_2->client;
 int VAR_4;

 FUNC_0(&VAR_3->dev, "\n");

 VAR_2->sleeping = 1;
 VAR_2->fe_status = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_0, 0x1);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_3->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
