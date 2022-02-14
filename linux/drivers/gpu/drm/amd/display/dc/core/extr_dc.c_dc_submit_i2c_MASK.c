
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct i2c_command {int dummy; } ;
struct ddc_service {int ddc_pin; } ;
struct dc_link {struct ddc_service* ddc; } ;
struct dc {int res_pool; struct dc_link** links; } ;


 int FUNC_0 (int ,int ,struct i2c_command*) ;

bool FUNC_1(
  struct dc *VAR_0,
  uint32_t VAR_1,
  struct i2c_command *VAR_2)
{

 struct dc_link *VAR_3 = VAR_0->links[VAR_1];
 struct ddc_service *VAR_4 = VAR_3->ddc;
 return FUNC_0(
  VAR_0->res_pool,
  VAR_4->ddc_pin,
  VAR_2);
}
