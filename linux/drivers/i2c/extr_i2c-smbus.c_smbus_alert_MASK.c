
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_smbus_alert {struct i2c_client* ara; } ;
struct i2c_client {TYPE_1__* adapter; int dev; } ;
struct alert_data {int data; int addr; int type; } ;
typedef int s32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned short,int) ;
 int FUNC_1 (int *,char*,unsigned short) ;
 int FUNC_2 (int *,struct alert_data*,int ) ;
 int FUNC_3 (struct i2c_client*) ;
 int VAR_2 ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct i2c_smbus_alert *VAR_5 = VAR_4;
 struct i2c_client *VAR_6;
 unsigned short VAR_7 = 0;

 VAR_6 = VAR_5->ara;

 for (;;) {
  s32 VAR_8;
  struct alert_data VAR_9;
  VAR_8 = FUNC_3(VAR_6);
  if (VAR_8 < 0)
   break;

  VAR_9.data = VAR_8 & 1;
  VAR_9.addr = VAR_8 >> 1;
  VAR_9.type = VAR_0;

  if (VAR_9.addr == VAR_7) {
   FUNC_1(&VAR_6->dev, "Duplicate SMBALERT# from dev "
    "0x%02x, skipping\n", VAR_9.addr);
   break;
  }
  FUNC_0(&VAR_6->dev, "SMBALERT# from dev 0x%02x, flag %d\n",
   VAR_9.addr, VAR_9.data);


  FUNC_2(&VAR_6->adapter->dev, &VAR_9,
          VAR_2);
  VAR_7 = VAR_9.addr;
 }

 return VAR_1;
}
