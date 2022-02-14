
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct auo_pixcir_ts {struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct auo_pixcir_ts *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = VAR_2->client;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev, "unable to read reg %Xh, %d\n",
   VAR_1, VAR_5);
  return VAR_5;
 }

 VAR_5 &= ~VAR_0;
 VAR_5 |= VAR_3;

 VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_5);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev, "unable to write reg %Xh, %d\n",
   VAR_1, VAR_5);
  return VAR_5;
 }

 return 0;
}
