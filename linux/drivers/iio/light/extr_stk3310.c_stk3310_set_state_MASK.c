
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk3310_data {int ps_enabled; int als_enabled; int lock; int reg_state; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct stk3310_data *VAR_4, u8 VAR_5)
{
 int VAR_6;
 struct i2c_client *VAR_7 = VAR_4->client;


 if (VAR_5 > 7 || VAR_5 == 4)
  return -VAR_0;

 FUNC_1(&VAR_4->lock);
 VAR_6 = FUNC_3(VAR_4->reg_state, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_7->dev, "failed to change sensor state\n");
 } else if (VAR_5 != VAR_3) {

  VAR_4->ps_enabled = !!(VAR_5 & VAR_2);
  VAR_4->als_enabled = !!(VAR_5 & VAR_1);
 }
 FUNC_2(&VAR_4->lock);

 return VAR_6;
}
