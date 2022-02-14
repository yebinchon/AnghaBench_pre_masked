
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max8997_led {int enabled; TYPE_1__* iodev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int dev; struct i2c_client* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct max8997_led *VAR_2, bool VAR_3)
{
 int VAR_4;
 struct i2c_client *VAR_5 = VAR_2->iodev->i2c;
 u8 VAR_6 = 0, VAR_7 = VAR_0;

 if (VAR_2->enabled == VAR_3)
  return;

 VAR_6 = VAR_3 ? VAR_0 : 0;

 VAR_4 = FUNC_1(VAR_5, VAR_1, VAR_6, VAR_7);
 if (VAR_4)
  FUNC_0(VAR_2->iodev->dev,
   "failed to update register(%d)\n", VAR_4);

 VAR_2->enabled = VAR_3;
}
