
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct adp5589_kpad {int input; struct i2c_client* client; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct adp5589_kpad*,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct adp5589_kpad *VAR_8 = VAR_7;
 struct i2c_client *VAR_9 = VAR_8->client;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_9, VAR_0);

 if (VAR_10 & VAR_5)
  FUNC_3(&VAR_9->dev, "Event Overflow Error\n");

 if (VAR_10 & VAR_2) {
  VAR_11 = FUNC_0(VAR_9, VAR_1) & VAR_4;
  if (VAR_11) {
   FUNC_1(VAR_8, VAR_11);
   FUNC_4(VAR_8->input);
  }
 }

 FUNC_2(VAR_9, VAR_0, VAR_10);

 return VAR_3;
}
