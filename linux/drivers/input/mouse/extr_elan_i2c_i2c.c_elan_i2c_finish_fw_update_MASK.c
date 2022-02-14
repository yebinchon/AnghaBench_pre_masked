
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct i2c_client*,int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct completion*) ;
 int FUNC_8 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_6,
         struct completion *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 int VAR_9;
 int VAR_10;
 u8 VAR_11[VAR_3];

 VAR_10 = FUNC_5(VAR_6, VAR_11, VAR_3);
 if (VAR_10 != VAR_3) {
  VAR_9 = VAR_10 < 0 ? VAR_10 : -VAR_0;
  FUNC_1(VAR_8, "failed to read I2C data after FW WDT reset: %d (%d)\n",
   VAR_9, VAR_10);
 }

 FUNC_7(VAR_7);
 FUNC_4(VAR_6->irq);

 VAR_9 = FUNC_3(VAR_6, VAR_5, VAR_4);
 if (VAR_9) {
  FUNC_0(VAR_8, "device reset failed: %d\n", VAR_9);
 } else if (!FUNC_8(VAR_7,
      FUNC_6(300))) {
  FUNC_0(VAR_8, "timeout waiting for device reset\n");
  VAR_9 = -VAR_1;
 }

 FUNC_2(VAR_6->irq);

 if (VAR_9)
  return VAR_9;

 VAR_10 = FUNC_5(VAR_6, VAR_11, VAR_2);
 if (VAR_10 != VAR_2) {
  VAR_9 = VAR_10 < 0 ? VAR_10 : -VAR_0;
  FUNC_0(VAR_8, "failed to read INT signal: %d (%d)\n",
   VAR_9, VAR_10);
  return VAR_9;
 }

 return 0;
}
