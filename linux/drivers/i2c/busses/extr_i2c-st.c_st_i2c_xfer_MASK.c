
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_i2c_dev {int busy; int clk; int dev; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct st_i2c_dev* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct st_i2c_dev*) ;
 int FUNC_7 (struct st_i2c_dev*,struct i2c_msg*,int,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_0,
   struct i2c_msg VAR_1[], int VAR_2)
{
 struct st_i2c_dev *VAR_3 = FUNC_3(VAR_0);
 int VAR_4, VAR_5;

 VAR_3->busy = 1;

 VAR_4 = FUNC_1(VAR_3->clk);
 if (VAR_4) {
  FUNC_2(VAR_3->dev, "Failed to prepare_enable clock\n");
  return VAR_4;
 }

 FUNC_4(VAR_3->dev);

 FUNC_6(VAR_3);

 for (VAR_5 = 0; (VAR_5 < VAR_2) && !VAR_4; VAR_5++)
  VAR_4 = FUNC_7(VAR_3, &VAR_1[VAR_5], VAR_5 == 0, VAR_5 == VAR_2 - 1);

 FUNC_5(VAR_3->dev);

 FUNC_0(VAR_3->clk);

 VAR_3->busy = 0;

 return (VAR_4 < 0) ? VAR_4 : VAR_5;
}
