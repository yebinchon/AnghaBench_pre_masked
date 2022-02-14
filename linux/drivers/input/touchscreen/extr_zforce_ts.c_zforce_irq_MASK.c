
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zforce_ts {scalar_t__ suspended; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct zforce_ts *VAR_3 = VAR_2;
 struct i2c_client *VAR_4 = VAR_3->client;

 if (VAR_3->suspended && FUNC_0(&VAR_4->dev))
  FUNC_1(&VAR_4->dev, 500);

 return VAR_0;
}
