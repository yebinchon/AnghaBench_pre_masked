
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_touchscreen {int dsi; int base; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct rpi_touchscreen* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct rpi_touchscreen *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->dsi);

 FUNC_0(&VAR_1->base);

 FUNC_4(VAR_1->dsi);
 FUNC_2(VAR_1->dsi);

 return 0;
}
