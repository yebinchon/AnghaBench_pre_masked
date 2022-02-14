
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {struct a8293_platform_data* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct TYPE_4__ {int set_voltage; } ;
struct dvb_frontend {struct a8293_dev* sec_priv; TYPE_1__ ops; } ;
struct a8293_platform_data {struct dvb_frontend* dvb_frontend; } ;
struct a8293_dev {struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct i2c_client*,int *,int) ;
 int FUNC_3 (struct i2c_client*,struct a8293_dev*) ;
 int FUNC_4 (struct a8293_dev*) ;
 struct a8293_dev* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_3,
         const struct i2c_device_id *VAR_4)
{
 struct a8293_dev *VAR_5;
 struct a8293_platform_data *VAR_6 = VAR_3->dev.platform_data;
 struct dvb_frontend *VAR_7 = VAR_6->dvb_frontend;
 int VAR_8;
 u8 VAR_9[2];

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_5->client = VAR_3;


 VAR_8 = FUNC_2(VAR_3, VAR_9, 2);
 if (VAR_8 < 0)
  goto err_kfree;


 VAR_7->ops.set_voltage = VAR_2;
 VAR_7->sec_priv = VAR_5;
 FUNC_3(VAR_3, VAR_5);

 FUNC_1(&VAR_3->dev, "Allegro A8293 SEC successfully attached\n");
 return 0;
err_kfree:
 FUNC_4(VAR_5);
err:
 FUNC_0(&VAR_3->dev, "failed=%d\n", VAR_8);
 return VAR_8;
}
