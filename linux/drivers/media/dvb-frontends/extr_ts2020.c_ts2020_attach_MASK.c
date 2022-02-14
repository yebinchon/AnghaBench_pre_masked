
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ts2020_config {int attach_in_use; int tuner_address; struct dvb_frontend* fe; } ;
struct TYPE_2__ {int driver; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct i2c_board_info {struct ts2020_config* platform_data; int addr; int type; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;
typedef int pdata ;
typedef int board_info ;


 int VAR_0 ;
 struct i2c_client* FUNC_0 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_1 (struct ts2020_config*,struct ts2020_config const*,int) ;
 int FUNC_2 (struct i2c_board_info*,int ,int) ;
 int FUNC_3 (int ,char*,int ) ;

struct dvb_frontend *FUNC_4(struct dvb_frontend *VAR_1,
     const struct ts2020_config *VAR_2,
     struct i2c_adapter *VAR_3)
{
 struct i2c_client *VAR_4;
 struct i2c_board_info VAR_5;


 struct ts2020_config VAR_6;

 FUNC_1(&VAR_6, VAR_2, sizeof(VAR_6));
 VAR_6.fe = VAR_1;
 VAR_6.attach_in_use = 1;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_3(VAR_5.type, "ts2020", VAR_0);
 VAR_5.addr = VAR_2->tuner_address;
 VAR_5.platform_data = &VAR_6;
 VAR_4 = FUNC_0(VAR_3, &VAR_5);
 if (!VAR_4 || !VAR_4->dev.driver)
  return ((void*)0);

 return VAR_1;
}
