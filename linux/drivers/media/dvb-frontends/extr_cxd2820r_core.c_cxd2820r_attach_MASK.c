
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct i2c_board_info {struct cxd2820r_platform_data* platform_data; int addr; int type; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;
struct cxd2820r_platform_data {int** gpio_chip_base; int attach_in_use; struct dvb_frontend* (* get_dvb_frontend ) (struct i2c_client*) ;int spec_inv; int if_agc_polarity; int ts_clk_inv; int ts_mode; } ;
struct cxd2820r_config {int i2c_address; int spec_inv; int if_agc_polarity; int ts_clock_inv; int ts_mode; } ;
typedef int board_info ;


 int VAR_0 ;
 struct i2c_client* FUNC_0 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 struct dvb_frontend* FUNC_3 (struct i2c_client*) ;

struct dvb_frontend *FUNC_4(const struct cxd2820r_config *VAR_1,
         struct i2c_adapter *VAR_2,
         int *VAR_3)
{
 struct i2c_client *VAR_4;
 struct i2c_board_info VAR_5;
 struct cxd2820r_platform_data VAR_6;

 VAR_6.ts_mode = VAR_1->ts_mode;
 VAR_6.ts_clk_inv = VAR_1->ts_clock_inv;
 VAR_6.if_agc_polarity = VAR_1->if_agc_polarity;
 VAR_6.spec_inv = VAR_1->spec_inv;
 VAR_6.gpio_chip_base = &VAR_3;
 VAR_6.attach_in_use = 1;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_2(VAR_5.type, "cxd2820r", VAR_0);
 VAR_5.addr = VAR_1->i2c_address;
 VAR_5.platform_data = &VAR_6;
 VAR_4 = FUNC_0(VAR_2, &VAR_5);
 if (!VAR_4 || !VAR_4->dev.driver)
  return ((void*)0);

 return VAR_6.get_dvb_frontend(VAR_4);
}
