
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lm90_data {int flags; int alert_alarms; int config; } ;
struct i2c_client {int dev; } ;
typedef enum i2c_alert_protocol { ____Placeholder_i2c_alert_protocol } i2c_alert_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct lm90_data* FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int*) ;
 int FUNC_4 (struct lm90_data*,int) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_2, enum i2c_alert_protocol VAR_3,
         unsigned int VAR_4)
{
 u16 VAR_5;

 if (VAR_3 != VAR_0)
  return;

 if (FUNC_3(VAR_2, &VAR_5)) {





  struct lm90_data *VAR_6 = FUNC_2(VAR_2);

  if ((VAR_6->flags & VAR_1) &&
      (VAR_5 & VAR_6->alert_alarms)) {
   FUNC_0(&VAR_2->dev, "Disabling ALERT#\n");
   FUNC_4(VAR_6, VAR_6->config | 0x80);
  }
 } else {
  FUNC_1(&VAR_2->dev, "Everything OK\n");
 }
}
