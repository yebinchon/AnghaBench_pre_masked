
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct i2c_par {TYPE_1__ adapter; struct i2c_client* ara; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct i2c_par *VAR_1 = VAR_0;
 struct i2c_client *VAR_2 = VAR_1->ara;

 if (VAR_2) {
  FUNC_0(&VAR_2->dev, "SMBus alert received\n");
  FUNC_1(VAR_2);
 } else
  FUNC_0(&VAR_1->adapter.dev,
   "SMBus alert received but no ARA client!\n");
}
