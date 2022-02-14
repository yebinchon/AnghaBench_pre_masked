
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgdt330x_config {int dummy; } ;
struct TYPE_2__ {int driver; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct i2c_board_info {struct lgdt330x_config* platform_data; int addr; int type; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;


 struct i2c_client* FUNC_0 (struct i2c_adapter*,struct i2c_board_info*) ;
 struct dvb_frontend* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,char*,int) ;

struct dvb_frontend *FUNC_3(const struct lgdt330x_config *VAR_0,
         u8 VAR_1,
         struct i2c_adapter *VAR_2)
{
 struct i2c_client *VAR_3;
 struct i2c_board_info VAR_4 = {};
 struct lgdt330x_config VAR_5 = *VAR_0;

 FUNC_2(VAR_4.type, "lgdt330x", sizeof(VAR_4.type));
 VAR_4.addr = VAR_1;
 VAR_4.platform_data = &VAR_5;
 VAR_3 = FUNC_0(VAR_2, &VAR_4);
 if (!VAR_3 || !VAR_3->dev.driver)
  return ((void*)0);

 return FUNC_1(VAR_3);
}
