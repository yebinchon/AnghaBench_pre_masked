
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct cm36651_data {int* cs_ctrl_regs; int* ps_ctrl_regs; int flags; struct i2c_client* ps_client; struct i2c_client* client; } ;






 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *) ;
 size_t* VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,size_t,int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct cm36651_data *VAR_9, int VAR_10)
{
 struct i2c_client *VAR_11 = VAR_9->client;
 struct i2c_client *VAR_12 = VAR_9->ps_client;
 int VAR_13 = -VAR_7;

 switch (VAR_10) {
 case 129:
  VAR_13 = FUNC_2(VAR_11, VAR_0,
    VAR_9->cs_ctrl_regs[VAR_0]);
  break;
 case 128:
  if (FUNC_4(VAR_1, &VAR_9->flags))
   return VAR_1;

  VAR_13 = FUNC_2(VAR_12, VAR_2,
    VAR_9->ps_ctrl_regs[VAR_2]);
  break;
 case 130:
  if (FUNC_4(VAR_1, &VAR_9->flags)) {
   FUNC_1(&VAR_11->dev,
    "Already proximity event enable state\n");
   return VAR_13;
  }
  FUNC_3(VAR_1, &VAR_9->flags);

  VAR_13 = FUNC_2(VAR_12,
   VAR_8[VAR_2],
   VAR_4 | VAR_6 | VAR_5);

  if (VAR_13 < 0) {
   FUNC_1(&VAR_11->dev, "Proximity enable event failed\n");
   return VAR_13;
  }
  break;
 case 131:
  if (!FUNC_4(VAR_1, &VAR_9->flags)) {
   FUNC_1(&VAR_11->dev,
    "Already proximity event disable state\n");
   return VAR_13;
  }
  FUNC_0(VAR_1, &VAR_9->flags);
  VAR_13 = FUNC_2(VAR_12,
     VAR_2, VAR_3);
  break;
 }

 if (VAR_13 < 0)
  FUNC_1(&VAR_11->dev, "Write register failed\n");

 return VAR_13;
}
