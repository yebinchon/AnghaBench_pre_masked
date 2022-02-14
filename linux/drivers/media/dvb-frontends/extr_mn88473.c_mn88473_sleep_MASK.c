
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mn88473_dev {int active; int * regmap; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* demodulator_priv; } ;


 int FUNC_0 (int *,char*,...) ;
 struct mn88473_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->demodulator_priv;
 struct mn88473_dev *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_0(&VAR_1->dev, "\n");

 VAR_2->active = 0;

 VAR_3 = FUNC_2(VAR_2->regmap[2], 0x05, 0x3e);
 if (VAR_3)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_1->dev, "failed=%d\n", VAR_3);
 return VAR_3;
}
