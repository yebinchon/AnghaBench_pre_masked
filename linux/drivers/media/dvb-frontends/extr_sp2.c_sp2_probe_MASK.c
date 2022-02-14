
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sp2_config {int ci_control; int priv; int dvb_adap; } ;
struct sp2 {struct i2c_client* client; int ci_control; int priv; int dvb_adap; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_3__ {struct sp2_config* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct i2c_client*,struct sp2*) ;
 int FUNC_3 (struct sp2*) ;
 struct sp2* FUNC_4 (int,int ) ;
 int FUNC_5 (struct sp2*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2,
  const struct i2c_device_id *VAR_3)
{
 struct sp2_config *VAR_4 = VAR_2->dev.platform_data;
 struct sp2 *VAR_5;
 int VAR_6;

 FUNC_0(&VAR_2->dev, "\n");

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto err;
 }

 VAR_5->client = VAR_2;
 VAR_5->dvb_adap = VAR_4->dvb_adap;
 VAR_5->priv = VAR_4->priv;
 VAR_5->ci_control = VAR_4->ci_control;

 FUNC_2(VAR_2, VAR_5);

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6)
  goto err;

 FUNC_1(&VAR_5->client->dev, "CIMaX SP2 successfully attached\n");
 return 0;
err:
 FUNC_0(&VAR_2->dev, "init failed=%d\n", VAR_6);
 FUNC_3(VAR_5);

 return VAR_6;
}
