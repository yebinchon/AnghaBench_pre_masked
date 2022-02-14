
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct i2c_adapter {int dummy; } ;
struct af9013_state {TYPE_1__* muxc; } ;
struct TYPE_2__ {struct i2c_adapter** adapter; } ;


 int FUNC_0 (int *,char*) ;
 struct af9013_state* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static struct i2c_adapter *FUNC_2(struct i2c_client *VAR_0)
{
 struct af9013_state *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 return VAR_1->muxc->adapter[0];
}
