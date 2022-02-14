
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m88ds3103_platform_data {int attach_in_use; struct dvb_frontend* (* get_dvb_frontend ) (struct i2c_client*) ;struct i2c_adapter* (* get_i2c_adapter ) (struct i2c_client*) ;int lnb_en_pol; int lnb_hv_pol; int envelope_mode; int clk_out; int agc_inv; int agc; int spec_inv; int ts_clk_pol; int ts_clk; int ts_mode; int i2c_wr_max; int clk; } ;
struct m88ds3103_config {int i2c_addr; int lnb_en_pol; int lnb_hv_pol; int envelope_mode; int clock_out; int agc_inv; int agc; int spec_inv; int ts_clk_pol; int ts_clk; int ts_mode; int i2c_wr_max; int clock; } ;
struct TYPE_2__ {int driver; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct i2c_board_info {struct m88ds3103_platform_data* platform_data; int addr; int type; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;
typedef int board_info ;


 int VAR_0 ;
 struct i2c_client* FUNC_0 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 struct i2c_adapter* FUNC_3 (struct i2c_client*) ;
 struct dvb_frontend* FUNC_4 (struct i2c_client*) ;

struct dvb_frontend *FUNC_5(const struct m88ds3103_config *VAR_1,
          struct i2c_adapter *VAR_2,
          struct i2c_adapter **VAR_3)
{
 struct i2c_client *VAR_4;
 struct i2c_board_info VAR_5;
 struct m88ds3103_platform_data VAR_6 = {};

 VAR_6.clk = VAR_1->clock;
 VAR_6.i2c_wr_max = VAR_1->i2c_wr_max;
 VAR_6.ts_mode = VAR_1->ts_mode;
 VAR_6.ts_clk = VAR_1->ts_clk;
 VAR_6.ts_clk_pol = VAR_1->ts_clk_pol;
 VAR_6.spec_inv = VAR_1->spec_inv;
 VAR_6.agc = VAR_1->agc;
 VAR_6.agc_inv = VAR_1->agc_inv;
 VAR_6.clk_out = VAR_1->clock_out;
 VAR_6.envelope_mode = VAR_1->envelope_mode;
 VAR_6.lnb_hv_pol = VAR_1->lnb_hv_pol;
 VAR_6.lnb_en_pol = VAR_1->lnb_en_pol;
 VAR_6.attach_in_use = 1;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_2(VAR_5.type, "m88ds3103", VAR_0);
 VAR_5.addr = VAR_1->i2c_addr;
 VAR_5.platform_data = &VAR_6;
 VAR_4 = FUNC_0(VAR_2, &VAR_5);
 if (!VAR_4 || !VAR_4->dev.driver)
  return ((void*)0);

 *VAR_3 = VAR_6.get_i2c_adapter(VAR_4);
 return VAR_6.get_dvb_frontend(VAR_4);
}
