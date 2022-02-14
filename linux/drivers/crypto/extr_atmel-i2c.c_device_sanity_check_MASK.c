
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct atmel_i2c_cmd {scalar_t__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct atmel_i2c_cmd*) ;
 int FUNC_1 (struct i2c_client*,struct atmel_i2c_cmd*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct atmel_i2c_cmd*) ;
 struct atmel_i2c_cmd* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5)
{
 struct atmel_i2c_cmd *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6);

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7)
  goto free_cmd;







 if (VAR_6->data[VAR_3] || VAR_6->data[VAR_4]) {
  FUNC_2(&VAR_5->dev, "Configuration or Data and OTP zones are unlocked!\n");
  VAR_7 = -VAR_1;
 }


free_cmd:
 FUNC_3(VAR_6);
 return VAR_7;
}
