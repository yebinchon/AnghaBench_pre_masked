
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si2168_dev {int active; char version; int warm; } ;
struct si2168_cmd {int dummy; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* demodulator_priv; } ;


 int FUNC_0 (struct si2168_cmd*,char*,int,int ) ;
 int FUNC_1 (int *,char*,...) ;
 struct si2168_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,struct si2168_cmd*) ;
 int FUNC_4 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->demodulator_priv;
 struct si2168_dev *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;
 struct si2168_cmd VAR_4;

 FUNC_1(&VAR_1->dev, "\n");

 VAR_2->active = 0;


 VAR_3 = FUNC_4(VAR_0, 0);
 if (VAR_3)
  goto err;


 if (VAR_2->version > ('B' << 24 | 4 << 16 | 0 << 8 | 11 << 0))
  VAR_2->warm = 0;

 FUNC_0(&VAR_4, "\x13", 1, 0);
 VAR_3 = FUNC_3(VAR_1, &VAR_4);
 if (VAR_3)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_1->dev, "failed=%d\n", VAR_3);
 return VAR_3;
}
